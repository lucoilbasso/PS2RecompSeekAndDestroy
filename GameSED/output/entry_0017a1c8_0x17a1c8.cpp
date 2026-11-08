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

// Function: entry_0017a1c8
// Address: 0x17a1c8 - 0x17a1d0
void entry_0017a1c8_0x17a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1c8_0x17a1c8");
#endif

    ctx->pc = 0x17a1c8u;

    // 0x17a1c8: 0xf  sync
    ctx->pc = 0x17a1c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x17a1cc: 0x42000038  ei
    ctx->pc = 0x17a1ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x17a1d0u;
}
