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

// Function: entry_001762e4
// Address: 0x1762e4 - 0x1762ec
void entry_001762e4_0x1762e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001762e4_0x1762e4");
#endif

    ctx->pc = 0x1762e4u;

    // 0x1762e4: 0xf  sync
    ctx->pc = 0x1762e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1762e8: 0x42000038  ei
    ctx->pc = 0x1762e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x1762ecu;
}
