PORTNAME=	vzvol
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.0
PORTREVISION=	3
CATEGORIES=	filesystems sysutils

MAINTAINER=	rainbow@sanitylinux.org
COMMENT=	Feature-rich ZFS zvol management tool
WWW=		https://github.com/RainbowHackerHorse/vzvol

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Abandoned upstream, no activity in 5+ years and multiple unresolved issue reports upstream
EXPIRATION_DATE=2025-06-30

GROUPS=		operator

USE_GITHUB=	yes
GH_ACCOUNT=	RainbowHackerHorse
NO_BUILD=	yes
NO_ARCH=	yes

PORTDOCS=	README.md CONTRIBUTORS

OPTIONS_DEFINE=	DOCS PROGRESS VIRTUALBOX
OPTIONS_GROUP=	FILESYSTEMS
OPTIONS_GROUP_FILESYSTEMS=	EXT XFS
OPTIONS_DEFAULT=	EXT PROGRESS VIRTUALBOX XFS

EXT_RUN_DEPENDS=	mke2fs:filesystems/e2fsprogs-core
PROGRESS_RUN_DEPENDS=	pv:sysutils/pv
VIRTUALBOX_RUN_DEPENDS=	VBoxManage:emulators/virtualbox-ose
XFS_RUN_DEPENDS=	mkfs.xfs:filesystems/xfsprogs

EXT_DESC=		Install support for ext2, ext3, and ext4
PROGRESS_DESC=		Enables progress bars for import
VIRTUALBOX_DESC=	Support .VMDK creation with VirtualBox tools
XFS_DESC=		Install support for XFS filesystem

do-install:
	${INSTALL_MAN} ${WRKSRC}/man/freebsd/vzvol.8 ${STAGEDIR}${PREFIX}/share/man/man8/
	${INSTALL_SCRIPT} ${WRKSRC}/bin/vzvol ${STAGEDIR}${PREFIX}/sbin
.for dir in shared freebsd linux
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/vzvol/lib/${dir}
	${INSTALL_SCRIPT} ${WRKSRC}/lib/${dir}/* ${STAGEDIR}${PREFIX}/lib/vzvol/lib/${dir}
.endfor

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
