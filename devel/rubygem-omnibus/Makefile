PORTNAME=	omnibus
PORTVERSION=	9.0.24
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Framework for building self-installing, full-stack software builds
WWW=		https://github.com/chef/omnibus

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-aws-sdk-s3>=1.116.0<2:devel/rubygem-aws-sdk-s3 \
		rubygem-chef-cleanroom>=1.0<2:sysutils/rubygem-chef-cleanroom \
		rubygem-chef-utils>=15.4:sysutils/rubygem-chef-utils \
		rubygem-contracts016>=0.16.0<0.17.0:devel/rubygem-contracts016 \
		rubygem-ffi-yajl>=2.2<3:devel/rubygem-ffi-yajl \
		rubygem-license_scout>=1.0:sysutils/rubygem-license_scout \
		rubygem-mixlib-shellout>=2.0<4.0:devel/rubygem-mixlib-shellout \
		rubygem-mixlib-versioning>=0:devel/rubygem-mixlib-versioning \
		rubygem-ohai>=16<19:sysutils/rubygem-ohai \
		rubygem-pedump>=0:devel/rubygem-pedump \
		rubygem-rexml>=3.2<4:textproc/rubygem-rexml \
		rubygem-ruby-progressbar>=1.7<2:devel/rubygem-ruby-progressbar \
		rubygem-thor>=0.18<2.0:devel/rubygem-thor

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/omnibus

.include <bsd.port.mk>
