PORTNAME=	juke
PORTVERSION=	0.7
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://www.moll.no/oyvind/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple (n)curses based juke box program

USES=		ncurses
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	VI_BINDINGS
VI_BINDINGS_DESC=	Use vi-like key bindings

VI_BINDINGS_EXTRA_PATCHES=	${FILESDIR}/extra-patch-vi

post-install:
	${INSTALL_DATA} ${WRKSRC}/juke.conf ${STAGEDIR}${PREFIX}/etc/juke.conf.sample

.include <bsd.port.mk>
