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

// Function: entry_001c99d0
// Address: 0x1c99d0 - 0x1c99e0
void entry_001c99d0_0x1c99d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c99d0_0x1c99d0");
#endif

    ctx->pc = 0x1c99d0u;

    // 0x1c99d0: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x1c99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1c99d4: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x1c99d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c99d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c99d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99dc: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1c99e0u;
}
