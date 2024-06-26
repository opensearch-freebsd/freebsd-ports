PORTNAME=	optimfrog
PORTVERSION=	5.100
CATEGORIES=	audio
MASTER_SITES=	http://losslessaudio.org/Downloads/A1C0/${DISTVERSION:S/.//}/FreeBSD/
DISTNAME=	# OptimFROG_FreeBSD_${ARCH}_${DISTVERSION:S/.//}

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	Best-ratio lossless audio codec
WWW=		http://www.losslessaudio.org/

LICENSE=	OptimFROG
LICENSE_NAME=	OptimFROG - License
LICENSE_FILE=	${WRKSRC}/license.html	#only available as html
# No fees may be collected for redistribution
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

DEPRECATED=	Obsolete format that never gained traction, consider using audio/flac
EXPIRATION_DATE=2024-07-31

RUN_DEPENDS+=	${LOCALBASE}/lib/compat/libstdc++.so.6:misc/compat9x

CONFLICTS_INSTALL?=	optimfrog-sse2

ONLY_FOR_ARCHS?=	amd64 i386

USES=		tar:txz

NO_BUILD=	yes
USE_LDCONFIG=	yes

OPTIONS_DEFINE_i386=	SSE2
OPTIONS_DEFINE?=	#
SSE2_DESC=	Use SSE2 instructions instead of x87 FPU

.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64"
DISTNAME=	OptimFROG_FreeBSD_x64_${DISTVERSION:S/.//}
.else # ${ARCH} == "i386"
. if ${PORT_OPTIONS:MSSE2}
DISTNAME=	OptimFROG_FreeBSD_x86_SSE2_${DISTVERSION:S/.//}
. else
DISTNAME=	OptimFROG_FreeBSD_x86_${DISTVERSION:S/.//}
. endif
.endif

do-install:
	@(cd ${WRKSRC} && ./install.sh -d "${STAGEDIR}" -p "${PREFIX}")

.include <bsd.port.post.mk>
