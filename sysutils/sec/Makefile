PORTNAME=	sec
DISTVERSION=	2.9.2
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	SF/simple-evcorr/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ecu@200ok.org
COMMENT=	Simple event (logs) correlator
WWW=		https://simple-evcorr.github.io/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		perl5 shebangfix
USE_RC_SUBR=	sec

SHEBANG_FILES=	sec

SUB_LIST=	PERL=${PERL}

NO_BUILD=	yes
NO_ARCH=	yes

PORTDOCS=	ChangeLog README

PORTCONTRIB=	convert.pl itostream.c swatch2sec.pl

PLIST_FILES=	bin/sec \
		share/man/man8/sec.8.gz \
		${PORTCONTRIB:S|^|share/sec/|}

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/sec.man ${STAGEDIR}${PREFIX}/share/man/man8/sec.8
	@${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC}/contrib && ${INSTALL_DATA} ${PORTCONTRIB} ${STAGEDIR}${DATADIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
