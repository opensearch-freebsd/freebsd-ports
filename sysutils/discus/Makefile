PORTNAME=	discus
DISTVERSION=	0.5.0
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	freebsd@ny-central.org
COMMENT=	Discus is a program to display hard drive space usage
WWW=		https://github.com/ncarrier/discus

LICENSE=	GPLv2

USES=		python shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	ncarrier

SHEBANG_FILES=	discus.py

NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS

post-patch:
	${REINPLACE_CMD} -e "s@/etc/discusrc@${PREFIX}/discusrc@g" ${WRKSRC}/discus.py

do-install:
	${MKDIR} ${STAGEDIR}/${ETCDIR}/
	${MKDIR} ${STAGEDIR}/${DOCSDIR}
	${MKDIR} ${STAGEDIR}/${PREFIX}/sbin
	${INSTALL_DATA} ${WRKSRC}/discusrc ${STAGEDIR}/${ETCDIR}/discusrc.sample
	${INSTALL_MAN} ${WRKSRC}/discus.1 ${STAGEDIR}/${PREFIX}/share/man/man1
	${INSTALL_SCRIPT} ${WRKSRC}/discus.py ${STAGEDIR}/${PREFIX}/sbin/discus

do-install-DOCS-on:
	${INSTALL_MAN} ${WRKSRC}/README.md ${STAGEDIR}/${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/AUTHORS ${STAGEDIR}/${DOCSDIR}

.include <bsd.port.mk>
