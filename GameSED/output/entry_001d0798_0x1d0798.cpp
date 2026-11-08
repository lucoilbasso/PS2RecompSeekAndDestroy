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

// Function: entry_001d0798
// Address: 0x1d0798 - 0x1d07a0
void entry_001d0798_0x1d0798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0798_0x1d0798");
#endif

    ctx->pc = 0x1d0798u;

    // 0x1d0798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d079c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1d079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1d07a0u;
}
