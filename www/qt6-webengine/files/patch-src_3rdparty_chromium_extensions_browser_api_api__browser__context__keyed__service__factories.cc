--- src/3rdparty/chromium/extensions/browser/api/api_browser_context_keyed_service_factories.cc.orig	2023-12-12 22:08:45 UTC
+++ src/3rdparty/chromium/extensions/browser/api/api_browser_context_keyed_service_factories.cc
@@ -118,7 +118,7 @@ void EnsureApiBrowserContextKeyedServiceFactoriesBuilt
   MessageService::GetFactoryInstance();
   MessagingAPIMessageFilter::EnsureAssociatedFactoryBuilt();
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   NetworkingPrivateEventRouterFactory::GetInstance();
 #endif
   OffscreenDocumentManager::GetFactory();
