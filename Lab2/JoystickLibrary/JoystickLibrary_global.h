#ifndef JOYSTICKLIBRARY_GLOBAL_H
#define JOYSTICKLIBRARY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(JOYSTICKLIBRARY_LIBRARY)
#  define JOYSTICKLIBRARY_EXPORT Q_DECL_EXPORT
#else
#  define JOYSTICKLIBRARY_EXPORT Q_DECL_IMPORT
#endif

#endif // JOYSTICKLIBRARY_GLOBAL_H
