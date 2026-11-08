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

// Function: entry_00174b64
// Address: 0x174b64 - 0x174b6c
void entry_00174b64_0x174b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b64_0x174b64");
#endif

    ctx->pc = 0x174b64u;

    // 0x174b64: 0xf  sync
    ctx->pc = 0x174b64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x174b68: 0x42000038  ei
    ctx->pc = 0x174b68u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x174b6cu;
}
