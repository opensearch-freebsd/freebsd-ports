PORTNAME=	logtools
PORTVERSION=	0.13e
PORTREVISION=	3
CATEGORIES=	www
MASTER_SITES=	http://www.coker.com.au/logtools/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Useful tools to deal with CLF files (Common Log File format)
WWW=		https://doc.coker.com.au/projects/logtools/

LICENSE=	GPLv2

USES=		compiler:c++11-lang tar:tgz
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

post-patch:
	@${REINPLACE_CMD} -e \
		's|-O2 -g|| ; \
		 s|-lstdc++|| ; \
		 s| \($${prefix}\)| $${DESTDIR}\1|g ; \
		 s| \(@mandir@\)| $${DESTDIR}\1|g ; \
		 s|.cfg |.cfg.sample | ; \
		 s| \(@sysconfdir@\)| $${DESTDIR}\1|g' ${WRKSRC}/Makefile.in

post-build:
	@${LN} -sf clfdomainsplit.cfg ${WRKSRC}/clfdomainsplit.cfg.sample

.include <bsd.port.mk>
