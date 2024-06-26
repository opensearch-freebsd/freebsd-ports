PORTNAME=	tclhttpd
PORTVERSION=	3.5.1
PORTREVISION=	6
CATEGORIES=	www tcl
MASTER_SITES=	TCLTK/httpd
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@virtual-estates.net
COMMENT=	Http-server implemented in TCL
WWW=		https://www.tcl.tk/software/tclhttpd/

RUN_DEPENDS=	dtplite:devel/tcllib

USE_RC_SUBR=	tclhttpd

USES=		tcl:tea compiler

GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

.include <bsd.port.pre.mk>

SHLIB_NAME!=	${MAKE} -f "${FILESDIR}/Makefile.lib" -V SHLIB_NAME
PLIST_SUB+=	PORTVERSION=${PORTVERSION} \
		SHLIB_NAME=${SHLIB_NAME}
MAKE_ENV+=	TCLSH_PROG=${TCLSH} FILESDIR="${FILESDIR}" TCL_DVER=${TCL_VER} \
		PREFIX=${STAGEDIR}${PREFIX}
SCRIPTS_ENV+=	TCL_DVER=${TCL_VER}
SUB_LIST+=	TCL_DVER=${TCL_VER}

do-build:
	${MAKE_ENV} ${MAKE} -C ${WRKSRC} ${MAKE_ARGS}	\
		FILESDIR="${FILESDIR}"	\
		${_MAKE_JOBS} -f "${FILESDIR}/Makefile.lib"

pre-su-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/tclhttpd/custom

post-install:
	${INSTALL_DATA} ${WRKSRC}/${SHLIB_NAME} \
		${STAGEDIR}${PREFIX}/lib/${PORTNAME}${PORTVERSION}/${SHLIB_NAME}
	${INSTALL_SCRIPT} ${WRKSRC}/bin/httpd.tcl \
		${WRKSRC}/bin/httpdthread.tcl ${STAGEDIR}${PREFIX}/bin/
	${SED} 's%@VER@%${PORTVERSION}%g' < ${WRKSRC}/bin/tclhttpd.rc \
		> ${STAGEDIR}${PREFIX}/etc/tclhttpd.rc.default
	${SED} 's%@LIB@%${SHLIB_NAME}%g' < \
		${FILESDIR}/pkgIndex.tcl >> \
		${STAGEDIR}${PREFIX}/lib/${PORTNAME}${PORTVERSION}/pkgIndex.tcl

.if ${COMPILER_TYPE} == "clang" && ${COMPILER_VERSION} >= 150
CFLAGS+=	-std=c90 -Wno-deprecated-non-prototype
.endif

.include <bsd.port.post.mk>
