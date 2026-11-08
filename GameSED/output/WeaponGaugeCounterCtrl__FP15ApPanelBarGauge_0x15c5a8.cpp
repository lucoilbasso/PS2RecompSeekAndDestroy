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

// Function: WeaponGaugeCounterCtrl__FP15ApPanelBarGauge
// Address: 0x15c5a8 - 0x15c78c
void WeaponGaugeCounterCtrl__FP15ApPanelBarGauge_0x15c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponGaugeCounterCtrl__FP15ApPanelBarGauge_0x15c5a8");
#endif

    switch (ctx->pc) {
        case 0x15c5a8u: goto label_15c5a8;
        case 0x15c5acu: goto label_15c5ac;
        case 0x15c5b0u: goto label_15c5b0;
        case 0x15c5b4u: goto label_15c5b4;
        case 0x15c5b8u: goto label_15c5b8;
        case 0x15c5bcu: goto label_15c5bc;
        case 0x15c5c0u: goto label_15c5c0;
        case 0x15c5c4u: goto label_15c5c4;
        case 0x15c5c8u: goto label_15c5c8;
        case 0x15c5ccu: goto label_15c5cc;
        case 0x15c5d0u: goto label_15c5d0;
        case 0x15c5d4u: goto label_15c5d4;
        case 0x15c5d8u: goto label_15c5d8;
        case 0x15c5dcu: goto label_15c5dc;
        case 0x15c5e0u: goto label_15c5e0;
        case 0x15c5e4u: goto label_15c5e4;
        case 0x15c5e8u: goto label_15c5e8;
        case 0x15c5ecu: goto label_15c5ec;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c5f4u: goto label_15c5f4;
        case 0x15c5f8u: goto label_15c5f8;
        case 0x15c5fcu: goto label_15c5fc;
        case 0x15c600u: goto label_15c600;
        case 0x15c604u: goto label_15c604;
        case 0x15c608u: goto label_15c608;
        case 0x15c60cu: goto label_15c60c;
        case 0x15c610u: goto label_15c610;
        case 0x15c614u: goto label_15c614;
        case 0x15c618u: goto label_15c618;
        case 0x15c61cu: goto label_15c61c;
        case 0x15c620u: goto label_15c620;
        case 0x15c624u: goto label_15c624;
        case 0x15c628u: goto label_15c628;
        case 0x15c62cu: goto label_15c62c;
        case 0x15c630u: goto label_15c630;
        case 0x15c634u: goto label_15c634;
        case 0x15c638u: goto label_15c638;
        case 0x15c63cu: goto label_15c63c;
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        case 0x15c680u: goto label_15c680;
        case 0x15c684u: goto label_15c684;
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        case 0x15c6c8u: goto label_15c6c8;
        case 0x15c6ccu: goto label_15c6cc;
        case 0x15c6d0u: goto label_15c6d0;
        case 0x15c6d4u: goto label_15c6d4;
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6dcu: goto label_15c6dc;
        case 0x15c6e0u: goto label_15c6e0;
        case 0x15c6e4u: goto label_15c6e4;
        case 0x15c6e8u: goto label_15c6e8;
        case 0x15c6ecu: goto label_15c6ec;
        case 0x15c6f0u: goto label_15c6f0;
        case 0x15c6f4u: goto label_15c6f4;
        case 0x15c6f8u: goto label_15c6f8;
        case 0x15c6fcu: goto label_15c6fc;
        case 0x15c700u: goto label_15c700;
        case 0x15c704u: goto label_15c704;
        case 0x15c708u: goto label_15c708;
        case 0x15c70cu: goto label_15c70c;
        case 0x15c710u: goto label_15c710;
        case 0x15c714u: goto label_15c714;
        case 0x15c718u: goto label_15c718;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c720u: goto label_15c720;
        case 0x15c724u: goto label_15c724;
        case 0x15c728u: goto label_15c728;
        case 0x15c72cu: goto label_15c72c;
        case 0x15c730u: goto label_15c730;
        case 0x15c734u: goto label_15c734;
        case 0x15c738u: goto label_15c738;
        case 0x15c73cu: goto label_15c73c;
        case 0x15c740u: goto label_15c740;
        case 0x15c744u: goto label_15c744;
        case 0x15c748u: goto label_15c748;
        case 0x15c74cu: goto label_15c74c;
        case 0x15c750u: goto label_15c750;
        case 0x15c754u: goto label_15c754;
        case 0x15c758u: goto label_15c758;
        case 0x15c75cu: goto label_15c75c;
        case 0x15c760u: goto label_15c760;
        case 0x15c764u: goto label_15c764;
        case 0x15c768u: goto label_15c768;
        case 0x15c76cu: goto label_15c76c;
        case 0x15c770u: goto label_15c770;
        case 0x15c774u: goto label_15c774;
        case 0x15c778u: goto label_15c778;
        case 0x15c77cu: goto label_15c77c;
        case 0x15c780u: goto label_15c780;
        case 0x15c784u: goto label_15c784;
        case 0x15c788u: goto label_15c788;
        default: break;
    }

    ctx->pc = 0x15c5a8u;

label_15c5a8:
    // 0x15c5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15c5ac:
    // 0x15c5ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15c5b0:
    // 0x15c5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15c5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c5b4:
    // 0x15c5b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15c5b8:
    // 0x15c5b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15c5bc:
    // 0x15c5bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_15c5c0:
    // 0x15c5c0: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x15c5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_15c5c4:
    // 0x15c5c4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x15c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_15c5c8:
    // 0x15c5c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15c5cc:
    if (ctx->pc == 0x15C5CCu) {
        ctx->pc = 0x15C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5C8u;
        // 0x15c5cc: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5D0u;
        goto label_15c5d0;
    }
    ctx->pc = 0x15C5C8u;
    {
        const bool branch_taken_0x15c5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5C8u;
        // 0x15c5cc: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5c8) {
            ctx->pc = 0x15C650u;
            goto label_15c650;
        }
    }
    ctx->pc = 0x15C5D0u;
label_15c5d0:
    // 0x15c5d0: 0x4420069  bltzl       $v0, . + 4 + (0x69 << 2)
label_15c5d4:
    if (ctx->pc == 0x15C5D4u) {
        ctx->pc = 0x15C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5D0u;
        // 0x15c5d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5D8u;
        goto label_15c5d8;
    }
    ctx->pc = 0x15C5D0u;
    {
        const bool branch_taken_0x15c5d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c5d0) {
            ctx->pc = 0x15C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C5D0u;
            // 0x15c5d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C778u;
            goto label_15c778;
        }
    }
    ctx->pc = 0x15C5D8u;
label_15c5d8:
    // 0x15c5d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c5dc:
    // 0x15c5dc: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x15c5dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_15c5e0:
    // 0x15c5e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15c5e4:
    // 0x15c5e4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_15c5e8:
    if (ctx->pc == 0x15C5E8u) {
        ctx->pc = 0x15C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5E4u;
        // 0x15c5e8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5ECu;
        goto label_15c5ec;
    }
    ctx->pc = 0x15C5E4u;
    {
        const bool branch_taken_0x15c5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5E4u;
        // 0x15c5e8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5e4) {
            ctx->pc = 0x15C634u;
            goto label_15c634;
        }
    }
    ctx->pc = 0x15C5ECu;
label_15c5ec:
    // 0x15c5ec: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15c5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c5f0:
    // 0x15c5f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c5f4:
    if (ctx->pc == 0x15C5F4u) {
        ctx->pc = 0x15C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5F0u;
        // 0x15c5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5F8u;
        goto label_15c5f8;
    }
    ctx->pc = 0x15C5F0u;
    {
        const bool branch_taken_0x15c5f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5F0u;
        // 0x15c5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5f0) {
            ctx->pc = 0x15C610u;
            goto label_15c610;
        }
    }
    ctx->pc = 0x15C5F8u;
label_15c5f8:
    // 0x15c5f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c5fc:
    // 0x15c5fc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c600:
    // 0x15c600: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c604:
    // 0x15c604: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c608:
    // 0x15c608: 0x60f809  jalr        $v1
label_15c60c:
    if (ctx->pc == 0x15C60Cu) {
        ctx->pc = 0x15C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C608u;
        // 0x15c60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C610u;
        goto label_15c610;
    }
    ctx->pc = 0x15C608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C610u);
        ctx->pc = 0x15C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C608u;
        // 0x15c60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C608u, 0x15C610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C610u;
label_15c610:
    // 0x15c610: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15c610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c614:
    // 0x15c614: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c618:
    if (ctx->pc == 0x15C618u) {
        ctx->pc = 0x15C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C614u;
        // 0x15c618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C61Cu;
        goto label_15c61c;
    }
    ctx->pc = 0x15C614u;
    {
        const bool branch_taken_0x15c614 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C614u;
        // 0x15c618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c614) {
            ctx->pc = 0x15C634u;
            goto label_15c634;
        }
    }
    ctx->pc = 0x15C61Cu;
label_15c61c:
    // 0x15c61c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c620:
    // 0x15c620: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c624:
    // 0x15c624: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c628:
    // 0x15c628: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c62c:
    // 0x15c62c: 0x60f809  jalr        $v1
label_15c630:
    if (ctx->pc == 0x15C630u) {
        ctx->pc = 0x15C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C62Cu;
        // 0x15c630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C634u;
        goto label_15c634;
    }
    ctx->pc = 0x15C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C634u);
        ctx->pc = 0x15C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C62Cu;
        // 0x15c630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C62Cu, 0x15C634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C634u;
label_15c634:
    // 0x15c634: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15c638:
    // 0x15c638: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15c638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c63c:
    // 0x15c63c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15c640:
    // 0x15c640: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x15c640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_15c644:
    // 0x15c644: 0x1000004b  b           . + 4 + (0x4B << 2)
label_15c648:
    if (ctx->pc == 0x15C648u) {
        ctx->pc = 0x15C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C644u;
        // 0x15c648: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C64Cu;
        goto label_15c64c;
    }
    ctx->pc = 0x15C644u;
    {
        const bool branch_taken_0x15c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C644u;
        // 0x15c648: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c644) {
            ctx->pc = 0x15C774u;
            goto label_15c774;
        }
    }
    ctx->pc = 0x15C64Cu;
label_15c64c:
    // 0x15c64c: 0x0  nop
    ctx->pc = 0x15c64cu;
    // NOP
label_15c650:
    // 0x15c650: 0x443001e  bgezl       $v0, . + 4 + (0x1E << 2)
label_15c654:
    if (ctx->pc == 0x15C654u) {
        ctx->pc = 0x15C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C650u;
        // 0x15c654: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C658u;
        goto label_15c658;
    }
    ctx->pc = 0x15C650u;
    {
        const bool branch_taken_0x15c650 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c650) {
            ctx->pc = 0x15C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C650u;
            // 0x15c654: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C6CCu;
            goto label_15c6cc;
        }
    }
    ctx->pc = 0x15C658u;
label_15c658:
    // 0x15c658: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c65c:
    // 0x15c65c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x15c65cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_15c660:
    // 0x15c660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15c664:
    // 0x15c664: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_15c668:
    if (ctx->pc == 0x15C668u) {
        ctx->pc = 0x15C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C664u;
        // 0x15c668: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C66Cu;
        goto label_15c66c;
    }
    ctx->pc = 0x15C664u;
    {
        const bool branch_taken_0x15c664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C664u;
        // 0x15c668: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c664) {
            ctx->pc = 0x15C6B4u;
            goto label_15c6b4;
        }
    }
    ctx->pc = 0x15C66Cu;
label_15c66c:
    // 0x15c66c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c670:
    // 0x15c670: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c674:
    if (ctx->pc == 0x15C674u) {
        ctx->pc = 0x15C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C670u;
        // 0x15c674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C678u;
        goto label_15c678;
    }
    ctx->pc = 0x15C670u;
    {
        const bool branch_taken_0x15c670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C670u;
        // 0x15c674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c670) {
            ctx->pc = 0x15C690u;
            goto label_15c690;
        }
    }
    ctx->pc = 0x15C678u;
label_15c678:
    // 0x15c678: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c67c:
    // 0x15c67c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c680:
    // 0x15c680: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c684:
    // 0x15c684: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c688:
    // 0x15c688: 0x60f809  jalr        $v1
label_15c68c:
    if (ctx->pc == 0x15C68Cu) {
        ctx->pc = 0x15C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C688u;
        // 0x15c68c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C690u;
        goto label_15c690;
    }
    ctx->pc = 0x15C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C690u);
        ctx->pc = 0x15C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C688u;
        // 0x15c68c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C688u, 0x15C690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C690u;
label_15c690:
    // 0x15c690: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15c690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c694:
    // 0x15c694: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c698:
    if (ctx->pc == 0x15C698u) {
        ctx->pc = 0x15C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C694u;
        // 0x15c698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C69Cu;
        goto label_15c69c;
    }
    ctx->pc = 0x15C694u;
    {
        const bool branch_taken_0x15c694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C694u;
        // 0x15c698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c694) {
            ctx->pc = 0x15C6B4u;
            goto label_15c6b4;
        }
    }
    ctx->pc = 0x15C69Cu;
label_15c69c:
    // 0x15c69c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c6a0:
    // 0x15c6a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c6a4:
    // 0x15c6a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c6a8:
    // 0x15c6a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c6ac:
    // 0x15c6ac: 0x60f809  jalr        $v1
label_15c6b0:
    if (ctx->pc == 0x15C6B0u) {
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ACu;
        // 0x15c6b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6B4u;
        goto label_15c6b4;
    }
    ctx->pc = 0x15C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C6B4u);
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ACu;
        // 0x15c6b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C6ACu, 0x15C6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C6B4u;
label_15c6b4:
    // 0x15c6b4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15c6b8:
    // 0x15c6b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15c6bc:
    // 0x15c6bc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15c6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15c6c0:
    // 0x15c6c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15c6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15c6c4:
    // 0x15c6c4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x15c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_15c6c8:
    // 0x15c6c8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x15c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_15c6cc:
    // 0x15c6cc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_15c6d0:
    // 0x15c6d0: 0x50620029  beql        $v1, $v0, . + 4 + (0x29 << 2)
label_15c6d4:
    if (ctx->pc == 0x15C6D4u) {
        ctx->pc = 0x15C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6D0u;
        // 0x15c6d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6D8u;
        goto label_15c6d8;
    }
    ctx->pc = 0x15C6D0u;
    {
        const bool branch_taken_0x15c6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c6d0) {
            ctx->pc = 0x15C6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C6D0u;
            // 0x15c6d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C778u;
            goto label_15c778;
        }
    }
    ctx->pc = 0x15C6D8u;
label_15c6d8:
    // 0x15c6d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c6dc:
    // 0x15c6dc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_15c6e0:
    if (ctx->pc == 0x15C6E0u) {
        ctx->pc = 0x15C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6DCu;
        // 0x15c6e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6E4u;
        goto label_15c6e4;
    }
    ctx->pc = 0x15C6DCu;
    {
        const bool branch_taken_0x15c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6DCu;
        // 0x15c6e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6dc) {
            ctx->pc = 0x15C774u;
            goto label_15c774;
        }
    }
    ctx->pc = 0x15C6E4u;
label_15c6e4:
    // 0x15c6e4: 0x28a203e8  slti        $v0, $a1, 0x3E8
    ctx->pc = 0x15c6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1000) ? 1 : 0);
label_15c6e8:
    // 0x15c6e8: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x15c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_15c6ec:
    // 0x15c6ec: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x15c6ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_15c6f0:
    // 0x15c6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c6f4:
    // 0x15c6f4: 0x28a20064  slti        $v0, $a1, 0x64
    ctx->pc = 0x15c6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
label_15c6f8:
    // 0x15c6f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_15c6fc:
    if (ctx->pc == 0x15C6FCu) {
        ctx->pc = 0x15C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6F8u;
        // 0x15c6fc: 0xae05001c  sw          $a1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C700u;
        goto label_15c700;
    }
    ctx->pc = 0x15C6F8u;
    {
        const bool branch_taken_0x15c6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6F8u;
        // 0x15c6fc: 0xae05001c  sw          $a1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6f8) {
            ctx->pc = 0x15C71Cu;
            goto label_15c71c;
        }
    }
    ctx->pc = 0x15C700u;
label_15c700:
    // 0x15c700: 0x24a5ff9c  addiu       $a1, $a1, -0x64
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967196));
label_15c704:
    // 0x15c704: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x15c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15c708:
    // 0x15c708: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x15c708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
label_15c70c:
    // 0x15c70c: 0x0  nop
    ctx->pc = 0x15c70cu;
    // NOP
label_15c710:
    // 0x15c710: 0x0  nop
    ctx->pc = 0x15c710u;
    // NOP
label_15c714:
    // 0x15c714: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
label_15c718:
    if (ctx->pc == 0x15C718u) {
        ctx->pc = 0x15C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C714u;
        // 0x15c718: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C71Cu;
        goto label_15c71c;
    }
    ctx->pc = 0x15C714u;
    {
        const bool branch_taken_0x15c714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C714u;
        // 0x15c718: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c714) {
            ctx->pc = 0x15C700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c700;
        }
    }
    ctx->pc = 0x15C71Cu;
label_15c71c:
    // 0x15c71c: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x15c71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_15c720:
    // 0x15c720: 0xa7a60000  sh          $a2, 0x0($sp)
    ctx->pc = 0x15c720u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
label_15c724:
    // 0x15c724: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15c728:
    if (ctx->pc == 0x15C728u) {
        ctx->pc = 0x15C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C724u;
        // 0x15c728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C72Cu;
        goto label_15c72c;
    }
    ctx->pc = 0x15C724u;
    {
        const bool branch_taken_0x15c724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C724u;
        // 0x15c728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c724) {
            ctx->pc = 0x15C74Cu;
            goto label_15c74c;
        }
    }
    ctx->pc = 0x15C72Cu;
label_15c72c:
    // 0x15c72c: 0x0  nop
    ctx->pc = 0x15c72cu;
    // NOP
label_15c730:
    // 0x15c730: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x15c730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
label_15c734:
    // 0x15c734: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x15c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15c738:
    // 0x15c738: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x15c738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_15c73c:
    // 0x15c73c: 0x0  nop
    ctx->pc = 0x15c73cu;
    // NOP
label_15c740:
    // 0x15c740: 0x0  nop
    ctx->pc = 0x15c740u;
    // NOP
label_15c744:
    // 0x15c744: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
label_15c748:
    if (ctx->pc == 0x15C748u) {
        ctx->pc = 0x15C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C744u;
        // 0x15c748: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C74Cu;
        goto label_15c74c;
    }
    ctx->pc = 0x15C744u;
    {
        const bool branch_taken_0x15c744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C744u;
        // 0x15c748: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c744) {
            ctx->pc = 0x15C730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c730;
        }
    }
    ctx->pc = 0x15C74Cu;
label_15c74c:
    // 0x15c74c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c750:
    // 0x15c750: 0xa7a60002  sh          $a2, 0x2($sp)
    ctx->pc = 0x15c750u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 6));
label_15c754:
    // 0x15c754: 0xc0637a8  jal         func_18DEA0
label_15c758:
    if (ctx->pc == 0x15C758u) {
        ctx->pc = 0x15C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C754u;
        // 0x15c758: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C75Cu;
        goto label_15c75c;
    }
    ctx->pc = 0x15C754u;
    SET_GPR_U32(ctx, 31, 0x15C75Cu);
    ctx->pc = 0x15C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C754u;
    // 0x15c758: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x15C754u, 0x15C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C75Cu;
label_15c75c:
    // 0x15c75c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c760:
    // 0x15c760: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15c760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c764:
    // 0x15c764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c768:
    // 0x15c768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c76c:
    // 0x15c76c: 0xc063b10  jal         func_18EC40
label_15c770:
    if (ctx->pc == 0x15C770u) {
        ctx->pc = 0x15C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C76Cu;
        // 0x15c770: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C774u;
        goto label_15c774;
    }
    ctx->pc = 0x15C76Cu;
    SET_GPR_U32(ctx, 31, 0x15C774u);
    ctx->pc = 0x15C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C76Cu;
    // 0x15c770: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC40u, 0x15C76Cu, 0x15C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C774u;
label_15c774:
    // 0x15c774: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15c774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15c778:
    // 0x15c778: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15c778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15c77c:
    // 0x15c77c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15c77cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15c780:
    // 0x15c780: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15c780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15c784:
    // 0x15c784: 0x3e00008  jr          $ra
label_15c788:
    if (ctx->pc == 0x15C788u) {
        ctx->pc = 0x15C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C784u;
        // 0x15c788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C78Cu;
        goto label_fallthrough_0x15c784;
    }
    ctx->pc = 0x15C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C784u;
        // 0x15c788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15c784:
    ctx->pc = 0x15C78Cu;
}
