PORTNAME=	dbow2
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1-free-23
DISTVERSIONSUFFIX=	-g3924753
PORTREVISION=	5
CATEGORIES=	graphics

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ Library for converting images into a bag-of-word representation
WWW=		https://github.com/dorian3d/DBoW2

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libopencv_photo.so:graphics/opencv \
		libopencv_core.so:graphics/opencv

USES=		cmake compiler:c++11-lang
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	dorian3d
GH_PROJECT=	DBoW2

CMAKE_OFF=	BUILD_Demo

.include <bsd.port.mk>
