PORTNAME=	color
DISTVERSION=	g20240506
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ header-only library for color conversion and manipulation
WWW=		https://github.com/dmilos/color

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/license.txt

USE_GITHUB=	yes
GH_ACCOUNT=	dmilos
GH_TAGNAME=	1f93918

NO_BUILD=	yes
NO_ARCH=	yes

do-install:
	cd ${WRKSRC}/src && ${COPYTREE_SHARE} color ${STAGEDIR}${PREFIX}/include

.include <bsd.port.mk>
