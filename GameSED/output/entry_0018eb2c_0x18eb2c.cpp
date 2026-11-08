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

// Function: entry_0018eb2c
// Address: 0x18eb2c - 0x18eb4c
void entry_0018eb2c_0x18eb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eb2c_0x18eb2c");
#endif

    ctx->pc = 0x18eb2cu;

    // 0x18eb2c: 0x84c20246  lh          $v0, 0x246($a2)
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 582)));
    // 0x18eb30: 0x8cc30208  lw          $v1, 0x208($a2)
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
    // 0x18eb34: 0x84c40244  lh          $a0, 0x244($a2)
    ctx->pc = 0x18eb34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 580)));
    // 0x18eb38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18eb38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18eb3c: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
    // 0x18eb40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18eb44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18eb48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x18eb4cu;
}
