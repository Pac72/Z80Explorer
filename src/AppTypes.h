#ifndef APPTYPES_H
#define APPTYPES_H

#define MAX_TRANS 9000  // Max number of transistors (est. for Z80)
#define MAX_NETS  3600  // Max number of nets (est. for Z80)

#define APP_VERSION 102 // Application version (minor % 100)

#define HAVE_PREBUILT_LAYERMAP 1 // We have extracted a fully prebuilt layermap.bin and can use it

#define FIX_Z80_LAYERMAP_TO_VISUAL_ENUM 1 // Fix to prebuilt layermap incorrectly counting nets between 1559 and 1710

#include <stdint.h>

typedef uint16_t net_t;  // Type of an index into the net array (type of a net id value)
typedef uint16_t tran_t; // Type of an index into the transistor array (type of a transistor id value)
typedef uint8_t  pin_t;  // Type of the pin state (0, 1; or 2 for floating)

#if !defined (NETOP)
#define NETOP
enum class Netop : unsigned char { SetName, Rename, DeleteName, Changed };
#endif

#define USE_MY_LISTS 1
#define USE_MY_LISTS_FOR_NET 1
#define EARLY_LOOP_DETECTION 1
#define USE_SET_WITH_RECALCLIST 1

#endif // APPTYPES_H
