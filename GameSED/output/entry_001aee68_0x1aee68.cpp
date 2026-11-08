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

// Function: entry_001aee68
// Address: 0x1aee68 - 0x1aee78
void entry_001aee68_0x1aee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aee68_0x1aee68");
#endif

    ctx->pc = 0x1aee68u;

    // 0x1aee68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aee6c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1aee6cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1aee70: 0x1812  mflo        $v1
    ctx->pc = 0x1aee70u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1aee74: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1aee74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aee78u;
}
