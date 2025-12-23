#include "ESP32_RTC.h"

namespace UnifiedRTC
{

    uint64_t ESP32_RTC::get_epoch()
    {
        return _ESP32_RTC.getEpoch();
    }

    void ESP32_RTC::set_epoch(const uint64_t &epoch, const uint16_t &ms)
    {
        _ESP32_RTC.setTime(epoch, ms);
    }

    uint16_t ESP32_RTC::get_year()
    {
        return _ESP32_RTC.getYear();
    }

    uint16_t ESP32_RTC::get_month()
    {
        return _ESP32_RTC.getMonth() + 1;
    }

    uint16_t ESP32_RTC::get_day()
    {
        return _ESP32_RTC.getDay();
    }

    uint16_t ESP32_RTC::get_hour(bool is_24h)
    {
        return _ESP32_RTC.getHour(is_24h);
    }

    uint16_t ESP32_RTC::get_minute()
    {
        return _ESP32_RTC.getMinute();
    }

    uint16_t ESP32_RTC::get_second()
    {
        return _ESP32_RTC.getSecond();
    }

    uint16_t ESP32_RTC::get_millisecond()
    {
        return _ESP32_RTC.getMillis();
    }

    uint16_t ESP32_RTC::get_microsecond()
    {
        return _ESP32_RTC.getMicros();
    }

    uint16_t ESP32_RTC::get_day_of_year()
    {
        return _ESP32_RTC.getDayofYear();
    }

    uint16_t ESP32_RTC::get_day_of_week()
    {
        return _ESP32_RTC.getDayofWeek();
    }

};