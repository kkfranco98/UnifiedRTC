#include "RTC_interface.h"

namespace UnifiedRTC
{
    String RTC_Interface::get_date_time_in_yyyy_MM_dd_hh_mm_ss()
    {
        return normalize_date(get_year(), get_month(), get_day(),
                              get_hour(true), get_minute(), get_second(),
                              0);
    }

    String RTC_Interface::get_date_time_in_yyyy_MM_dd_hh_mm_ss_ms()
    {
        return normalize_date(get_year(), get_month(), get_day(),
                              get_hour(true), get_minute(), get_second(),
                              get_millisecond());
    }

}
