PORTNAME=	tartarus
PORTVERSION=	0.9.8
PORTREVISION=	8
CATEGORIES=	sysutils
MASTER_SITES=	http://wertarbyte.de/tartarus/ \
		https://ftp.sk.FreeBSD.org/pub/FreeBSD/local/distfiles/

MAINTAINER=	otis@FreeBSD.org
COMMENT=	Wrappers around common Unix tools for simplified backup solution
WWW=		https://wertarbyte.de/tartarus.shtml

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${LOCALBASE}/bin/bash:shells/bash \
		${LOCALBASE}/bin/gtar:archivers/gtar \
		${LOCALBASE}/bin/curl:ftp/curl \
		getopt>=0:misc/getopt

USES=		gmake perl5 shebangfix tar:bzip2
SHEBANG_FILES=	${WRKSRC}/bin/*

do-install:
	cd ${WRKSRC}/bin && ${INSTALL_SCRIPT} charon charon.ftp charon.local \
		charon.pipe orpheus tartarus ${STAGEDIR}${PREFIX}/bin
	cd ${WRKSRC}/lib && ${COPYTREE_SHARE} Tartarus ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}
	cd ${WRKSRC}/man && ${INSTALL_MAN} charon.ftp.1 charon.local.1 \
		charon.pipe.1 tartarus.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL} -lrs ${STAGEDIR}${PREFIX}/share/man/man1/charon.ftp.1 \
		${STAGEDIR}${PREFIX}/share/man/man1/charon.1

.include <bsd.port.mk>
