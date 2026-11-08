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

// Function: entry_0018dca8
// Address: 0x18dca8 - 0x18dcc8
void entry_0018dca8_0x18dca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dca8_0x18dca8");
#endif

    ctx->pc = 0x18dca8u;

    // 0x18dca8: 0x85020246  lh          $v0, 0x246($t0)
    ctx->pc = 0x18dca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 582)));
    // 0x18dcac: 0x8d030208  lw          $v1, 0x208($t0)
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18dcb0: 0x85040244  lh          $a0, 0x244($t0)
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 580)));
    // 0x18dcb4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18dcb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18dcb8: 0x8d050214  lw          $a1, 0x214($t0)
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 532)));
    // 0x18dcbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18dcc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18dcc4: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x18dcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x18dcc8u;
}
