PORTNAME=	portupgrade
PORTVERSION=	2.4.16
PORTREVISION=	4
PORTEPOCH=	2
CATEGORIES=	ports-mgmt
MASTER_SITES=	LOCAL/bdrewery/${PORTNAME}/ \
		http://mirror.shatow.net/freebsd/${PORTNAME}/ \
		GH

MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	FreeBSD ports/packages administration and management tool suite
WWW=		https://wiki.freebsd.org/portupgrade

LICENSE=	BSD3CLAUSE

OPTIONS_DEFINE=	DOCS

CONFLICTS_INSTALL=	portupgrade-devel

USE_GITHUB=	yes
GH_ACCOUNT=	freebsd

DIST_SUBDIR=	${PORTNAME}
USES=		ruby uidfix

USE_LDCONFIG=	${PREFIX}/lib/compat/pkg

MAKE_ARGS=	PREFIX="${PREFIX}" RUBY="${RUBY}" \
		RUBY_SITELIBDIR="${RUBY_SITELIBDIR}" MKDIR="${MKDIR}"

EXAMPLESDIR=	${PREFIX}/share/examples/pkgtools
DOCSDIR=	${PREFIX}/share/doc/pkgtools

INSTALL_TARGET=		install
DOCS_INSTALL_TARGET=	install-doc

# For PKG_DBDRIVER={bdb_btree,bdb_hash}
RUN_DEPENDS+=	${RUBY_SITEARCHLIBDIR}/bdb.so:databases/ruby-bdb

post-patch:
	cd ${WRKSRC} && ${FIND} bin etc lib -type f |\
		${XARGS} ${REINPLACE_CMD} 's/File\.exists\?/File.exist?/'

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/compat/pkg

.include <bsd.port.mk>
