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

// Function: Cmd_USE_TANK_Entry__FP15BsSCDEntControl
// Address: 0x1027d0 - 0x1029e8
void Cmd_USE_TANK_Entry__FP15BsSCDEntControl_0x1027d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_TANK_Entry__FP15BsSCDEntControl_0x1027d0");
#endif

    switch (ctx->pc) {
        case 0x1027d0u: goto label_1027d0;
        case 0x1027d4u: goto label_1027d4;
        case 0x1027d8u: goto label_1027d8;
        case 0x1027dcu: goto label_1027dc;
        case 0x1027e0u: goto label_1027e0;
        case 0x1027e4u: goto label_1027e4;
        case 0x1027e8u: goto label_1027e8;
        case 0x1027ecu: goto label_1027ec;
        case 0x1027f0u: goto label_1027f0;
        case 0x1027f4u: goto label_1027f4;
        case 0x1027f8u: goto label_1027f8;
        case 0x1027fcu: goto label_1027fc;
        case 0x102800u: goto label_102800;
        case 0x102804u: goto label_102804;
        case 0x102808u: goto label_102808;
        case 0x10280cu: goto label_10280c;
        case 0x102810u: goto label_102810;
        case 0x102814u: goto label_102814;
        case 0x102818u: goto label_102818;
        case 0x10281cu: goto label_10281c;
        case 0x102820u: goto label_102820;
        case 0x102824u: goto label_102824;
        case 0x102828u: goto label_102828;
        case 0x10282cu: goto label_10282c;
        case 0x102830u: goto label_102830;
        case 0x102834u: goto label_102834;
        case 0x102838u: goto label_102838;
        case 0x10283cu: goto label_10283c;
        case 0x102840u: goto label_102840;
        case 0x102844u: goto label_102844;
        case 0x102848u: goto label_102848;
        case 0x10284cu: goto label_10284c;
        case 0x102850u: goto label_102850;
        case 0x102854u: goto label_102854;
        case 0x102858u: goto label_102858;
        case 0x10285cu: goto label_10285c;
        case 0x102860u: goto label_102860;
        case 0x102864u: goto label_102864;
        case 0x102868u: goto label_102868;
        case 0x10286cu: goto label_10286c;
        case 0x102870u: goto label_102870;
        case 0x102874u: goto label_102874;
        case 0x102878u: goto label_102878;
        case 0x10287cu: goto label_10287c;
        case 0x102880u: goto label_102880;
        case 0x102884u: goto label_102884;
        case 0x102888u: goto label_102888;
        case 0x10288cu: goto label_10288c;
        case 0x102890u: goto label_102890;
        case 0x102894u: goto label_102894;
        case 0x102898u: goto label_102898;
        case 0x10289cu: goto label_10289c;
        case 0x1028a0u: goto label_1028a0;
        case 0x1028a4u: goto label_1028a4;
        case 0x1028a8u: goto label_1028a8;
        case 0x1028acu: goto label_1028ac;
        case 0x1028b0u: goto label_1028b0;
        case 0x1028b4u: goto label_1028b4;
        case 0x1028b8u: goto label_1028b8;
        case 0x1028bcu: goto label_1028bc;
        case 0x1028c0u: goto label_1028c0;
        case 0x1028c4u: goto label_1028c4;
        case 0x1028c8u: goto label_1028c8;
        case 0x1028ccu: goto label_1028cc;
        case 0x1028d0u: goto label_1028d0;
        case 0x1028d4u: goto label_1028d4;
        case 0x1028d8u: goto label_1028d8;
        case 0x1028dcu: goto label_1028dc;
        case 0x1028e0u: goto label_1028e0;
        case 0x1028e4u: goto label_1028e4;
        case 0x1028e8u: goto label_1028e8;
        case 0x1028ecu: goto label_1028ec;
        case 0x1028f0u: goto label_1028f0;
        case 0x1028f4u: goto label_1028f4;
        case 0x1028f8u: goto label_1028f8;
        case 0x1028fcu: goto label_1028fc;
        case 0x102900u: goto label_102900;
        case 0x102904u: goto label_102904;
        case 0x102908u: goto label_102908;
        case 0x10290cu: goto label_10290c;
        case 0x102910u: goto label_102910;
        case 0x102914u: goto label_102914;
        case 0x102918u: goto label_102918;
        case 0x10291cu: goto label_10291c;
        case 0x102920u: goto label_102920;
        case 0x102924u: goto label_102924;
        case 0x102928u: goto label_102928;
        case 0x10292cu: goto label_10292c;
        case 0x102930u: goto label_102930;
        case 0x102934u: goto label_102934;
        case 0x102938u: goto label_102938;
        case 0x10293cu: goto label_10293c;
        case 0x102940u: goto label_102940;
        case 0x102944u: goto label_102944;
        case 0x102948u: goto label_102948;
        case 0x10294cu: goto label_10294c;
        case 0x102950u: goto label_102950;
        case 0x102954u: goto label_102954;
        case 0x102958u: goto label_102958;
        case 0x10295cu: goto label_10295c;
        case 0x102960u: goto label_102960;
        case 0x102964u: goto label_102964;
        case 0x102968u: goto label_102968;
        case 0x10296cu: goto label_10296c;
        case 0x102970u: goto label_102970;
        case 0x102974u: goto label_102974;
        case 0x102978u: goto label_102978;
        case 0x10297cu: goto label_10297c;
        case 0x102980u: goto label_102980;
        case 0x102984u: goto label_102984;
        case 0x102988u: goto label_102988;
        case 0x10298cu: goto label_10298c;
        case 0x102990u: goto label_102990;
        case 0x102994u: goto label_102994;
        case 0x102998u: goto label_102998;
        case 0x10299cu: goto label_10299c;
        case 0x1029a0u: goto label_1029a0;
        case 0x1029a4u: goto label_1029a4;
        case 0x1029a8u: goto label_1029a8;
        case 0x1029acu: goto label_1029ac;
        case 0x1029b0u: goto label_1029b0;
        case 0x1029b4u: goto label_1029b4;
        case 0x1029b8u: goto label_1029b8;
        case 0x1029bcu: goto label_1029bc;
        case 0x1029c0u: goto label_1029c0;
        case 0x1029c4u: goto label_1029c4;
        case 0x1029c8u: goto label_1029c8;
        case 0x1029ccu: goto label_1029cc;
        case 0x1029d0u: goto label_1029d0;
        case 0x1029d4u: goto label_1029d4;
        case 0x1029d8u: goto label_1029d8;
        case 0x1029dcu: goto label_1029dc;
        case 0x1029e0u: goto label_1029e0;
        case 0x1029e4u: goto label_1029e4;
        default: break;
    }

    ctx->pc = 0x1027d0u;

label_1027d0:
    // 0x1027d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1027d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1027d4:
    // 0x1027d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1027d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1027d8:
    // 0x1027d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1027d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1027dc:
    // 0x1027dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1027e0:
    // 0x1027e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1027e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1027e4:
    // 0x1027e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1027e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1027e8:
    // 0x1027e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1027e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1027ec:
    // 0x1027ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1027ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1027f0:
    // 0x1027f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1027f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1027f4:
    // 0x1027f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1027f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1027f8:
    // 0x1027f8: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_1027fc:
    // 0x1027fc: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1027fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_102800:
    // 0x102800: 0x1482004b  bne         $a0, $v0, . + 4 + (0x4B << 2)
label_102804:
    if (ctx->pc == 0x102804u) {
        ctx->pc = 0x102804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102800u;
        // 0x102804: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102808u;
        goto label_102808;
    }
    ctx->pc = 0x102800u;
    {
        const bool branch_taken_0x102800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102800u;
        // 0x102804: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102800) {
            ctx->pc = 0x102930u;
            goto label_102930;
        }
    }
    ctx->pc = 0x102808u;
label_102808:
    // 0x102808: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x102808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_10280c:
    // 0x10280c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_102810:
    if (ctx->pc == 0x102810u) {
        ctx->pc = 0x102810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10280Cu;
        // 0x102810: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102814u;
        goto label_102814;
    }
    ctx->pc = 0x10280Cu;
    {
        const bool branch_taken_0x10280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10280c) {
            ctx->pc = 0x102810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10280Cu;
            // 0x102810: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028B0u;
            goto label_1028b0;
        }
    }
    ctx->pc = 0x102814u;
label_102814:
    // 0x102814: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x102814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_102818:
    // 0x102818: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x102818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10281c:
    // 0x10281c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_102820:
    if (ctx->pc == 0x102820u) {
        ctx->pc = 0x102820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10281Cu;
        // 0x102820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102824u;
        goto label_102824;
    }
    ctx->pc = 0x10281Cu;
    {
        const bool branch_taken_0x10281c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10281Cu;
        // 0x102820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10281c) {
            ctx->pc = 0x1028A0u;
            goto label_1028a0;
        }
    }
    ctx->pc = 0x102824u;
label_102824:
    // 0x102824: 0x0  nop
    ctx->pc = 0x102824u;
    // NOP
label_102828:
    // 0x102828: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x102828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_10282c:
    // 0x10282c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x10282cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_102830:
    // 0x102830: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_102834:
    // 0x102834: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102838:
    // 0x102838: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x102838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10283c:
    // 0x10283c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_102840:
    if (ctx->pc == 0x102840u) {
        ctx->pc = 0x102840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10283Cu;
        // 0x102840: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102844u;
        goto label_102844;
    }
    ctx->pc = 0x10283Cu;
    {
        const bool branch_taken_0x10283c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10283Cu;
        // 0x102840: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10283c) {
            ctx->pc = 0x102860u;
            goto label_102860;
        }
    }
    ctx->pc = 0x102844u;
label_102844:
    // 0x102844: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102848:
    // 0x102848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10284c:
    // 0x10284c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x10284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102850:
    // 0x102850: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102854:
    // 0x102854: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102858:
    // 0x102858: 0x60f809  jalr        $v1
label_10285c:
    if (ctx->pc == 0x10285Cu) {
        ctx->pc = 0x10285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102858u;
        // 0x10285c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102860u;
        goto label_102860;
    }
    ctx->pc = 0x102858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102860u);
        ctx->pc = 0x10285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102858u;
        // 0x10285c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102858u, 0x102860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102860u;
label_102860:
    // 0x102860: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_102864:
    // 0x102864: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102868:
    if (ctx->pc == 0x102868u) {
        ctx->pc = 0x102868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102864u;
        // 0x102868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10286Cu;
        goto label_10286c;
    }
    ctx->pc = 0x102864u;
    {
        const bool branch_taken_0x102864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102864u;
        // 0x102868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102864) {
            ctx->pc = 0x102884u;
            goto label_102884;
        }
    }
    ctx->pc = 0x10286Cu;
label_10286c:
    // 0x10286c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102870:
    // 0x102870: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102874:
    // 0x102874: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102878:
    // 0x102878: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10287c:
    // 0x10287c: 0x60f809  jalr        $v1
label_102880:
    if (ctx->pc == 0x102880u) {
        ctx->pc = 0x102880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10287Cu;
        // 0x102880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102884u;
        goto label_102884;
    }
    ctx->pc = 0x10287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102884u);
        ctx->pc = 0x102880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10287Cu;
        // 0x102880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10287Cu, 0x102884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102884u;
label_102884:
    // 0x102884: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x102884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_102888:
    // 0x102888: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x102888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_10288c:
    // 0x10288c: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x10288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_102890:
    // 0x102890: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x102890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_102894:
    // 0x102894: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x102894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_102898:
    // 0x102898: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_10289c:
    if (ctx->pc == 0x10289Cu) {
        ctx->pc = 0x10289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102898u;
        // 0x10289c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028A0u;
        goto label_1028a0;
    }
    ctx->pc = 0x102898u;
    {
        const bool branch_taken_0x102898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102898u;
        // 0x10289c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102898) {
            ctx->pc = 0x102828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102828;
        }
    }
    ctx->pc = 0x1028A0u;
label_1028a0:
    // 0x1028a0: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x1028a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_1028a4:
    // 0x1028a4: 0xc067f04  jal         func_19FC10
label_1028a8:
    if (ctx->pc == 0x1028A8u) {
        ctx->pc = 0x1028A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028A4u;
        // 0x1028a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028ACu;
        goto label_1028ac;
    }
    ctx->pc = 0x1028A4u;
    SET_GPR_U32(ctx, 31, 0x1028ACu);
    ctx->pc = 0x1028A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028A4u;
    // 0x1028a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1028A4u, 0x1028ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028ACu;
label_1028ac:
    // 0x1028ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1028acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1028b0:
    // 0x1028b0: 0xc06a26e  jal         func_1A89B8
label_1028b4:
    if (ctx->pc == 0x1028B4u) {
        ctx->pc = 0x1028B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028B0u;
        // 0x1028b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028B8u;
        goto label_1028b8;
    }
    ctx->pc = 0x1028B0u;
    SET_GPR_U32(ctx, 31, 0x1028B8u);
    ctx->pc = 0x1028B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028B0u;
    // 0x1028b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1028B0u, 0x1028B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028B8u;
label_1028b8:
    // 0x1028b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1028b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1028bc:
    // 0x1028bc: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1028bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_1028c0:
    // 0x1028c0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_1028c4:
    if (ctx->pc == 0x1028C4u) {
        ctx->pc = 0x1028C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028C0u;
        // 0x1028c4: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028C8u;
        goto label_1028c8;
    }
    ctx->pc = 0x1028C0u;
    {
        const bool branch_taken_0x1028c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028C0u;
        // 0x1028c4: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028c0) {
            ctx->pc = 0x1028CCu;
            goto label_1028cc;
        }
    }
    ctx->pc = 0x1028C8u;
label_1028c8:
    // 0x1028c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1028c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1028cc:
    // 0x1028cc: 0xc068086  jal         func_1A0218
label_1028d0:
    if (ctx->pc == 0x1028D0u) {
        ctx->pc = 0x1028D4u;
        goto label_1028d4;
    }
    ctx->pc = 0x1028CCu;
    SET_GPR_U32(ctx, 31, 0x1028D4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1028CCu, 0x1028D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028D4u;
label_1028d4:
    // 0x1028d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1028d8:
    if (ctx->pc == 0x1028D8u) {
        ctx->pc = 0x1028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028D4u;
        // 0x1028d8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028DCu;
        goto label_1028dc;
    }
    ctx->pc = 0x1028D4u;
    {
        const bool branch_taken_0x1028d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028D4u;
        // 0x1028d8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028d4) {
            ctx->pc = 0x1028F0u;
            goto label_1028f0;
        }
    }
    ctx->pc = 0x1028DCu;
label_1028dc:
    // 0x1028dc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1028dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1028e0:
    // 0x1028e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1028e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1028e4:
    // 0x1028e4: 0x24a51b70  addiu       $a1, $a1, 0x1B70
    ctx->pc = 0x1028e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
label_1028e8:
    // 0x1028e8: 0xc068186  jal         func_1A0618
label_1028ec:
    if (ctx->pc == 0x1028ECu) {
        ctx->pc = 0x1028ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028E8u;
        // 0x1028ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028F0u;
        goto label_1028f0;
    }
    ctx->pc = 0x1028E8u;
    SET_GPR_U32(ctx, 31, 0x1028F0u);
    ctx->pc = 0x1028ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028E8u;
    // 0x1028ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1028E8u, 0x1028F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028F0u;
label_1028f0:
    // 0x1028f0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1028f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1028f4:
    // 0x1028f4: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
label_1028f8:
    if (ctx->pc == 0x1028F8u) {
        ctx->pc = 0x1028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F4u;
        // 0x1028f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028FCu;
        goto label_1028fc;
    }
    ctx->pc = 0x1028F4u;
    {
        const bool branch_taken_0x1028f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F4u;
        // 0x1028f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f4) {
            ctx->pc = 0x1029C4u;
            goto label_1029c4;
        }
    }
    ctx->pc = 0x1028FCu;
label_1028fc:
    // 0x1028fc: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1028fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_102900:
    // 0x102900: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x102900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_102904:
    // 0x102904: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_102908:
    // 0x102908: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_10290c:
    // 0x10290c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10290cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_102910:
    // 0x102910: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x102910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_102914:
    // 0x102914: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x102914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_102918:
    // 0x102918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x102918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_10291c:
    // 0x10291c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10291cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_102920:
    // 0x102920: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_102924:
    if (ctx->pc == 0x102924u) {
        ctx->pc = 0x102924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102920u;
        // 0x102924: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102928u;
        goto label_102928;
    }
    ctx->pc = 0x102920u;
    {
        const bool branch_taken_0x102920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102920u;
        // 0x102924: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102920) {
            ctx->pc = 0x102900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102900;
        }
    }
    ctx->pc = 0x102928u;
label_102928:
    // 0x102928: 0x10000027  b           . + 4 + (0x27 << 2)
label_10292c:
    if (ctx->pc == 0x10292Cu) {
        ctx->pc = 0x10292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102928u;
        // 0x10292c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102930u;
        goto label_102930;
    }
    ctx->pc = 0x102928u;
    {
        const bool branch_taken_0x102928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102928u;
        // 0x10292c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102928) {
            ctx->pc = 0x1029C8u;
            goto label_1029c8;
        }
    }
    ctx->pc = 0x102930u;
label_102930:
    // 0x102930: 0xc06a26e  jal         func_1A89B8
label_102934:
    if (ctx->pc == 0x102934u) {
        ctx->pc = 0x102934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102930u;
        // 0x102934: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102938u;
        goto label_102938;
    }
    ctx->pc = 0x102930u;
    SET_GPR_U32(ctx, 31, 0x102938u);
    ctx->pc = 0x102934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102930u;
    // 0x102934: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102930u, 0x102938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102938u;
label_102938:
    // 0x102938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10293c:
    // 0x10293c: 0xc06a26e  jal         func_1A89B8
label_102940:
    if (ctx->pc == 0x102940u) {
        ctx->pc = 0x102940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10293Cu;
        // 0x102940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102944u;
        goto label_102944;
    }
    ctx->pc = 0x10293Cu;
    SET_GPR_U32(ctx, 31, 0x102944u);
    ctx->pc = 0x102940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10293Cu;
    // 0x102940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10293Cu, 0x102944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102944u;
label_102944:
    // 0x102944: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102948:
    // 0x102948: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_10294c:
    if (ctx->pc == 0x10294Cu) {
        ctx->pc = 0x10294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102948u;
        // 0x10294c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102950u;
        goto label_102950;
    }
    ctx->pc = 0x102948u;
    {
        const bool branch_taken_0x102948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102948u;
        // 0x10294c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102948) {
            ctx->pc = 0x102980u;
            goto label_102980;
        }
    }
    ctx->pc = 0x102950u;
label_102950:
    // 0x102950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102954:
    // 0x102954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_102958:
    // 0x102958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10295c:
    // 0x10295c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10295cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102960:
    // 0x102960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_102964:
    // 0x102964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102968:
    // 0x102968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10296c:
    // 0x10296c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10296cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_102970:
    // 0x102970: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_102974:
    // 0x102974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_102978:
    // 0x102978: 0x80409b6  j           func_1026D8
label_10297c:
    if (ctx->pc == 0x10297Cu) {
        ctx->pc = 0x10297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102978u;
        // 0x10297c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102980u;
        goto label_102980;
    }
    ctx->pc = 0x102978u;
    ctx->pc = 0x10297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102978u;
    // 0x10297c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026D8u;
    TankLoadDestroy__9ApcObjRscib_0x1026d8(rdram, ctx, runtime); return;
    ctx->pc = 0x102980u;
label_102980:
    // 0x102980: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_102984:
    if (ctx->pc == 0x102984u) {
        ctx->pc = 0x102984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102980u;
        // 0x102984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102988u;
        goto label_102988;
    }
    ctx->pc = 0x102980u;
    {
        const bool branch_taken_0x102980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102980) {
            ctx->pc = 0x102984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102980u;
            // 0x102984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029C8u;
            goto label_1029c8;
        }
    }
    ctx->pc = 0x102988u;
label_102988:
    // 0x102988: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x102988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_10298c:
    // 0x10298c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x10298cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_102990:
    // 0x102990: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102994:
    // 0x102994: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_102998:
    // 0x102998: 0xc04171a  jal         func_105C68
label_10299c:
    if (ctx->pc == 0x10299Cu) {
        ctx->pc = 0x10299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102998u;
        // 0x10299c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1029A0u;
        goto label_1029a0;
    }
    ctx->pc = 0x102998u;
    SET_GPR_U32(ctx, 31, 0x1029A0u);
    ctx->pc = 0x10299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102998u;
    // 0x10299c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x102998u, 0x1029A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029A0u;
label_1029a0:
    // 0x1029a0: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x1029a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_1029a4:
    // 0x1029a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1029a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1029a8:
    // 0x1029a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1029a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1029ac:
    // 0x1029ac: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
label_1029b0:
    if (ctx->pc == 0x1029B0u) {
        ctx->pc = 0x1029B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029ACu;
        // 0x1029b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1029B4u;
        goto label_1029b4;
    }
    ctx->pc = 0x1029ACu;
    {
        const bool branch_taken_0x1029ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1029ac) {
            ctx->pc = 0x1029B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1029ACu;
            // 0x1029b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029C8u;
            goto label_1029c8;
        }
    }
    ctx->pc = 0x1029B4u;
label_1029b4:
    // 0x1029b4: 0xc06a250  jal         func_1A8940
label_1029b8:
    if (ctx->pc == 0x1029B8u) {
        ctx->pc = 0x1029B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029B4u;
        // 0x1029b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1029BCu;
        goto label_1029bc;
    }
    ctx->pc = 0x1029B4u;
    SET_GPR_U32(ctx, 31, 0x1029BCu);
    ctx->pc = 0x1029B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1029B4u;
    // 0x1029b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1029B4u, 0x1029BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029BCu;
label_1029bc:
    // 0x1029bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1029bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1029c0:
    // 0x1029c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1029c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1029c4:
    // 0x1029c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1029c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1029c8:
    // 0x1029c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1029c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1029cc:
    // 0x1029cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1029ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1029d0:
    // 0x1029d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1029d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1029d4:
    // 0x1029d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1029d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1029d8:
    // 0x1029d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1029d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1029dc:
    // 0x1029dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1029dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1029e0:
    // 0x1029e0: 0x3e00008  jr          $ra
label_1029e4:
    if (ctx->pc == 0x1029E4u) {
        ctx->pc = 0x1029E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029E0u;
        // 0x1029e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1029E8u;
        goto label_fallthrough_0x1029e0;
    }
    ctx->pc = 0x1029E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1029E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029E0u;
        // 0x1029e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1029E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1029e0:
    ctx->pc = 0x1029E8u;
}
