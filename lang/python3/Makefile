PORTNAME=	python3
PORTVERSION=	3
PORTREVISION=	4
CATEGORIES=	lang python
MASTER_SITES=	# empty
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	python@FreeBSD.org
COMMENT=	Meta-port for the Python interpreter 3.x
WWW=		https://www.python.org/

USES=		python:run

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/2to3-3 \
		bin/idle3 \
		bin/pydoc3 \
		bin/python3 \
		bin/python3-config \
		libdata/pkgconfig/python3-embed.pc \
		libdata/pkgconfig/python3.pc

do-install:
.for file in 2to3- idle pydoc python
	${LN} -s ${file}${PYTHON_VER} ${STAGEDIR}${PREFIX}/bin/${file}3
.endfor
	${LN} -s python${PYTHON_VER}-config ${STAGEDIR}${PREFIX}/bin/python3-config
	${LN} -s python-${PYTHON_VER}.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig/python3.pc
	${LN} -s python-${PYTHON_VER}-embed.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig/python3-embed.pc

.include <bsd.port.mk>
