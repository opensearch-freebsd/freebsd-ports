PORTNAME=	xconsole
PORTVERSION=	1.0.8
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Monitor system console messages with X
WWW=		https://gitlab.freedesktop.org/xorg/app/xconsole

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:xz xorg xorg-cat:app
USE_XORG=	x11 xaw xmu xt

GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

.include <bsd.port.mk>
