PORTNAME=	tpb
PORTVERSION=	0.6.4
PORTREVISION=	14
CATEGORIES=	deskutils
MASTER_SITES=	SAVANNAH

MAINTAINER=	dmitryluhtionov@gmail.com
COMMENT=	On-Screen-Display for hotkeys of IBM ThinkPads
WWW=		https://www.nongnu.org/tpb/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libxosd.so:misc/xosd

ONLY_FOR_ARCHS=	i386 amd64

USES=		gmake iconv localbase pkgconfig xorg
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	${ICONV_CONFIGURE_ARG}
USE_XORG=	x11 sm ice xext

OPTIONS_DEFINE=	EXAMPLES NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext
NLS_CONFIGURE_OFF=	--disable-nls

post-patch:
.for i in man/tpb.1 src/cfg.h
	@${REINPLACE_CMD} -e \
		's|%%PREFIX%%|${PREFIX}|g ; \
		 s|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/${i}
.endfor
	@${REINPLACE_CMD} -e \
		's|void test()||' ${WRKSRC}/configure

post-install:
	${INSTALL_DATA} ${WRKSRC}/doc/tpbrc ${STAGEDIR}${PREFIX}/etc/tpbrc.default

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/callback_example.sh ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
