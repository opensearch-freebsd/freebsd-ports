PORTNAME=	supertuxkart
DISTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	https://github.com/supertuxkart/stk-code/releases/download/${DISTVERSION}/
DISTNAME=	SuperTuxKart-${DISTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Free 3D kart racing game
WWW=		http://supertuxkart.sourceforge.net/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_i386=	ld: error: cannot preempt symbol: alcOpenDevice

LIB_DEPENDS=	libcurl.so:ftp/curl \
		libangelscript.so:lang/angelscript \
		libmcpp.so:devel/mcpp

USES=		alias cmake compiler:c++11-lib pkgconfig sqlite ssl tar:xz
CMAKE_OFF=	USE_WIIUSE
CMAKE_OFF+=	BUILD_RECORDER
CMAKE_OFF+=	USE_SYSTEM_ENET  # bundled enet is required for IPv6 support
CMAKE_OFF+=	USE_SYSTEM_SQUISH  # does not build with system squish
CMAKE_ON+=	USE_SYSTEM_ANGELSCRIPT

PORTDATA=	*

CXXFLAGS+=	-DNO_IRR_COMPILE_WITH_JOYSTICK_EVENTS_ \
		-D__FREE_BSD_

OPTIONS_DEFINE=	NETTLE SERVER_ONLY
OPTIONS_DEFAULT=NETTLE

NETTLE_DESC=		Use Nettle instead of OpenSSL for cryptography
NETTLE_LIB_DEPENDS=	libnettle.so:security/nettle
NETTLE_USES_OFF=	ssl
NETTLE_CMAKE_BOOL_OFF=	USE_CRYPTO_OPENSSL

SERVER_ONLY_DESC=	Build server only
SERVER_ONLY_CMAKE_BOOL=	SERVER_ONLY
SERVER_ONLY_LIB_DEPENDS_OFF= \
			libvorbisfile.so:audio/libvorbis \
			libogg.so:audio/libogg \
			libpng.so:graphics/png \
			libfreetype.so:print/freetype2 \
			libharfbuzz.so:print/harfbuzz
SERVER_ONLY_USES_OFF=	gettext gl jpeg openal:al sdl xorg
SERVER_ONLY_USE_OFF=	GL=gl,glu SDL=sdl2 XORG=x11,xrandr

# make sure that bundled libraries are not used
post-extract:
.for bundled in wiiuse angelscript mcpp
	@${RM} -rf ${WRKSRC}/lib/${bundled}
.endfor

.include <bsd.port.mk>
