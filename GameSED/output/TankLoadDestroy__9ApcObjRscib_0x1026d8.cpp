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

// Function: TankLoadDestroy__9ApcObjRscib
// Address: 0x1026d8 - 0x1027cc
void TankLoadDestroy__9ApcObjRscib_0x1026d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankLoadDestroy__9ApcObjRscib_0x1026d8");
#endif

    switch (ctx->pc) {
        case 0x1026d8u: goto label_1026d8;
        case 0x1026dcu: goto label_1026dc;
        case 0x1026e0u: goto label_1026e0;
        case 0x1026e4u: goto label_1026e4;
        case 0x1026e8u: goto label_1026e8;
        case 0x1026ecu: goto label_1026ec;
        case 0x1026f0u: goto label_1026f0;
        case 0x1026f4u: goto label_1026f4;
        case 0x1026f8u: goto label_1026f8;
        case 0x1026fcu: goto label_1026fc;
        case 0x102700u: goto label_102700;
        case 0x102704u: goto label_102704;
        case 0x102708u: goto label_102708;
        case 0x10270cu: goto label_10270c;
        case 0x102710u: goto label_102710;
        case 0x102714u: goto label_102714;
        case 0x102718u: goto label_102718;
        case 0x10271cu: goto label_10271c;
        case 0x102720u: goto label_102720;
        case 0x102724u: goto label_102724;
        case 0x102728u: goto label_102728;
        case 0x10272cu: goto label_10272c;
        case 0x102730u: goto label_102730;
        case 0x102734u: goto label_102734;
        case 0x102738u: goto label_102738;
        case 0x10273cu: goto label_10273c;
        case 0x102740u: goto label_102740;
        case 0x102744u: goto label_102744;
        case 0x102748u: goto label_102748;
        case 0x10274cu: goto label_10274c;
        case 0x102750u: goto label_102750;
        case 0x102754u: goto label_102754;
        case 0x102758u: goto label_102758;
        case 0x10275cu: goto label_10275c;
        case 0x102760u: goto label_102760;
        case 0x102764u: goto label_102764;
        case 0x102768u: goto label_102768;
        case 0x10276cu: goto label_10276c;
        case 0x102770u: goto label_102770;
        case 0x102774u: goto label_102774;
        case 0x102778u: goto label_102778;
        case 0x10277cu: goto label_10277c;
        case 0x102780u: goto label_102780;
        case 0x102784u: goto label_102784;
        case 0x102788u: goto label_102788;
        case 0x10278cu: goto label_10278c;
        case 0x102790u: goto label_102790;
        case 0x102794u: goto label_102794;
        case 0x102798u: goto label_102798;
        case 0x10279cu: goto label_10279c;
        case 0x1027a0u: goto label_1027a0;
        case 0x1027a4u: goto label_1027a4;
        case 0x1027a8u: goto label_1027a8;
        case 0x1027acu: goto label_1027ac;
        case 0x1027b0u: goto label_1027b0;
        case 0x1027b4u: goto label_1027b4;
        case 0x1027b8u: goto label_1027b8;
        case 0x1027bcu: goto label_1027bc;
        case 0x1027c0u: goto label_1027c0;
        case 0x1027c4u: goto label_1027c4;
        case 0x1027c8u: goto label_1027c8;
        default: break;
    }

    ctx->pc = 0x1026d8u;

label_1026d8:
    // 0x1026d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1026d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1026dc:
    // 0x1026dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1026dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1026e0:
    // 0x1026e0: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_1026e4:
    if (ctx->pc == 0x1026E4u) {
        ctx->pc = 0x1026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E0u;
        // 0x1026e4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026E8u;
        goto label_1026e8;
    }
    ctx->pc = 0x1026E0u;
    {
        const bool branch_taken_0x1026e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E0u;
        // 0x1026e4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026e0) {
            ctx->pc = 0x102758u;
            goto label_102758;
        }
    }
    ctx->pc = 0x1026E8u;
label_1026e8:
    // 0x1026e8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1026e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1026ec:
    // 0x1026ec: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1026f0:
    if (ctx->pc == 0x1026F0u) {
        ctx->pc = 0x1026F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026ECu;
        // 0x1026f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026F4u;
        goto label_1026f4;
    }
    ctx->pc = 0x1026ECu;
    {
        const bool branch_taken_0x1026ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1026F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026ECu;
        // 0x1026f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026ec) {
            ctx->pc = 0x10272Cu;
            goto label_10272c;
        }
    }
    ctx->pc = 0x1026F4u;
label_1026f4:
    // 0x1026f4: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x1026f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1026f8:
    // 0x1026f8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1026f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1026fc:
    // 0x1026fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1026fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102700:
    // 0x102700: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x102700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_102704:
    // 0x102704: 0x0  nop
    ctx->pc = 0x102704u;
    // NOP
label_102708:
    // 0x102708: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x102708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_10270c:
    // 0x10270c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x10270cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_102710:
    // 0x102710: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x102710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_102714:
    // 0x102714: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x102714u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_102718:
    // 0x102718: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
label_10271c:
    if (ctx->pc == 0x10271Cu) {
        ctx->pc = 0x10271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102718u;
        // 0x10271c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102720u;
        goto label_102720;
    }
    ctx->pc = 0x102718u;
    {
        const bool branch_taken_0x102718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102718u;
        // 0x10271c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102718) {
            ctx->pc = 0x102738u;
            goto label_102738;
        }
    }
    ctx->pc = 0x102720u;
label_102720:
    // 0x102720: 0x0  nop
    ctx->pc = 0x102720u;
    // NOP
label_102724:
    // 0x102724: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
label_102728:
    if (ctx->pc == 0x102728u) {
        ctx->pc = 0x102728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102724u;
        // 0x102728: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10272Cu;
        goto label_10272c;
    }
    ctx->pc = 0x102724u;
    {
        const bool branch_taken_0x102724 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x102724) {
            ctx->pc = 0x102728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102724u;
            // 0x102728: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102708;
        }
    }
    ctx->pc = 0x10272Cu;
label_10272c:
    // 0x10272c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10272cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102730:
    // 0x102730: 0x1000000c  b           . + 4 + (0xC << 2)
label_102734:
    if (ctx->pc == 0x102734u) {
        ctx->pc = 0x102734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102730u;
        // 0x102734: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102738u;
        goto label_102738;
    }
    ctx->pc = 0x102730u;
    {
        const bool branch_taken_0x102730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102730u;
        // 0x102734: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102730) {
            ctx->pc = 0x102764u;
            goto label_102764;
        }
    }
    ctx->pc = 0x102738u;
label_102738:
    // 0x102738: 0x0  nop
    ctx->pc = 0x102738u;
    // NOP
label_10273c:
    // 0x10273c: 0x0  nop
    ctx->pc = 0x10273cu;
    // NOP
label_102740:
    // 0x102740: 0x0  nop
    ctx->pc = 0x102740u;
    // NOP
label_102744:
    // 0x102744: 0x0  nop
    ctx->pc = 0x102744u;
    // NOP
label_102748:
    // 0x102748: 0x0  nop
    ctx->pc = 0x102748u;
    // NOP
label_10274c:
    // 0x10274c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_102750:
    if (ctx->pc == 0x102750u) {
        ctx->pc = 0x102750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10274Cu;
        // 0x102750: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102754u;
        goto label_102754;
    }
    ctx->pc = 0x10274Cu;
    {
        const bool branch_taken_0x10274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10274Cu;
        // 0x102750: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10274c) {
            ctx->pc = 0x102730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102730;
        }
    }
    ctx->pc = 0x102754u;
label_102754:
    // 0x102754: 0x0  nop
    ctx->pc = 0x102754u;
    // NOP
label_102758:
    // 0x102758: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x102758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_10275c:
    // 0x10275c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x10275cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_102760:
    // 0x102760: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102764:
    // 0x102764: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x102764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_102768:
    // 0x102768: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_10276c:
    if (ctx->pc == 0x10276Cu) {
        ctx->pc = 0x10276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102768u;
        // 0x10276c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102770u;
        goto label_102770;
    }
    ctx->pc = 0x102768u;
    {
        const bool branch_taken_0x102768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102768u;
        // 0x10276c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102768) {
            ctx->pc = 0x102788u;
            goto label_102788;
        }
    }
    ctx->pc = 0x102770u;
label_102770:
    // 0x102770: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102774:
    // 0x102774: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102778:
    // 0x102778: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10277c:
    // 0x10277c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102780:
    // 0x102780: 0x60f809  jalr        $v1
label_102784:
    if (ctx->pc == 0x102784u) {
        ctx->pc = 0x102784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102780u;
        // 0x102784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102788u;
        goto label_102788;
    }
    ctx->pc = 0x102780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102788u);
        ctx->pc = 0x102784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102780u;
        // 0x102784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102780u, 0x102788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102788u;
label_102788:
    // 0x102788: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10278c:
    // 0x10278c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102790:
    if (ctx->pc == 0x102790u) {
        ctx->pc = 0x102790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10278Cu;
        // 0x102790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102794u;
        goto label_102794;
    }
    ctx->pc = 0x10278Cu;
    {
        const bool branch_taken_0x10278c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10278Cu;
        // 0x102790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10278c) {
            ctx->pc = 0x1027ACu;
            goto label_1027ac;
        }
    }
    ctx->pc = 0x102794u;
label_102794:
    // 0x102794: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102798:
    // 0x102798: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10279c:
    // 0x10279c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10279cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1027a0:
    // 0x1027a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1027a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1027a4:
    // 0x1027a4: 0x60f809  jalr        $v1
label_1027a8:
    if (ctx->pc == 0x1027A8u) {
        ctx->pc = 0x1027A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027A4u;
        // 0x1027a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027ACu;
        goto label_1027ac;
    }
    ctx->pc = 0x1027A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1027ACu);
        ctx->pc = 0x1027A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027A4u;
        // 0x1027a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1027A4u, 0x1027ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1027ACu;
label_1027ac:
    // 0x1027ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1027acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1027b0:
    // 0x1027b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1027b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1027b4:
    // 0x1027b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1027b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1027b8:
    // 0x1027b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1027b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1027bc:
    // 0x1027bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1027bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1027c0:
    // 0x1027c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1027c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1027c4:
    // 0x1027c4: 0x3e00008  jr          $ra
label_1027c8:
    if (ctx->pc == 0x1027C8u) {
        ctx->pc = 0x1027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C4u;
        // 0x1027c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027CCu;
        goto label_fallthrough_0x1027c4;
    }
    ctx->pc = 0x1027C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C4u;
        // 0x1027c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1027C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1027c4:
    ctx->pc = 0x1027CCu;
}
