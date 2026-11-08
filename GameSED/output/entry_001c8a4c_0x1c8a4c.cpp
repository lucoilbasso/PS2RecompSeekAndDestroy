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

// Function: entry_001c8a4c
// Address: 0x1c8a4c - 0x1c8a60
void entry_001c8a4c_0x1c8a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a4c_0x1c8a4c");
#endif

    ctx->pc = 0x1c8a4cu;

    // 0x1c8a4c: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1c8a4cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c8a50: 0x1012  mflo        $v0
    ctx->pc = 0x1c8a50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8a54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c8a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c8a5c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c8a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->pc = 0x1c8a60u;
}
