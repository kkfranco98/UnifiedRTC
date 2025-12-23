#pragma once

#include <Arduino.h>

#include "unified_RTC_utility/unified_RTC_utility.h"

namespace UnifiedRTC
{
    class RTC_Interface
    {
    public:
        // virtual ~RTC_Interface() {}

        virtual uint64_t get_epoch() = 0;

        virtual void set_epoch(const uint64_t &epoch, const uint16_t &ms = 0) = 0;

        virtual uint16_t get_year() = 0;
        virtual uint16_t get_month() = 0;
        virtual uint16_t get_day() = 0;
        virtual uint16_t get_hour(bool) = 0;
        virtual uint16_t get_minute() = 0;
        virtual uint16_t get_second() = 0;
        virtual uint16_t get_millisecond() = 0;
        virtual uint16_t get_microsecond() = 0;

        virtual uint16_t get_day_of_year() = 0;
        virtual uint16_t get_day_of_week() = 0;

        virtual String get_date_time_in_yyyy_MM_dd_hh_mm_ss();
        virtual String get_date_time_in_yyyy_MM_dd_hh_mm_ss_ms();
    };
};