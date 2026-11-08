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

// Function: entry_0018e130
// Address: 0x18e130 - 0x18e160
void entry_0018e130_0x18e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e130_0x18e130");
#endif

    ctx->pc = 0x18e130u;

    // 0x18e130: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x18e130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e134: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x18e134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18e138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18e138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e13c: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x18e13cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e140: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18e140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18e144: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x18e144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e148: 0x8d050218  lw          $a1, 0x218($t0)
    ctx->pc = 0x18e148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 536)));
    // 0x18e14c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e150: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18e150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18e154: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x18E154u;
    {
        const bool branch_taken_0x18e154 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e154) {
            ctx->pc = 0x18E234u;
            return;
        }
    }
    ctx->pc = 0x18E15Cu;
    // 0x18e15c: 0x0  nop
    ctx->pc = 0x18e15cu;
    // NOP
    ctx->pc = 0x18e160u;
}
