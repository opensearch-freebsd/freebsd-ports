PORTNAME=	dxa
PORTVERSION=	0.1.5
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.floodgap.com/retrotech/xa/dists/
PKGNAMESUFFIX=	65

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Disassembler for MOS 6502 and compatible CPUs
WWW=		http://www.floodgap.com/retrotech/xa #dxa

LICENSE=	GPLv2+

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}"

PORTDOCS=	INSTALL
PLIST_FILES=	bin/dxa65 share/man/man1/dxa.1.gz

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dxa ${STAGEDIR}${PREFIX}/bin/dxa65
	${INSTALL_MAN} ${WRKSRC}/dxa.1 ${STAGEDIR}${PREFIX}/share/man/man1

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/INSTALL ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
