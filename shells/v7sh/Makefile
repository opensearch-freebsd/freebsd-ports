PORTNAME=	v7sh
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	shells
MASTER_SITES=	https://BSDforge.com/projects/source/shells/v7sh/
DISTFILES=	args.c blok.c brkincr.h builtin.c cmd.c \
		ctype.c ctype.h defs.h error.c expand.c \
		fault.c io.c mac.h macro.c main.c mode.h \
		msg.c name.c name.h print.c service.c \
		setbrk.c stak.c stak.h string.c sym.h \
		timeout.h word.c xec.c sh.1
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Implementation of the UNIX 7th Edition shell
WWW=		http://minnie.tuhs.org/UnixTree/V7/

USES=		sbrk uidfix
EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	${WRKSRC}

NO_WRKSUBDIR=	yes

OPTIONS_DEFINE=	SYSIII RENO ULTRIX
OPTIONS_DEFAULT=	SYSIII RENO ULTRIX
SYSIII_DESC=	System III enhancements
RENO_DESC=	4.3BSD-Reno enhancements
ULTRIX_DESC=	Ultrix 3.1 enhancements
SYSIII_CFLAGS=	-DSYSIII
RENO_CFLAGS=	-DRENO
ULTRIX_CFLAGS=	-DULTRIX

post-extract:
	@${MV} ${WRKSRC}/sh.1 ${WRKSRC}/${PORTNAME}.1
	@${CP} ${FILESDIR}/Makefile ${WRKSRC}
	@${CP} ${FILESDIR}/test.c ${WRKSRC}		# sysIII
	@${CP} ${FILESDIR}/pathnames.h ${WRKSRC}	# 43reno

.include <bsd.port.mk>
