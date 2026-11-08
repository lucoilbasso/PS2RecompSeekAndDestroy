#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00174bb4
// Address: 0x174bb4 - 0x174bbc
void entry_00174bb4_0x174bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174bb4_0x174bb4");
#endif

    ctx->pc = 0x174bb4u;

    // 0x174bb4: 0xf  sync
    ctx->pc = 0x174bb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x174bb8: 0x42000038  ei
    ctx->pc = 0x174bb8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x174bbcu;
}
