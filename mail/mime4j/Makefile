PORTNAME=	mime4j
PORTVERSION=	0.7.2
PORTREVISION=	1
CATEGORIES=	mail java
MASTER_SITES=	https://archive.apache.org/dist/james/${PORTNAME}/${POSTVERSION}/
DISTNAME=	apache-${PORTNAME}-${PORTVERSION}-bin

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Java parser for e-mail message streams
WWW=		https://james.apache.org/mime4j/

LICENSE=	APACHE20

RUN_DEPENDS=	${JAVALIBDIR}/commons-logging.jar:java/apache-commons-logging

USES=		java

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/apache-${PORTNAME}-${PORTVERSION}

PLIST_FILES=	%%JAVAJARDIR%%/apache-${PORTNAME}-core.jar \
		%%JAVAJARDIR%%/apache-${PORTNAME}-dom.jar \
		%%JAVAJARDIR%%/apache-${PORTNAME}-storage.jar

PORTDOCS=	*

do-install:
	${INSTALL_DATA} ${WRKSRC}/apache-${PORTNAME}-core-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/apache-${PORTNAME}-core.jar
	${INSTALL_DATA} ${WRKSRC}/apache-${PORTNAME}-dom-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/apache-${PORTNAME}-dom.jar
	${INSTALL_DATA} ${WRKSRC}/apache-${PORTNAME}-storage-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/apache-${PORTNAME}-storage.jar
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/RELEASE_NOTES.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
