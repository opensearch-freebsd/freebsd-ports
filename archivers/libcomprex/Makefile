PORTNAME=	libcomprex
DISTVERSION=	0.3.3
PORTREVISION=	15
CATEGORIES=	archivers
MASTER_SITES=	SF/gnupdate/${PORTNAME}/${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Transparently handles automatic compression and decompression of files
WWW=		https://gnupdate.sourceforge.net/components/libcomprex/index.xml

LICENSE=	LGPL21

DEPRECATDED=		Unmaintained upstream, laste release in 2003
EXPIRATION_DATE=	2025-05-27

USES=		libtool pathfix pkgconfig
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext localbase:ldflags
NLS_CONFIGURE_ENABLE=	nls
NLS_LDFLAGS=	-lintl

.include <bsd.port.mk>
