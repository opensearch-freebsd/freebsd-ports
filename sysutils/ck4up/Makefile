PORTNAME=	ck4up
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://jue.li/crux/ck4up/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Check HTTP and FTP sites for updates
WWW=		http://jue.li/crux/ck4up/

RUN_DEPENDS=	rubygem-gdbm>=2.0.0,2:databases/rubygem-gdbm

USES=	ruby:run

NO_BUILD=	yes
NO_ARCH=	yes

PORTEXAMPLES=	ck4up.conf

PLIST_FILES=	bin/ck4up \
		share/man/man1/ck4up.1.gz

OPTIONS_DEFINE=	EXAMPLES

post-patch:
	@${REINPLACE_CMD} -e 's|/usr|${LOCALBASE}|g; s|man/man1|share/man/man1|g' \
		${WRKSRC}/Makefile

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/ck4up.conf ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
