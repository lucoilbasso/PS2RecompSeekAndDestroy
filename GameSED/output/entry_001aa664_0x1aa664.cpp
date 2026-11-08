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

// Function: entry_001aa664
// Address: 0x1aa664 - 0x1aa6b8
void entry_001aa664_0x1aa664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa664_0x1aa664");
#endif

    ctx->pc = 0x1aa664u;

    // 0x1aa664: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1aa664u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1aa668: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x1aa668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x1aa66c: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x1aa66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1aa670: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1aa674: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1aa674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1aa678: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1aa678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1aa67c: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1aa67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1aa680: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1aa680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1aa684: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1aa684u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1aa688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa68c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aa68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa690: 0x14a4002b  bne         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AA690u;
    {
        const bool branch_taken_0x1aa690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA690u;
        // 0x1aa694: 0xfe630010  sd          $v1, 0x10($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa690) {
            ctx->pc = 0x1AA740u;
            return;
        }
    }
    ctx->pc = 0x1AA698u;
    // 0x1aa698: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1aa69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa6a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aa6a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1aa6a4: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AA6A4u;
    {
        const bool branch_taken_0x1aa6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6A4u;
        // 0x1aa6a8: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6a4) {
            ctx->pc = 0x1AA714u;
            return;
        }
    }
    ctx->pc = 0x1AA6ACu;
    // 0x1aa6ac: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x1aa6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x1aa6b0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA6B0u;
    {
        const bool branch_taken_0x1aa6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa6b0) {
            ctx->pc = 0x1AA6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA6B0u;
            // 0x1aa6b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6B8u;
            return;
        }
    }
    ctx->pc = 0x1AA6B8u;
}
