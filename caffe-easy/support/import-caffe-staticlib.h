

#pragma once
#pragma comment(lib, "ntdll.lib")
#pragma comment(lib, "shlwapi.lib")

#ifdef _DEBUG
#pragma comment(lib, "gflags_staticd.lib")
#pragma comment(lib, "libprotobufd.lib")
#pragma comment(lib, "libglog_staticd.lib")
#pragma comment(lib, "libopenblas.dll.a")
#else
#pragma comment(lib, "gflags_static.lib")
#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "libglog_static.lib")
#pragma comment(lib, "libopenblas.dll.a")
#endif