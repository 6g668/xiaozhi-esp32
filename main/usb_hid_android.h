#ifndef USB_HID_ANDROID_H
#define USB_HID_ANDROID_H

#include <stdint.h>
#include <stdbool.h>

// 安卓媒体按键
#define HID_KEY_HOME        0x40
#define HID_KEY_BACK        0x41
#define HID_KEY_VOL_UP      0x42
#define HID_KEY_VOL_DOWN    0x43

bool usb_hid_init(void);
void usb_hid_send_key(uint8_t keycode);
void usb_hid_handle_voice_text(const char *text);

#endif
