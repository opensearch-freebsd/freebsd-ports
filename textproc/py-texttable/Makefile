PORTNAME=	texttable
PORTVERSION=	1.7.0
PORTREVISION=	1
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Module for creating simple ASCII tables
WWW=		https://pypi.org/project/texttable/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

CJKWRAP_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cjkwrap>=0:textproc/py-cjkwrap@${PY_FLAVOR}

USES=	python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

OPTIONS_DEFINE=	CJKWRAP

CJKWRAP_DESC=	Text Wrapping with better CJK text support

.include <bsd.port.mk>
