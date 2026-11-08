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

// Function: entry_001674d0
// Address: 0x1674d0 - 0x1674d8
void entry_001674d0_0x1674d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674d0_0x1674d0");
#endif

    ctx->pc = 0x1674d0u;

    // 0x1674d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1674d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674d4: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1674d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->pc = 0x1674d8u;
}
