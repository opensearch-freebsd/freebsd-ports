PORTNAME=	Protocol-ACME
PORTVERSION=	1.02
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SLUDIN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Interface to the Let's Encrypt ACME API
WWW=		https://metacpan.org/release/Protocol-ACME

LICENSE=	ART20

DEPRECATED=	upstream maintainer indicated that it is no longer suitable for use
EXPIRATION_DATE=2024-06-30

RUN_DEPENDS=	p5-Crypt-Format>=0.06:security/p5-Crypt-Format \
		p5-Crypt-OpenSSL-Bignum>=0.06:security/p5-Crypt-OpenSSL-Bignum \
		p5-Crypt-OpenSSL-RSA>=0.28:security/p5-Crypt-OpenSSL-RSA \
		p5-Crypt-RSA-Parse>=0.041:security/p5-Crypt-RSA-Parse \
		p5-HTTP-Tiny>=0.050:www/p5-HTTP-Tiny \
		p5-Log-Any>=1.032:devel/p5-Log-Any \
		p5-JSON>=2.90:converters/p5-JSON \
		p5-libwww>=6.13:www/p5-libwww \
		p5-Net-SSLeay>=1.49:security/p5-Net-SSLeay

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
