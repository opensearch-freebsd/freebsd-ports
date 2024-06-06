PORTNAME=	data-prepper
DISTVERSION?=	2.8.0
DISTVERSIONSUFFIX=	-linux-x64
CATEGORIES=	sysutils java
MASTER_SITES=	https://artifacts.data-prepper.org/${PORTNAME}/${DISTVERSION}/
PKGNAMEPREFIX=	opensearch-
DISTNAME=	${PKGNAME}${DISTVERSIONSUFFIX}

MAINTAINER=	opensearch@FreeBSD.org
COMMENT?=	Data Prepper
WWW=		https://data-prepper.org

LICENSE=	APACHE20

RUN_DEPENDS=	bash>0:shells/bash

USES=		cpe shebangfix
USE_JAVA=	yes
JAVA_VERSION=	17
USE_RC_SUBR=	${PORTNAME}

SHEBANG_FILES=	bin/data-prepper

NO_BUILD=	yes

#.include <bsd.port.options.mk>

BINS=		data-prepper	
CONFIG_FILES=	data-prepper-config.yaml log4j2-rolling.properties

DATADIR=	${PREFIX}/lib/${PORTNAME}

SEARCHUSER?=	opensearch
SEARCHGROUP?=	${SEARCHUSER}
USERS=		${SEARCHUSER}
GROUPS=		${SEARCHGROUP}

do-install:
	echo ${ETCDIR}
	${MKDIR} ${STAGEDIR}${ETCDIR}
.for f in ${CONFIG_FILES}
	${INSTALL} ${WRKSRC}/config/${f} ${STAGEDIR}${ETCDIR}/${f}.sample
.endfor
	${MKDIR} ${STAGEDIR}${DATADIR}/bin
.for f in ${BINS}
	${INSTALL_SCRIPT} ${WRKSRC}/bin/${f} ${STAGEDIR}${DATADIR}/bin
.endfor
	${MKDIR} ${STAGEDIR}${DATADIR}/examples
	${MKDIR} ${STAGEDIR}${DATADIR}/lib
	${MKDIR} ${STAGEDIR}${DATADIR}/pipelines
	(cd ${WRKSRC}/ && ${COPYTREE_SHARE} "examples lib pipelines" ${STAGEDIR}${DATADIR}/)
	${INSTALL} -lrs ${STAGEDIR}${ETCDIR} ${STAGEDIR}${DATADIR}/config

.include <bsd.port.mk>

