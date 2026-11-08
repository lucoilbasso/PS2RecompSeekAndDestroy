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

// Function: entry_001b7f84
// Address: 0x1b7f84 - 0x1b7f90
void entry_001b7f84_0x1b7f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7f84_0x1b7f84");
#endif

    ctx->pc = 0x1b7f84u;

    // 0x1b7f84: 0xf  sync
    ctx->pc = 0x1b7f84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b7f88: 0x42000038  ei
    ctx->pc = 0x1b7f88u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1b7f8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b7f90u;
}
