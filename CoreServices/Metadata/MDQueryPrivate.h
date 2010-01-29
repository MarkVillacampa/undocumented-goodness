//
// MDQueryPrivate.h
// Header file for undocumented MDQuery SPI
//

#include <CoreServices/CoreServices.h>

#ifdef __cplusplus
extern "C" {
#endif

// Converts a raw query string with operators into a valid spotlight query string.
extern CFStringRef _MDQueryCreateQueryString(CFAllocatorRef allocator, CFStringRef query);

// Sets whether the query looks through support files. Default is YES.
extern void MDQuerySetMatchesSupportFiles(MDQueryRef query, Boolean matches);

// Returns an array of dictionaries for the indexing status of the attached volumes.
extern CFArrayRef _MDCopyIndexingStatus(void);

// Returns true is spotlight is currently indexing a volume.
extern Boolean MDQueryPrivateIsSpotlightIndexing(void);

#ifdef __cplusplus
}
#endif
