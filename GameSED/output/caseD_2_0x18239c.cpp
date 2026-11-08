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

// Function: caseD_2
// Address: 0x18239c - 0x182408
void caseD_2_0x18239c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x18239c");
#endif

    switch (ctx->pc) {
        case 0x1823fcu: goto label_1823fc;
        default: break;
    }

    ctx->pc = 0x18239cu;

    // 0x18239c: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x18239cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1823a0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1823a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823a4: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1823a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1823A8u;
    {
        const bool branch_taken_0x1823a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A8u;
        // 0x1823ac: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823a8) {
            ctx->pc = 0x182438u;
            return;
        }
    }
    ctx->pc = 0x1823B0u;
    // 0x1823b0: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1823B0u;
    {
        const bool branch_taken_0x1823b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1823B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823B0u;
        // 0x1823b4: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823b0) {
            ctx->pc = 0x182438u;
            return;
        }
    }
    ctx->pc = 0x1823B8u;
    // 0x1823b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1823B8u;
    {
        const bool branch_taken_0x1823b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823B8u;
        // 0x1823bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823b8) {
            ctx->pc = 0x18243Cu;
            return;
        }
    }
    ctx->pc = 0x1823C0u;
    // 0x1823c0: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1823c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1823c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1823c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1823cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1823ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1823d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1823d4: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x1823d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1823d8: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1823D8u;
    {
        const bool branch_taken_0x1823d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823D8u;
        // 0x1823dc: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823d8) {
            ctx->pc = 0x18243Cu;
            return;
        }
    }
    ctx->pc = 0x1823E0u;
    // 0x1823e0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1823e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1823e4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1823e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1823e8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1823E8u;
    {
        const bool branch_taken_0x1823e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1823ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823E8u;
        // 0x1823ec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823e8) {
            ctx->pc = 0x182408u;
            return;
        }
    }
    ctx->pc = 0x1823F0u;
    // 0x1823f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1823f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823f4: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x1823F4u;
    SET_GPR_U32(ctx, 31, 0x1823FCu);
    ctx->pc = 0x1823F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1823F4u;
    // 0x1823f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x1823F4u, 0x1823FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1823FCu;
label_1823fc:
    // 0x1823fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1823FCu;
    {
        const bool branch_taken_0x1823fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823fc) {
            ctx->pc = 0x182414u;
            return;
        }
    }
    ctx->pc = 0x182404u;
    // 0x182404: 0x0  nop
    ctx->pc = 0x182404u;
    // NOP
    ctx->pc = 0x182408u;
}
