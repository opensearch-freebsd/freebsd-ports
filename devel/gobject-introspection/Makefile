PORTNAME=	gobject-introspection
DISTVERSION=	1.84.0
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	desktop@FreeBSD.org
COMMENT=	Generate interface introspection data for GObject libraries
WWW=		https://gi.readthedocs.io/en/latest/

LICENSE=	GPLv2+ LGPL20+
LICENSE_COMB=	multi
LICENSE_FILE_LGPL20+ =	${WRKSRC}/COPYING.LGPL
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING.GPL

LIB_DEPENDS=	libffi.so:devel/libffi

FLAVORS=	default bootstrap
FLAVOR?=	${FLAVORS:[1]}

default_LIB_DEPENDS=	libglib-2.0.so:devel/glib20

bootstrap_PKGNAMESUFFIX=	-bootstrap
bootstrap_BUILD_DEPENDS=	${LOCALBASE}/glib-bootstrap/lib/libglib-2.0.so:devel/glib20@bootstrap
bootstrap_RUN_DEPENDS=		${LOCALBASE}/glib-bootstrap/lib/libglib-2.0.so:devel/glib20@bootstrap

USES=		bison gettext localbase:ldflags meson pkgconfig python tar:xz
USE_LDCONFIG=	yes
MESON_ARGS=	-Ddoctool=disabled \
		-Dpython=${PYTHON_CMD}
PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=	TEST

TEST_MESON_ENABLED=	cairo
TEST_LIB_DEPENDS=	libcairo.so:graphics/cairo

.if ${FLAVOR:U} == bootstrap
MESON_ARGS+=	-Dcairo=disabled
OPTIONS_DEFINE=
PREFIX=		${LOCALBASE}/${PORTNAME}-bootstrap
.endif

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 31200
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/py-setuptools@${PY_FLAVOR}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/py-setuptools@${PY_FLAVOR}
.endif

.if ${FLAVOR:U} == bootstrap
post-extract:
	${LN} -s ${LOCALBASE}/glib-bootstrap/libdata/pkgconfig ${PKGCONFIG_LINKDIR}
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|%%PYTHON_CMD%%|${PYTHON_CMD}|' ${WRKSRC}/tools/meson.build

post-stage:
	@${PYTHON_CMD} -m compileall -d ${PREFIX}/lib/${PORTNAME} \
		"${STAGEDIR}${PREFIX}/lib/${PORTNAME}"
	@${PYTHON_CMD} -O -m compileall -d ${PREFIX}/lib/${PORTNAME} \
		"${STAGEDIR}${PREFIX}/lib/${PORTNAME}"

post-install:
	@${RM} ${STAGEDIR}${PREFIX}/lib/gobject-introspection/giscanner/doctemplates/*/meson.build*

.include <bsd.port.post.mk>
