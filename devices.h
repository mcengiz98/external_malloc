#ifndef DEVICES_H
#define DEVICES_H

#define ESP_PSRAM64 // Device type should be defined

/**
 * @brief Definitions for ESP PSRAM64/PSRAM64H devices
 *
 */
#ifdef ESP_PSRAM64

#define __SIZE_IN_Mbits 64 // 64 Mbits

#define EXTERNAL_HEAP_SIZE __SIZE_IN_Mbits * 1024 * 1024 / 8 // 8 bits per byte
#define EXTERNAL_HEAP_BITS EXTERNAL_HEAP_SIZE * 8
#define __PAGE_SIZE 1024 // 1 Kbyte

#endif // ESP_PSRAM64

#endif // DEVICES_H