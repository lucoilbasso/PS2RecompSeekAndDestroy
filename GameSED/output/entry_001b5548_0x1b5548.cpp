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

// Function: entry_001b5548
// Address: 0x1b5548 - 0x1b55dc
void entry_001b5548_0x1b5548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5548_0x1b5548");
#endif

    switch (ctx->pc) {
        case 0x1b5564u: goto label_1b5564;
        case 0x1b5580u: goto label_1b5580;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55ccu: goto label_1b55cc;
        case 0x1b55d4u: goto label_1b55d4;
        default: break;
    }

    ctx->pc = 0x1b5548u;

    // 0x1b5548: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1b5548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b554c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5550: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x1b5550u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1b5554: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x1b5554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x1b5558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b5558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b555c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B555Cu;
    SET_GPR_U32(ctx, 31, 0x1B5564u);
    ctx->pc = 0x1B5560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B555Cu;
    // 0x1b5560: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B555Cu, 0x1B5564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5564u;
label_1b5564:
    // 0x1b5564: 0x2690a6c0  addiu       $s0, $s4, -0x5940
    ctx->pc = 0x1b5564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b5568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b556c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b556cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b5570: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b5570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b5574: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b5574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5578: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B5578u;
    SET_GPR_U32(ctx, 31, 0x1B5580u);
    ctx->pc = 0x1B557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5578u;
    // 0x1b557c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B5578u, 0x1B5580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5580u;
label_1b5580:
    // 0x1b5580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5584: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b5584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b5588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b5588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b558c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b558cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b5590: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b5590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b5594: 0x26c4b180  addiu       $a0, $s6, -0x4E80
    ctx->pc = 0x1b5594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947200));
    // 0x1b5598: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b559c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1b559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b55a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b55a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b55a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55a8: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1b55a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b55ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b55acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b55b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b55b4: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B55B4u;
    SET_GPR_U32(ctx, 31, 0x1B55BCu);
    ctx->pc = 0x1B55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55B4u;
    // 0x1b55b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B55B4u, 0x1B55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55BCu;
label_1b55bc:
    // 0x1b55bc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B55BCu;
    {
        const bool branch_taken_0x1b55bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55BCu;
        // 0x1b55c0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55bc) {
            ctx->pc = 0x1B55DCu;
            return;
        }
    }
    ctx->pc = 0x1B55C4u;
    // 0x1b55c4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B55C4u;
    SET_GPR_U32(ctx, 31, 0x1B55CCu);
    ctx->pc = 0x1B55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55C4u;
    // 0x1b55c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B55C4u, 0x1B55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55CCu;
label_1b55cc:
    // 0x1b55cc: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B55CCu;
    SET_GPR_U32(ctx, 31, 0x1B55D4u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B55CCu, 0x1B55D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55D4u;
label_1b55d4:
    // 0x1b55d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B55D4u;
    {
        const bool branch_taken_0x1b55d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55D4u;
        // 0x1b55d8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55d4) {
            ctx->pc = 0x1B5614u;
            return;
        }
    }
    ctx->pc = 0x1B55DCu;
}
