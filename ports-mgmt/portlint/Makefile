PORTNAME=	portlint
PORTVERSION=	2.22.8
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	marcus@FreeBSD.org
COMMENT=	Verifier for FreeBSD port directory

LICENSE=	ITOJUN
LICENSE_NAME=	Itojun License
LICENSE_TEXT=	All rights reserved. Freely redistributable.  Absolutely no warranty.
LICENSE_PERMS=	auto-accept dist-mirror dist-sell pkg-mirror pkg-sell

NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/src
USES=		perl5 shebangfix
SHEBANG_FILES=	*.pl
USE_PERL5=	run

SRC=		${.CURDIR}/src

PLIST_FILES=	bin/portlint \
		share/man/man1/portlint.1.gz

PORTEXAMPLES=	portlintgrep

OPTIONS_DEFINE=	EXAMPLES

do-extract:
	@${CP} -R ${SRC}/ ${WRKSRC}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/portlint.pl \
	    ${STAGEDIR}${PREFIX}/bin/portlint
	${INSTALL_MAN} ${WRKSRC}/portlint.1 \
	    ${STAGEDIR}${PREFIX}/share/man/man1

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/portlintgrep.pl \
	    ${STAGEDIR}${EXAMPLESDIR}/portlintgrep

.include <bsd.port.mk>
