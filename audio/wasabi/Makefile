PORTNAME=	wasabi
DISTVERSIONPREFIX=	v
DISTVERSION=	0.1.4-3 # 1.0.1 is still broken
DISTVERSIONSUFFIX=	-g6384482
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Fast and memory efficient Black MIDI player
WWW=		https://github.com/BlackMIDIDevs/wasabi

LICENSE=	APACHE20 # Don't Be a Dick Public License based on Apache 2.0, see http://www.dbad-license.org/

BROKEN=		rust code incompatible with latest rust-nightly, see https://github.com/BlackMIDIDevs/wasabi/issues/89

BUILD_DEPENDS=	rust-nightly>0:lang/rust-nightly
LIB_DEPENDS=	libasound.so:audio/alsa-lib

USES=		cargo pkgconfig python:build

USE_GITHUB=	yes
GH_ACCOUNT=	BlackMIDIDevs

CARGO_BUILDDEP=	no
CARGO_CRATES=	ab_glyph-0.2.23 \
		ab_glyph_rasterizer-0.1.8 \
		adler-1.0.2 \
		ahash-0.8.11 \
		aho-corasick-1.1.3 \
		alsa-0.9.0 \
		alsa-sys-0.3.1 \
		android-activity-0.4.3 \
		android-properties-0.2.2 \
		anstream-0.6.13 \
		anstyle-1.0.6 \
		anstyle-parse-0.2.3 \
		anstyle-query-1.0.2 \
		anstyle-wincon-3.0.2 \
		approx-0.5.1 \
		arboard-3.3.2 \
		arrayref-0.3.7 \
		arrayvec-0.7.4 \
		ash-0.37.3+1.3.251 \
		ashpd-0.6.8 \
		async-broadcast-0.5.1 \
		async-channel-2.2.0 \
		async-executor-1.9.1 \
		async-fs-1.6.0 \
		async-fs-2.1.1 \
		async-io-1.13.0 \
		async-io-2.3.2 \
		async-lock-2.8.0 \
		async-lock-3.3.0 \
		async-net-2.0.0 \
		async-process-1.8.1 \
		async-recursion-1.1.0 \
		async-signal-0.2.5 \
		async-task-4.7.0 \
		async-trait-0.1.79 \
		atomic-waker-1.1.2 \
		atomic_float-0.1.0 \
		atomic_refcell-0.1.13 \
		atty-0.2.14 \
		autocfg-1.2.0 \
		base64-0.21.7 \
		bindgen-0.69.4 \
		biquad-0.4.2 \
		bit_field-0.10.2 \
		bitflags-1.3.2 \
		bitflags-2.5.0 \
		block-0.1.6 \
		block-buffer-0.10.4 \
		block-sys-0.1.0-beta.1 \
		block2-0.2.0-alpha.6 \
		blocking-1.5.1 \
		bumpalo-3.15.4 \
		bytemuck-1.15.0 \
		bytemuck_derive-1.6.0 \
		byteorder-1.5.0 \
		bytes-1.6.0 \
		calloop-0.10.6 \
		cbindgen-0.26.0 \
		cc-1.0.90 \
		cesu8-1.1.0 \
		cexpr-0.6.0 \
		cfg-if-1.0.0 \
		cfg_aliases-0.1.1 \
		clang-sys-1.7.0 \
		clap-3.2.25 \
		clap-4.5.4 \
		clap_builder-4.5.2 \
		clap_lex-0.2.4 \
		clap_lex-0.7.0 \
		clipboard-win-5.3.0 \
		cmake-0.1.50 \
		color_quant-1.1.0 \
		colorchoice-1.0.0 \
		colors-transform-0.2.11 \
		combine-4.6.6 \
		concurrent-queue-2.4.0 \
		confy-0.5.1 \
		convert_case-0.4.0 \
		core-foundation-0.9.4 \
		core-foundation-sys-0.8.6 \
		core-graphics-0.22.3 \
		core-graphics-types-0.1.3 \
		coreaudio-rs-0.11.3 \
		coreaudio-sys-0.2.15 \
		cpal-0.15.3 \
		cpufeatures-0.2.12 \
		crc32fast-1.4.0 \
		crossbeam-channel-0.5.12 \
		crossbeam-deque-0.8.5 \
		crossbeam-epoch-0.9.18 \
		crossbeam-queue-0.3.11 \
		crossbeam-utils-0.8.19 \
		crunchy-0.2.2 \
		crypto-common-0.1.6 \
		dasp_sample-0.11.0 \
		data-url-0.2.0 \
		derivative-2.2.0 \
		digest-0.10.7 \
		directories-4.0.1 \
		directories-5.0.1 \
		dirs-sys-0.3.7 \
		dirs-sys-0.4.1 \
		dispatch-0.2.0 \
		dlib-0.5.2 \
		downcast-rs-1.2.0 \
		ecolor-0.21.0 \
		egui-0.21.0 \
		egui-winit-0.21.1 \
		egui_winit_vulkano-0.24.0 \
		either-1.10.0 \
		emath-0.21.0 \
		encoding_rs-0.8.33 \
		encoding_rs_io-0.1.7 \
		enum_dispatch-0.3.13 \
		enumflags2-0.7.9 \
		enumflags2_derive-0.7.9 \
		epaint-0.21.0 \
		equivalent-1.0.1 \
		errno-0.3.8 \
		error-code-3.2.0 \
		event-listener-2.5.3 \
		event-listener-3.1.0 \
		event-listener-4.0.3 \
		event-listener-5.2.0 \
		event-listener-strategy-0.4.0 \
		event-listener-strategy-0.5.1 \
		exr-1.72.0 \
		extended-0.1.0 \
		fast-srgb8-1.0.0 \
		fastrand-1.9.0 \
		fastrand-2.0.2 \
		fdeflate-0.3.4 \
		flate2-1.0.28 \
		float-cmp-0.9.0 \
		flume-0.11.0 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		futures-channel-0.3.30 \
		futures-core-0.3.30 \
		futures-io-0.3.30 \
		futures-lite-1.13.0 \
		futures-lite-2.3.0 \
		futures-macro-0.3.30 \
		futures-sink-0.3.30 \
		futures-task-0.3.30 \
		futures-util-0.3.30 \
		generic-array-0.14.7 \
		gethostname-0.4.3 \
		getrandom-0.2.12 \
		gif-0.13.1 \
		glob-0.3.1 \
		half-2.4.0 \
		hashbrown-0.12.3 \
		hashbrown-0.14.3 \
		heck-0.4.1 \
		hermit-abi-0.1.19 \
		hermit-abi-0.3.9 \
		hex-0.4.3 \
		home-0.5.9 \
		idna-0.5.0 \
		image-0.24.9 \
		imagesize-0.11.0 \
		indexmap-1.9.3 \
		indexmap-2.2.6 \
		instant-0.1.12 \
		io-lifetimes-1.0.11 \
		itertools-0.12.1 \
		itoa-1.0.11 \
		jni-0.21.1 \
		jni-sys-0.3.0 \
		jobserver-0.1.28 \
		jpeg-decoder-0.3.1 \
		js-sys-0.3.69 \
		kurbo-0.9.5 \
		lazy-regex-3.1.0 \
		lazy-regex-proc_macros-3.1.0 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		lebe-0.5.2 \
		libc-0.2.153 \
		libloading-0.7.4 \
		libloading-0.8.3 \
		libm-0.1.4 \
		libredox-0.0.2 \
		libredox-0.1.3 \
		linux-raw-sys-0.3.8 \
		linux-raw-sys-0.4.13 \
		lock_api-0.4.11 \
		log-0.4.21 \
		mach2-0.4.2 \
		malloc_buf-0.0.6 \
		memchr-2.7.2 \
		memmap2-0.5.10 \
		memoffset-0.6.5 \
		memoffset-0.7.1 \
		memoffset-0.9.1 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.7.2 \
		mio-0.8.11 \
		ndk-0.7.0 \
		ndk-0.8.0 \
		ndk-context-0.1.1 \
		ndk-sys-0.4.1+23.1.7779620 \
		ndk-sys-0.5.0+25.2.9519653 \
		nix-0.24.3 \
		nix-0.25.1 \
		nix-0.26.4 \
		nohash-hasher-0.2.0 \
		nom-7.1.3 \
		num-derive-0.4.2 \
		num-traits-0.2.18 \
		num_enum-0.5.11 \
		num_enum-0.6.1 \
		num_enum-0.7.2 \
		num_enum_derive-0.5.11 \
		num_enum_derive-0.6.1 \
		num_enum_derive-0.7.2 \
		objc-0.2.7 \
		objc-foundation-0.1.1 \
		objc-sys-0.2.0-beta.2 \
		objc2-0.3.0-beta.3.patch-leaks.3 \
		objc2-encode-2.0.0-pre.2 \
		objc_id-0.1.1 \
		oboe-0.6.1 \
		oboe-sys-0.6.1 \
		once_cell-1.19.0 \
		option-ext-0.2.0 \
		orbclient-0.3.47 \
		ordered-stream-0.2.0 \
		os_str_bytes-6.6.1 \
		owned_ttf_parser-0.20.0 \
		palette-0.7.5 \
		palette_derive-0.7.5 \
		parking-2.2.0 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.9 \
		paste-1.0.14 \
		percent-encoding-2.3.1 \
		phf-0.11.2 \
		phf_generator-0.11.2 \
		phf_macros-0.11.2 \
		phf_shared-0.11.2 \
		pico-args-0.5.0 \
		pin-project-lite-0.2.14 \
		pin-utils-0.1.0 \
		piper-0.2.1 \
		pkg-config-0.3.30 \
		png-0.17.13 \
		polling-2.8.0 \
		polling-3.6.0 \
		pollster-0.3.0 \
		ppv-lite86-0.2.17 \
		proc-macro-crate-1.3.1 \
		proc-macro-crate-3.1.0 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.79 \
		qoi-0.4.1 \
		quote-1.0.35 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.4 \
		raw-window-handle-0.5.2 \
		rayon-1.10.0 \
		rayon-core-1.12.1 \
		rctree-0.5.0 \
		redox_syscall-0.3.5 \
		redox_syscall-0.4.1 \
		redox_users-0.4.5 \
		regex-1.10.4 \
		regex-automata-0.4.6 \
		regex-bnf-0.1.2 \
		regex-bnf-macro-0.1.1 \
		regex-syntax-0.8.3 \
		resvg-0.31.1 \
		rfd-0.12.1 \
		rgb-0.8.37 \
		riff-1.0.1 \
		rosvgtree-0.2.0 \
		roxmltree-0.14.1 \
		roxmltree-0.18.1 \
		rustc-hash-1.1.0 \
		rustix-0.37.27 \
		rustix-0.38.32 \
		ryu-1.0.17 \
		same-file-1.0.6 \
		scoped-tls-1.0.1 \
		scopeguard-1.2.0 \
		sctk-adwaita-0.5.4 \
		serde-1.0.197 \
		serde_derive-1.0.197 \
		serde_json-1.0.115 \
		serde_repr-0.1.18 \
		serde_spanned-0.6.5 \
		sha1-0.10.6 \
		shaderc-0.8.3 \
		shaderc-sys-0.8.3 \
		shlex-1.3.0 \
		signal-hook-registry-1.4.1 \
		simd-adler32-0.3.7 \
		simdeez-2.0.0-dev3 \
		simplecss-0.2.1 \
		siphasher-0.3.11 \
		slab-0.4.9 \
		slotmap-1.0.7 \
		smallvec-1.13.2 \
		smithay-client-toolkit-0.16.1 \
		smithay-clipboard-0.6.6 \
		socket2-0.4.10 \
		spin-0.9.8 \
		spin_sleep-1.2.0 \
		static_assertions-1.1.0 \
		strict-num-0.1.1 \
		strsim-0.10.0 \
		strsim-0.11.1 \
		svgtypes-0.11.0 \
		symphonia-0.5.4 \
		symphonia-bundle-flac-0.5.4 \
		symphonia-codec-adpcm-0.5.4 \
		symphonia-codec-pcm-0.5.4 \
		symphonia-codec-vorbis-0.5.4 \
		symphonia-core-0.5.4 \
		symphonia-format-mkv-0.5.4 \
		symphonia-format-ogg-0.5.4 \
		symphonia-format-riff-0.5.4 \
		symphonia-metadata-0.5.4 \
		symphonia-utils-xiph-0.5.4 \
		syn-1.0.109 \
		syn-2.0.58 \
		tempfile-3.10.1 \
		termcolor-1.4.1 \
		textwrap-0.16.1 \
		thiserror-1.0.58 \
		thiserror-impl-1.0.58 \
		thread_local-1.1.8 \
		tiff-0.9.1 \
		tiny-skia-0.8.4 \
		tiny-skia-path-0.8.4 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		to_vec-0.1.0 \
		toml-0.5.11 \
		toml-0.8.12 \
		toml_datetime-0.6.5 \
		toml_edit-0.19.15 \
		toml_edit-0.21.1 \
		toml_edit-0.22.9 \
		tracing-0.1.40 \
		tracing-attributes-0.1.27 \
		tracing-core-0.1.32 \
		ttf-parser-0.20.0 \
		typenum-1.17.0 \
		uds_windows-1.1.0 \
		unicode-bidi-0.3.15 \
		unicode-ident-1.0.12 \
		unicode-normalization-0.1.23 \
		url-2.5.0 \
		urlencoding-2.1.3 \
		usvg-0.31.0 \
		usvg-parser-0.31.0 \
		usvg-tree-0.31.0 \
		utf8parse-0.2.1 \
		vec_map-0.8.2 \
		version_check-0.9.4 \
		vk-parse-0.8.0 \
		vulkano-0.33.0 \
		vulkano-macros-0.33.0 \
		vulkano-shaders-0.33.0 \
		vulkano-util-0.33.0 \
		vulkano-win-0.33.0 \
		waker-fn-1.1.1 \
		walkdir-2.5.0 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.92 \
		wasm-bindgen-backend-0.2.92 \
		wasm-bindgen-futures-0.4.42 \
		wasm-bindgen-macro-0.2.92 \
		wasm-bindgen-macro-support-0.2.92 \
		wasm-bindgen-shared-0.2.92 \
		wav-1.0.0 \
		wayland-client-0.29.5 \
		wayland-commons-0.29.5 \
		wayland-cursor-0.29.5 \
		wayland-protocols-0.29.5 \
		wayland-scanner-0.29.5 \
		wayland-sys-0.29.5 \
		web-sys-0.3.69 \
		webbrowser-0.8.13 \
		weezl-0.1.8 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.6 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.54.0 \
		windows-core-0.54.0 \
		windows-result-0.1.0 \
		windows-sys-0.45.0 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-targets-0.42.2 \
		windows-targets-0.48.5 \
		windows-targets-0.52.4 \
		windows_aarch64_gnullvm-0.42.2 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.4 \
		windows_aarch64_msvc-0.42.2 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.4 \
		windows_i686_gnu-0.42.2 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.4 \
		windows_i686_msvc-0.42.2 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.4 \
		windows_x86_64_gnu-0.42.2 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.4 \
		windows_x86_64_gnullvm-0.42.2 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.4 \
		windows_x86_64_msvc-0.42.2 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.4 \
		winit-0.28.7 \
		winnow-0.5.40 \
		winnow-0.6.5 \
		winres-0.1.12 \
		x11-dl-2.21.0 \
		x11rb-0.13.0 \
		x11rb-protocol-0.13.0 \
		xcursor-0.3.5 \
		xdg-home-1.1.0 \
		xml-rs-0.8.20 \
		xmlparser-0.13.6 \
		xmlwriter-0.1.0 \
		zbus-3.15.2 \
		zbus_macros-3.15.2 \
		zbus_names-2.6.1 \
		zerocopy-0.7.32 \
		zerocopy-derive-0.7.32 \
		zune-inflate-0.2.54 \
		zvariant-3.15.2 \
		zvariant_derive-3.15.2 \
		zvariant_utils-1.0.1 \
		xsynth-core,xsynth-realtime,xsynth-soundfonts@git+https://github.com/arduano/xsynth.git?rev=e300f1d\#e300f1d859023da07f15462712bdc81a89693429 \
		ico@git+https://github.com/StratusFearMe21/rust-ico?branch=patch-1\#aa5924babb52ee5559cdb3a376d0c060a478c9f1 \
		midi-toolkit-rs,midi-toolkit-rs-derive@git+https://github.com/arduano/midi-toolkit-rs.git?rev=a54f198\#a54f19890e47c90a246001b9f8b2519f3604eb58 \
		gen-iter@git+https://github.com/arduano/gen-iter.git?rev=64e28bc\#64e28bc74b406030ff9bb3a3726a770a8fb4f78b \
		kdmapi@git+https://github.com/arduano/kdmapi.git?rev=4116b00\#4116b0095c48e0cbcbb003f2ee453cf0c6e8bc4f

BINARY_ALIAS=	python3=${PYTHON_CMD} \
		git=/usr/bin/true

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
