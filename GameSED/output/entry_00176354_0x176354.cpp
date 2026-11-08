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

// Function: entry_00176354
// Address: 0x176354 - 0x17635c
void entry_00176354_0x176354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176354_0x176354");
#endif

    ctx->pc = 0x176354u;

    // 0x176354: 0xf  sync
    ctx->pc = 0x176354u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x176358: 0x42000038  ei
    ctx->pc = 0x176358u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x17635cu;
}
