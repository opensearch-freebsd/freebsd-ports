--- src/3rdparty/chromium/components/policy/core/common/cloud/cloud_policy_client.cc.orig	2023-05-31 08:12:17 UTC
+++ src/3rdparty/chromium/components/policy/core/common/cloud/cloud_policy_client.cc
@@ -455,7 +455,7 @@ void CloudPolicyClient::FetchPolicy() {
         fetch_request->set_invalidation_payload(invalidation_payload_);
       }
     }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     // Only set browser device identifier for CBCM Chrome cloud policy on
     // desktop.
     if (type_to_fetch.first ==
