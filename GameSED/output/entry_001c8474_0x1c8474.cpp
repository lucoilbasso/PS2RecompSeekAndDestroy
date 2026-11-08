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

// Function: entry_001c8474
// Address: 0x1c8474 - 0x1c8488
void entry_001c8474_0x1c8474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8474_0x1c8474");
#endif

    ctx->pc = 0x1c8474u;

    // 0x1c8474: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1c8474u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c8478: 0x1012  mflo        $v0
    ctx->pc = 0x1c8478u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c847c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c847cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8480: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c8484: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c8484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    ctx->pc = 0x1c8488u;
}
