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

// Function: entry_00102658
// Address: 0x102658 - 0x1026a8
void entry_00102658_0x102658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102658_0x102658");
#endif

    ctx->pc = 0x102658u;

    // 0x102658: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x102658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x10265c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102660: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x102660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102664: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x102664u;
    {
        const bool branch_taken_0x102664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x102664) {
            ctx->pc = 0x102668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102664u;
            // 0x102668: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1026A8u;
            return;
        }
    }
    ctx->pc = 0x10266Cu;
    // 0x10266c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102674: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10267c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10267cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102680: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
    // 0x102684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102688: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x102688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x10268c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10268cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102694: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102694u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102698: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10269c: 0x80415ec  j           func_1057B0
    ctx->pc = 0x10269Cu;
    ctx->pc = 0x1026A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10269Cu;
    // 0x1026a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    ApSCDEntError__FiPciP5BcObj_0x1057b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1026A4u;
    // 0x1026a4: 0x0  nop
    ctx->pc = 0x1026a4u;
    // NOP
    ctx->pc = 0x1026a8u;
}
