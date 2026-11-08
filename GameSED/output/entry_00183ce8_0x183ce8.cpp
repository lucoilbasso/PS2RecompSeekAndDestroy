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

// Function: entry_00183ce8
// Address: 0x183ce8 - 0x183d14
void entry_00183ce8_0x183ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183ce8_0x183ce8");
#endif

    ctx->pc = 0x183ce8u;

    // 0x183ce8: 0x1812  mflo        $v1
    ctx->pc = 0x183ce8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x183cec: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x183cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x183cf0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x183cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x183cf4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x183cf4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x183cf8: 0x2012  mflo        $a0
    ctx->pc = 0x183cf8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x183cfc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x183cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x183d00: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x183d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x183d04: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x183d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x183d08: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x183D08u;
    {
        const bool branch_taken_0x183d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D08u;
        // 0x183d0c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d08) {
            ctx->pc = 0x183D14u;
            return;
        }
    }
    ctx->pc = 0x183D10u;
    // 0x183d10: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x183d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x183d14u;
}
