--- src/3rdparty/chromium/content/browser/browser_child_process_host_impl.cc.orig	2023-07-16 15:47:57 UTC
+++ src/3rdparty/chromium/content/browser/browser_child_process_host_impl.cc
@@ -321,6 +321,7 @@ void BrowserChildProcessHostImpl::LaunchWithoutExtraCo
       switches::kDisableBestEffortTasks,
       switches::kDisableLogging,
       switches::kEnableLogging,
+      switches::kDisableUnveil,
       switches::kIPCConnectionTimeout,
       switches::kLogBestEffortTasks,
       switches::kLogFile,
