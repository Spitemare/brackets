#pragma once

#include <pebble.h>

typedef enum {
  AppKeyBatteryIndicator = 0,
  AppKeyBluetoothAlert,
  AppKeyDashedLine,
  AppKeySecondTick,

  AppKeyBackgroundColor,
  AppKeyDateColor,
  AppKeyTimeColor,
  AppKeyBracketColor,
  AppKeyLineColor,
  AppKeyComplicationColor,
  
  AppKeyMax
} AppKey;

void data_init();

void data_deinit();

void data_set_boolean(int key, bool b);

bool data_get_boolean(int key);

void data_set_color(int key, GColor color);

GColor data_get_color(int key);
