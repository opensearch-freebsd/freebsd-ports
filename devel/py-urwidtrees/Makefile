PORTNAME=	urwidtrees
PORTVERSION=	1.0.3
PORTREVISION=	1
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	geier@lostpackets.de
COMMENT=	Tree widgets for py-urwid
WWW=		https://github.com/pazz/urwidtrees

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}urwid>=1.0.0:devel/py-urwid@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}urwid>=1.0.0:devel/py-urwid@${PY_FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	pazz

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
