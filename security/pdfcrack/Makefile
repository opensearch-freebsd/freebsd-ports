PORTNAME=	pdfcrack
PORTVERSION=	0.20
PORTREVISION=	1
CATEGORIES=	security print
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@virtual-estates.net
COMMENT=	Cracking tool for password-protected PDF-files
WWW=		https://sourceforge.net/projects/pdfcrack/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

PLIST_FILES=	bin/pdfcrack bin/pdfreader share/man/man1/pdfcrack.1.gz
ALL_TARGET=	pdfcrack pdfreader

post-patch:
	${REINPLACE_CMD} 's,-O.* -g,,' ${WRKSRC}/Makefile

post-build:
	${COMPRESS_CMD} < ${WRKSRC}/pdfcrack.1 > ${WRKSRC}/pdfcrack.1.gz

do-install:
	${INSTALL_PROGRAM} ${PLIST_FILES:Mbin/*:S,bin/,${WRKSRC}/,g} \
		${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${PLIST_FILES:Mshare/man/*:S,share/man/man1/,${WRKSRC}/,g}	\
		${STAGEDIR}${PREFIX}/share/man/man1/

.include <bsd.port.mk>
