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

// Function: caseD_3
// Address: 0x182454 - 0x1824c0
void caseD_3_0x182454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x182454");
#endif

    switch (ctx->pc) {
        case 0x1824b4u: goto label_1824b4;
        default: break;
    }

    ctx->pc = 0x182454u;

    // 0x182454: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x182454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x182458: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x182458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18245c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x18245cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182460: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x182460u;
    {
        const bool branch_taken_0x182460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182460u;
        // 0x182464: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182460) {
            ctx->pc = 0x1824F0u;
            return;
        }
    }
    ctx->pc = 0x182468u;
    // 0x182468: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x182468u;
    {
        const bool branch_taken_0x182468 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x18246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182468u;
        // 0x18246c: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182468) {
            ctx->pc = 0x1824F0u;
            return;
        }
    }
    ctx->pc = 0x182470u;
    // 0x182470: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x182470u;
    {
        const bool branch_taken_0x182470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182470u;
        // 0x182474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182470) {
            ctx->pc = 0x1824F4u;
            return;
        }
    }
    ctx->pc = 0x182478u;
    // 0x182478: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x18247c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x182480: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x182480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x182484: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x182484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x182488: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x182488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18248c: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x18248cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x182490: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x182490u;
    {
        const bool branch_taken_0x182490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182490u;
        // 0x182494: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182490) {
            ctx->pc = 0x1824F4u;
            return;
        }
    }
    ctx->pc = 0x182498u;
    // 0x182498: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x182498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18249c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1824a0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1824A0u;
    {
        const bool branch_taken_0x1824a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1824A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824A0u;
        // 0x1824a4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824a0) {
            ctx->pc = 0x1824C0u;
            return;
        }
    }
    ctx->pc = 0x1824A8u;
    // 0x1824a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1824a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824ac: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x1824ACu;
    SET_GPR_U32(ctx, 31, 0x1824B4u);
    ctx->pc = 0x1824B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824ACu;
    // 0x1824b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x1824ACu, 0x1824B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824B4u;
label_1824b4:
    // 0x1824b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1824B4u;
    {
        const bool branch_taken_0x1824b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1824b4) {
            ctx->pc = 0x1824CCu;
            return;
        }
    }
    ctx->pc = 0x1824BCu;
    // 0x1824bc: 0x0  nop
    ctx->pc = 0x1824bcu;
    // NOP
    ctx->pc = 0x1824c0u;
}
