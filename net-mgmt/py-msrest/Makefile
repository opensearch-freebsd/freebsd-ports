PORTNAME=	msrest
PORTVERSION=	0.7.1
PORTREVISION=	1
CATEGORIES=	net-mgmt python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	AutoRest swagger generator Python client runtime
WWW=		https://github.com/Azure/msrest-for-python

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}azure-core>=1.24.0:devel/py-azure-core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}certifi>=2017.4.17:security/py-certifi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}isodate>=0.6.0:devel/py-isodate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.16:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests-oauthlib>=0.5.0:www/py-requests-oauthlib@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

.include <bsd.port.mk>
