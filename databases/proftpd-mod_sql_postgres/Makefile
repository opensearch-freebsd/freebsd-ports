PORTNAME=	mod_sql_postgres
PORTREVISION=	3
CATEGORIES=	databases ftp
PKGNAMEPREFIX=	proftpd-

MAINTAINER=	mm@FreeBSD.org
COMMENT=	PostgreSQL ProFTPD module
WWW=		http://www.proftpd.org/docs/contrib/mod_sql.html

LICENSE=	GPLv2

DESCR=		${.CURDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../../ftp/proftpd

USES=		cpe pgsql

INCLUDEDIRS=	${LOCALBASE}/include
LIBDIRS=	${LOCALBASE}/lib

_BUILDING_PROFTPD_MODULE=	${PORTNAME}

.include "${MASTERDIR}/Makefile"
