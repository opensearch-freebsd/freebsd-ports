PORTNAME=	pgspecial
PORTVERSION=	2.2.1
CATEGORIES=	databases python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Meta-commands handler for Postgres Database
WWW=		https://github.com/dbcli/pgspecial

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/License.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=61.0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools-scm>=8:devel/py-setuptools-scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=4.1:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psycopg>=3.0.10:databases/py-psycopg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlparse>=0.1.19:databases/py-sqlparse@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

.include <bsd.port.mk>
