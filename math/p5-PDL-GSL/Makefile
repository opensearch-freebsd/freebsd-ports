PORTNAME=	PDL-GSL
PORTVERSION=	2.101
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PDL interface to the GNU Scientific Library
WWW=		https://metacpan.org/dist/PDL-GSL

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libgsl.so:math/gsl
RUN_DEPENDS=	p5-PDL>=2.096:math/p5-PDL

USES=		perl5
USE_PERL5=	configure

MAKE_JOBS_UNSAFE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/CDF/CDF.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/DIFF/DIFF.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/INTEG/INTEG.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/INTERP/INTERP.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/LINALG/LINALG.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/MROOT/MROOT.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/RNG/RNG.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/GSL/SF/SF.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PDL/Stats/Distr/Distr.so

.include <bsd.port.mk>
