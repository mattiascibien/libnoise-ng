#pragma once

#ifdef LIBNOISENG_EXPORTS
#    define LIBNOISENGAPI __declspec(dllexport)
#else
#    define LIBNOISENGAPI __declspec(dllimport)
#endif
