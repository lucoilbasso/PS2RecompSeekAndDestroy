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

// Function: entry_0018db78
// Address: 0x18db78 - 0x18dba4
void entry_0018db78_0x18db78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018db78_0x18db78");
#endif

    ctx->pc = 0x18db78u;

    // 0x18db78: 0x8d020208  lw          $v0, 0x208($t0)
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18db7c: 0x85030246  lh          $v1, 0x246($t0)
    ctx->pc = 0x18db7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 582)));
    // 0x18db80: 0x95040248  lhu         $a0, 0x248($t0)
    ctx->pc = 0x18db80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 584)));
    // 0x18db84: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18db84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18db88: 0x8d050214  lw          $a1, 0x214($t0)
    ctx->pc = 0x18db88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 532)));
    // 0x18db8c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x18db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x18db90: 0xa5040244  sh          $a0, 0x244($t0)
    ctx->pc = 0x18db90u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 580), (uint16_t)GPR_U32(ctx, 4));
    // 0x18db94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18db94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18db98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18db9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dba0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->pc = 0x18dba4u;
}
