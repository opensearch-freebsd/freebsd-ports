PORTNAME=	openbor
# Hint: svn revision is git rev-list --count ${GH_TAGNAME}
PORTVERSION?=	7743
PORTREVISION?=	0
CATEGORIES=	games

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
.if ${PORTVERSION} < 3971
PATCHFILES+=	794ba23189a3.patch:-p2
.elif ${PORTVERSION} < 7084
PATCHFILES+=	731d96887795.patch:-p2
.endif

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	2D side scrolling engine for beat 'em ups, shooters, and more #'
WWW=		https://www.chronocrash.com/

LICENSE=	BSD3CLAUSE
.if ${PORTVERSION} < 7696
LICENSE+=	GPLv2+
.endif
.if ${PORTVERSION} >= 4134
LICENSE+=	ISCL
.endif
LICENSE_COMB=	multi
LICENSE_FILE_BSD3CLAUSE=${WRKSRC}/LICENSE
LICENSE_FILE_GPLv2+ =	${_LICENSE_STORE}/GPLv2 # source/gfxlib/hq2x.c
LICENSE_FILE_ISCL=	${WRKSRC}/source/webmlib/nestegg/LICENSE

LIB_DEPENDS=	libpng.so:graphics/png
.if ${PORTVERSION} >= 4134
LIB_DEPENDS+=	libvpx.so:multimedia/libvpx
.endif

.ifdef PKGNAMESUFFIX
PORTSCOUT=	ignore:1
.endif

USE_GITHUB=	yes
GH_ACCOUNT=	DCurrent
GH_TAGNAME?=	7eedd899

USES+=		cpe gmake pkgconfig sdl
.if ${PORTVERSION} < 4433
USE_CSTD=	gnu89
.endif
.if ${PORTVERSION} < 4108
USE_SDL=	gfx
.elif ${PORTVERSION} < 6639 || ${PORTVERSION} >= 7416
USE_SDL=	gfx2
.else
USE_SDL=	sdl2
.endif
WRKSRC_SUBDIR=	engine
MAKE_ENV=	BUILD_LINUX=1 SDKPATH="${LOCALBASE}" \
		GCC_TARGET="${CONFIGURE_TARGET:S/amd64/x86_64/}"
MAKE_ARGS=	CC="${CC}" LIBRARIES="${LOCALBASE}/lib" \
		TARGET_ARCH=${ARCH:S/i386/x86/} ARCHFLAGS="" \
		TARGET_FINAL='${TARGET}' BUILD_MMX="" ECHO="${ECHO}"
.if ${PORTVERSION} < 7098
CFLAGS+=	-fcommon # https://github.com/DCurrent/openbor/issues/206
.endif
LDFLAGS+=	-Wl,--as-needed # ogg, pthread, zlib
SUB_FILES=	pkg-message
SUB_LIST=	PKGBASE=${PKGBASE}
PLIST_FILES=	bin/${PKGBASE} \
		share/pixmaps/${PKGBASE}.png
DOCSDIR=	${PREFIX}/share/doc/${PKGBASE}
PORTDOCS=	README

DESKTOP_ENTRIES="OpenBOR v${${PORTVERSION}<7533:?3:4}.0 Build ${PORTVERSION}" \
		"" \
		"${PKGBASE}" \
		"${PKGBASE}" \
		"Game;ArcadeGame;" \
		""

OPTIONS_DEFINE=		DOCS TREMOR
OPTIONS_DEFAULT=	${MACHINE_CPU:Msoftfp:C/.+/TREMOR/}
OPTIONS_DEFINE_i386=	MMX
OPTIONS_DEFAULT_i386=	MMX # runtime detection

MMX_BUILD_DEPENDS=	yasm:devel/yasm
MMX_MAKE_ARGS=		BUILD_MMX=1

TREMOR_LIB_DEPENDS=	libvorbisidec.so:audio/libtremor
TREMOR_MAKE_ARGS=	BUILD_TREMOR=1 BUILD_VORBIS=""
TREMOR_LIB_DEPENDS_OFF=	libvorbisfile.so:audio/libvorbis

post-patch:
	@${REINPLACE_CMD} -e 's/ -O[0-9]//; s/ -g//; s/ -Werror//' \
		-e 's/ -fomit-frame-pointer//' \
		-e 's/ -freorder-blocks//' \
		-e 's/ -Wno-unused-result//' \
		-e 's/ -Wl,-rpath,$$(LIBRARIES)//' \
		-e '/echo/!s/	@/	/' \
		-e 's/@echo/@$$(ECHO)/' \
		-e 's/$$(LIBS)/$$(LDFLAGS) &/' \
		${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's/\.openbor/.${PKGBASE}/' \
		${WRKSRC}/sdl/sdlport.c
	@${GREP} -Flr 'malloc.h' ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} \
		's,malloc\.h,stdlib.h,'
	@${REINPLACE_CMD} -e 's/^function \(.*\) {/\1() {/' \
		-e '/^[[:space:]]*VERSION_.*=0000/d' \
		-e '/.*read -r VERSION_/d' \
		${WRKSRC}/version.sh

do-configure:
	(cd ${WRKSRC} && VERSION_BUILD=${PORTVERSION} VERSION_COMMIT=${GH_TAGNAME} \
		${SH} ./version.sh)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/OpenBOR.elf \
		${STAGEDIR}${PREFIX}/bin/${PKGBASE}
	${INSTALL_DATA} ${WRKSRC}/resources/OpenBOR_Icon_128x128.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/${PKGBASE}.png
	(cd ${WRKSRC} && ${COPYTREE_SHARE} \
		"${PORTDOCS}" ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
