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

// Function: BMotionVectorDataLinerSetup__FP5BcObjP11BMotionCtrlPvb
// Address: 0x1a56b0 - 0x1a5768
void BMotionVectorDataLinerSetup__FP5BcObjP11BMotionCtrlPvb_0x1a56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionVectorDataLinerSetup__FP5BcObjP11BMotionCtrlPvb_0x1a56b0");
#endif

    switch (ctx->pc) {
        case 0x1a56b0u: goto label_1a56b0;
        case 0x1a56b4u: goto label_1a56b4;
        case 0x1a56b8u: goto label_1a56b8;
        case 0x1a56bcu: goto label_1a56bc;
        case 0x1a56c0u: goto label_1a56c0;
        case 0x1a56c4u: goto label_1a56c4;
        case 0x1a56c8u: goto label_1a56c8;
        case 0x1a56ccu: goto label_1a56cc;
        case 0x1a56d0u: goto label_1a56d0;
        case 0x1a56d4u: goto label_1a56d4;
        case 0x1a56d8u: goto label_1a56d8;
        case 0x1a56dcu: goto label_1a56dc;
        case 0x1a56e0u: goto label_1a56e0;
        case 0x1a56e4u: goto label_1a56e4;
        case 0x1a56e8u: goto label_1a56e8;
        case 0x1a56ecu: goto label_1a56ec;
        case 0x1a56f0u: goto label_1a56f0;
        case 0x1a56f4u: goto label_1a56f4;
        case 0x1a56f8u: goto label_1a56f8;
        case 0x1a56fcu: goto label_1a56fc;
        case 0x1a5700u: goto label_1a5700;
        case 0x1a5704u: goto label_1a5704;
        case 0x1a5708u: goto label_1a5708;
        case 0x1a570cu: goto label_1a570c;
        case 0x1a5710u: goto label_1a5710;
        case 0x1a5714u: goto label_1a5714;
        case 0x1a5718u: goto label_1a5718;
        case 0x1a571cu: goto label_1a571c;
        case 0x1a5720u: goto label_1a5720;
        case 0x1a5724u: goto label_1a5724;
        case 0x1a5728u: goto label_1a5728;
        case 0x1a572cu: goto label_1a572c;
        case 0x1a5730u: goto label_1a5730;
        case 0x1a5734u: goto label_1a5734;
        case 0x1a5738u: goto label_1a5738;
        case 0x1a573cu: goto label_1a573c;
        case 0x1a5740u: goto label_1a5740;
        case 0x1a5744u: goto label_1a5744;
        case 0x1a5748u: goto label_1a5748;
        case 0x1a574cu: goto label_1a574c;
        case 0x1a5750u: goto label_1a5750;
        case 0x1a5754u: goto label_1a5754;
        case 0x1a5758u: goto label_1a5758;
        case 0x1a575cu: goto label_1a575c;
        case 0x1a5760u: goto label_1a5760;
        case 0x1a5764u: goto label_1a5764;
        default: break;
    }

    ctx->pc = 0x1a56b0u;

label_1a56b0:
    // 0x1a56b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a56b4:
    // 0x1a56b4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a56b8:
    // 0x1a56b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a56b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a56bc:
    // 0x1a56bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a56bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a56c0:
    // 0x1a56c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a56c4:
    // 0x1a56c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a56c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a56c8:
    // 0x1a56c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a56c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a56cc:
    // 0x1a56cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a56d0:
    // 0x1a56d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a56d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a56d4:
    // 0x1a56d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a56d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a56d8:
    // 0x1a56d8: 0x24463918  addiu       $a2, $v0, 0x3918
    ctx->pc = 0x1a56d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14616));
label_1a56dc:
    // 0x1a56dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a56dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a56e0:
    // 0x1a56e0: 0xc068866  jal         func_1A2198
label_1a56e4:
    if (ctx->pc == 0x1A56E4u) {
        ctx->pc = 0x1A56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E0u;
        // 0x1a56e4: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56E8u;
        goto label_1a56e8;
    }
    ctx->pc = 0x1A56E0u;
    SET_GPR_U32(ctx, 31, 0x1A56E8u);
    ctx->pc = 0x1A56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56E0u;
    // 0x1a56e4: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A56E0u, 0x1A56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56E8u;
label_1a56e8:
    // 0x1a56e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a56e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a56ec:
    // 0x1a56ec: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a56ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a56f0:
    // 0x1a56f0: 0xacb00010  sw          $s0, 0x10($a1)
    ctx->pc = 0x1a56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 16));
label_1a56f4:
    // 0x1a56f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a56f8:
    if (ctx->pc == 0x1A56F8u) {
        ctx->pc = 0x1A56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F4u;
        // 0x1a56f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56FCu;
        goto label_1a56fc;
    }
    ctx->pc = 0x1A56F4u;
    {
        const bool branch_taken_0x1a56f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F4u;
        // 0x1a56f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56f4) {
            ctx->pc = 0x1A5708u;
            goto label_1a5708;
        }
    }
    ctx->pc = 0x1A56FCu;
label_1a56fc:
    // 0x1a56fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5700:
    // 0x1a5700: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5704:
    if (ctx->pc == 0x1A5704u) {
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0xa4a20018  sh          $v0, 0x18($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5708u;
        goto label_1a5708;
    }
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0xa4a20018  sh          $v0, 0x18($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A570Cu;
            goto label_1a570c;
        }
    }
    ctx->pc = 0x1A5708u;
label_1a5708:
    // 0x1a5708: 0xa4a00018  sh          $zero, 0x18($a1)
    ctx->pc = 0x1a5708u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 0));
label_1a570c:
    // 0x1a570c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a5710:
    if (ctx->pc == 0x1A5710u) {
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5714u;
        goto label_1a5714;
    }
    ctx->pc = 0x1A570Cu;
    {
        const bool branch_taken_0x1a570c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a570c) {
            ctx->pc = 0x1A5720u;
            goto label_1a5720;
        }
    }
    ctx->pc = 0x1A5714u;
label_1a5714:
    // 0x1a5714: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a5718:
    if (ctx->pc == 0x1A5718u) {
        ctx->pc = 0x1A5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5714u;
        // 0x1a5718: 0xa4a2001a  sh          $v0, 0x1A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A571Cu;
        goto label_1a571c;
    }
    ctx->pc = 0x1A5714u;
    {
        const bool branch_taken_0x1a5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5714u;
        // 0x1a5718: 0xa4a2001a  sh          $v0, 0x1A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5714) {
            ctx->pc = 0x1A5724u;
            goto label_1a5724;
        }
    }
    ctx->pc = 0x1A571Cu;
label_1a571c:
    // 0x1a571c: 0x0  nop
    ctx->pc = 0x1a571cu;
    // NOP
label_1a5720:
    // 0x1a5720: 0xa4a0001a  sh          $zero, 0x1A($a1)
    ctx->pc = 0x1a5720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 0));
label_1a5724:
    // 0x1a5724: 0x8e47007c  lw          $a3, 0x7C($s2)
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1a5728:
    // 0x1a5728: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x1a5728u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
label_1a572c:
    // 0x1a572c: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x1a572cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
label_1a5730:
    // 0x1a5730: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a5730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a5734:
    // 0x1a5734: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1a5734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1a5738:
    // 0x1a5738: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a5738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a573c:
    // 0x1a573c: 0x14f20004  bne         $a3, $s2, . + 4 + (0x4 << 2)
label_1a5740:
    if (ctx->pc == 0x1A5740u) {
        ctx->pc = 0x1A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A573Cu;
        // 0x1a5740: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5744u;
        goto label_1a5744;
    }
    ctx->pc = 0x1A573Cu;
    {
        const bool branch_taken_0x1a573c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A573Cu;
        // 0x1a5740: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a573c) {
            ctx->pc = 0x1A5750u;
            goto label_1a5750;
        }
    }
    ctx->pc = 0x1A5744u;
label_1a5744:
    // 0x1a5744: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x1a5744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_1a5748:
    // 0x1a5748: 0x40f809  jalr        $v0
label_1a574c:
    if (ctx->pc == 0x1A574Cu) {
        ctx->pc = 0x1A574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5748u;
        // 0x1a574c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5750u;
        goto label_1a5750;
    }
    ctx->pc = 0x1A5748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5750u);
        ctx->pc = 0x1A574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5748u;
        // 0x1a574c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5748u, 0x1A5750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5750u;
label_1a5750:
    // 0x1a5750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5754:
    // 0x1a5754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a5758:
    // 0x1a5758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a575c:
    // 0x1a575c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a5760:
    // 0x1a5760: 0x3e00008  jr          $ra
label_1a5764:
    if (ctx->pc == 0x1A5764u) {
        ctx->pc = 0x1A5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5760u;
        // 0x1a5764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5768u;
        goto label_fallthrough_0x1a5760;
    }
    ctx->pc = 0x1A5760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5760u;
        // 0x1a5764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5760:
    ctx->pc = 0x1A5768u;
}
