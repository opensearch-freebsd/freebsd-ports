PORTNAME=	python-snappy
PORTVERSION=	0.6.1
PORTREVISION=	1
CATEGORIES=	archivers devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python library for the snappy compression library from Google
WWW=		https://github.com/andrix/python-snappy

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libsnappy.so:archivers/snappy

USES=		python
USE_PYTHON=	distutils autoplist
CPPFLAGS+=	-I${LOCALBASE}/include
TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
TEST_WRKSRC=	${WRKSRC}/scratch	# Any directory different from ${WRKSRC}

do-test:
	@${MKDIR} ${TEST_WRKSRC}
	@${CP} ${WRKSRC}/test_*.py ${TEST_WRKSRC}
	@(cd ${TEST_WRKSRC} && for t in test_*.py; do ${SETENV} ${TEST_ENV} ${PYTHON_CMD} $$t; done)

.include <bsd.port.mk>
