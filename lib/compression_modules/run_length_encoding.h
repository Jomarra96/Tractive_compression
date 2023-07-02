#ifndef RUN_LENGTH_ENCODING_H
#define RUN_LENGTH_ENCODING_H

#include "stdint.h"
#include "tractive_config.h"

#define MAX_RUN_LENGTH 255
#define ERR_RUN_LENGTH_EXCEEDED 1
#define ERR_RUN_LENGTH_DECODE_OVERFLOW 2
#define RLE_TEST_FAILED 3


uint8_t run_length_encode(uint8_t *raw_data, uint8_t *run_time_encoded_data, uint16_t *encoded_size);
uint8_t run_length_decode(uint8_t *run_time_decoded_data, uint8_t *run_time_encoded_data, uint16_t encoded_size);

#endif // RUN_LENGTH_ENCODING_H