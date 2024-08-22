#ifndef clox_common_h
#define clox_common_h
#include "common.h"
#include <stdint.h>

typedef enum{
  OP_RETURN,
} Opcode;
// Dynamic Arrays:
// Cache-friendly, dense storage
// O(1) indexed element lookup
// O(1) appending to the end of the array
typedef struct {
  int count;
  int capacity;
  uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);
void freeChunk(Chunk* chunk);

#endif