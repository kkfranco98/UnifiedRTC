#include "RTC_interface/RTC_interface.h"

#include <ESP32Time.h>

namespace UnifiedRTC
{
    class ESP32_RTC : public RTC_Interface
    {
    private:
        ESP32Time _ESP32_RTC;

    public:
        ESP32_RTC() {};
        ESP32_RTC(uint64_t epoch) { _ESP32_RTC.setTime(epoch); };

        uint64_t get_epoch() override;
        void set_epoch(const uint64_t &epoch, const uint16_t &ms = 0) override;
        uint16_t get_year() override;
        uint16_t get_month() override;
        uint16_t get_day() override;
        uint16_t get_hour(bool) override;
        uint16_t get_minute() override;
        uint16_t get_second() override;
        uint16_t get_millisecond() override;
        uint16_t get_microsecond() override;
        uint16_t get_day_of_year() override;
        uint16_t get_day_of_week() override;
    };
};