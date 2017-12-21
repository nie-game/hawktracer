#ifndef HAWKTRACER_GLOBAL_TIMELINE_H
#define HAWKTRACER_GLOBAL_TIMELINE_H

#include <hawktracer/callstack_scoped_tracepoint.h>

HT_DECLS_BEGIN

HT_Timeline* ht_global_timeline_get(void);

HT_DECLS_END

#define HT_TP_GLOBAL_SCOPED_INT(int_label) HT_TP_SCOPED_INT(ht_global_timeline_get(), int_label)

#define HT_TP_GLOBAL_SCOPED_STRING(string_label) HT_TP_SCOPED_STRING(ht_global_timeline_get(), string_label)

#endif /* HAWKTRACER_GLOBAL_TIMELINE_H */
