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

// Function: Cmd_TANK_STRUCT_Entry__FP15BsSCDEntControl
// Address: 0x164778 - 0x164a64
void Cmd_TANK_STRUCT_Entry__FP15BsSCDEntControl_0x164778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_STRUCT_Entry__FP15BsSCDEntControl_0x164778");
#endif

    switch (ctx->pc) {
        case 0x1647bcu: goto label_1647bc;
        case 0x1647d8u: goto label_1647d8;
        case 0x1647e4u: goto label_1647e4;
        case 0x1647f0u: goto label_1647f0;
        case 0x1647fcu: goto label_1647fc;
        case 0x164818u: goto label_164818;
        case 0x164850u: goto label_164850;
        case 0x164864u: goto label_164864;
        case 0x164870u: goto label_164870;
        case 0x16487cu: goto label_16487c;
        case 0x164888u: goto label_164888;
        case 0x164894u: goto label_164894;
        case 0x1648a4u: goto label_1648a4;
        case 0x1648c0u: goto label_1648c0;
        case 0x1648d0u: goto label_1648d0;
        case 0x1648f8u: goto label_1648f8;
        case 0x164904u: goto label_164904;
        case 0x164938u: goto label_164938;
        case 0x1649a4u: goto label_1649a4;
        case 0x1649e4u: goto label_1649e4;
        case 0x164a04u: goto label_164a04;
        case 0x164a28u: goto label_164a28;
        case 0x164a38u: goto label_164a38;
        default: break;
    }

    ctx->pc = 0x164778u;

    // 0x164778: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x164778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16477c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x16477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x164780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164784: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x164784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x164788: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x164788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16478c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x16478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x164790: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x164790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164794: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x164794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x164798: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x164798u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16479c: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x16479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1647a0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1647a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1647a4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1647a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1647a8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1647a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1647ac: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1647acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1647b0: 0x8e160024  lw          $s6, 0x24($s0)
    ctx->pc = 0x1647b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1647b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1647B4u;
    SET_GPR_U32(ctx, 31, 0x1647BCu);
    ctx->pc = 0x1647B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647B4u;
    // 0x1647b8: 0x8ed30044  lw          $s3, 0x44($s6) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1647B4u, 0x1647BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647BCu;
label_1647bc:
    // 0x1647bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1647c0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1647c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1647c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1647c8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1647C8u;
    {
        const bool branch_taken_0x1647c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1647c8) {
            ctx->pc = 0x1647CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1647C8u;
            // 0x1647cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164808u;
            goto label_164808;
        }
    }
    ctx->pc = 0x1647D0u;
    // 0x1647d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1647D0u;
    SET_GPR_U32(ctx, 31, 0x1647D8u);
    ctx->pc = 0x1647D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647D0u;
    // 0x1647d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1647D0u, 0x1647D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647D8u;
label_1647d8:
    // 0x1647d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1647d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647dc: 0xc04106a  jal         func_1041A8
    ctx->pc = 0x1647DCu;
    SET_GPR_U32(ctx, 31, 0x1647E4u);
    ctx->pc = 0x1647E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647DCu;
    // 0x1647e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041A8u, 0x1647DCu, 0x1647E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647E4u;
label_1647e4:
    // 0x1647e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1647e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1647E8u;
    SET_GPR_U32(ctx, 31, 0x1647F0u);
    ctx->pc = 0x1647ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647E8u;
    // 0x1647ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1647E8u, 0x1647F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647F0u;
label_1647f0:
    // 0x1647f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1647f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647f4: 0xc040fea  jal         func_103FA8
    ctx->pc = 0x1647F4u;
    SET_GPR_U32(ctx, 31, 0x1647FCu);
    ctx->pc = 0x1647F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647F4u;
    // 0x1647f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FA8u, 0x1647F4u, 0x1647FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647FCu;
label_1647fc:
    // 0x1647fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1647fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164800: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x164800u;
    {
        const bool branch_taken_0x164800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164800u;
        // 0x164804: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164800) {
            ctx->pc = 0x16485Cu;
            goto label_16485c;
        }
    }
    ctx->pc = 0x164808u;
label_164808:
    // 0x164808: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x164808u;
    {
        const bool branch_taken_0x164808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164808) {
            ctx->pc = 0x16480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164808u;
            // 0x16480c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x164810u;
    // 0x164810: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x164810u;
    SET_GPR_U32(ctx, 31, 0x164818u);
    ctx->pc = 0x164814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164810u;
    // 0x164814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x164810u, 0x164818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164818u;
label_164818:
    // 0x164818: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x164818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16481c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164820: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x164820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x164824: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x164824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164828: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164828u;
    {
        const bool branch_taken_0x164828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164828u;
        // 0x16482c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164828) {
            ctx->pc = 0x164840u;
            goto label_164840;
        }
    }
    ctx->pc = 0x164830u;
    // 0x164830: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x164830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164834: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x164834u;
    {
        const bool branch_taken_0x164834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164834) {
            ctx->pc = 0x164838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164834u;
            // 0x164838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164854u;
            goto label_164854;
        }
    }
    ctx->pc = 0x16483Cu;
    // 0x16483c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16483cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_164840:
    // 0x164840: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x164840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x164844: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
    // 0x164848: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x164848u;
    SET_GPR_U32(ctx, 31, 0x164850u);
    ctx->pc = 0x16484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164848u;
    // 0x16484c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x164848u, 0x164850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164850u;
label_164850:
    // 0x164850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164854:
    // 0x164854: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x164854u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x164858: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x164858u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16485c:
    // 0x16485c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16485Cu;
    SET_GPR_U32(ctx, 31, 0x164864u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16485Cu, 0x164864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164864u;
label_164864:
    // 0x164864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164868: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164868u;
    SET_GPR_U32(ctx, 31, 0x164870u);
    ctx->pc = 0x16486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164868u;
    // 0x16486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164868u, 0x164870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164870u;
label_164870:
    // 0x164870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164874: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x164874u;
    SET_GPR_U32(ctx, 31, 0x16487Cu);
    ctx->pc = 0x164878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164874u;
    // 0x164878: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x164874u, 0x16487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16487Cu;
label_16487c:
    // 0x16487c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164880: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164880u;
    SET_GPR_U32(ctx, 31, 0x164888u);
    ctx->pc = 0x164884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164880u;
    // 0x164884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164880u, 0x164888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164888u;
label_164888:
    // 0x164888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16488c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16488Cu;
    SET_GPR_U32(ctx, 31, 0x164894u);
    ctx->pc = 0x164890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16488Cu;
    // 0x164890: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16488Cu, 0x164894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164894u;
label_164894:
    // 0x164894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164894u;
    {
        const bool branch_taken_0x164894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164894u;
        // 0x164898: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164894) {
            ctx->pc = 0x1648B0u;
            goto label_1648b0;
        }
    }
    ctx->pc = 0x16489Cu;
    // 0x16489c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16489Cu;
    SET_GPR_U32(ctx, 31, 0x1648A4u);
    ctx->pc = 0x1648A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16489Cu;
    // 0x1648a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16489Cu, 0x1648A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648A4u;
label_1648a4:
    // 0x1648a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1648A4u;
    {
        const bool branch_taken_0x1648a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A4u;
        // 0x1648a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a4) {
            ctx->pc = 0x1648B8u;
            goto label_1648b8;
        }
    }
    ctx->pc = 0x1648ACu;
    // 0x1648ac: 0x0  nop
    ctx->pc = 0x1648acu;
    // NOP
label_1648b0:
    // 0x1648b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1648b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1648b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1648b8:
    // 0x1648b8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1648B8u;
    SET_GPR_U32(ctx, 31, 0x1648C0u);
    ctx->pc = 0x1648BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648B8u;
    // 0x1648bc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1648B8u, 0x1648C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648C0u;
label_1648c0:
    // 0x1648c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1648C0u;
    {
        const bool branch_taken_0x1648c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648C0u;
        // 0x1648c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648c0) {
            ctx->pc = 0x1648D8u;
            goto label_1648d8;
        }
    }
    ctx->pc = 0x1648C8u;
    // 0x1648c8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x1648C8u;
    SET_GPR_U32(ctx, 31, 0x1648D0u);
    ctx->pc = 0x1648CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648C8u;
    // 0x1648cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x1648C8u, 0x1648D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648D0u;
label_1648d0:
    // 0x1648d0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1648D0u;
    {
        const bool branch_taken_0x1648d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648D0u;
        // 0x1648d4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648d0) {
            ctx->pc = 0x164A04u;
            goto label_164a04;
        }
    }
    ctx->pc = 0x1648D8u;
label_1648d8:
    // 0x1648d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1648d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648dc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1648DCu;
    {
        const bool branch_taken_0x1648dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648DCu;
        // 0x1648e0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648dc) {
            ctx->pc = 0x164A04u;
            goto label_164a04;
        }
    }
    ctx->pc = 0x1648E4u;
    // 0x1648e4: 0x0  nop
    ctx->pc = 0x1648e4u;
    // NOP
label_1648e8:
    // 0x1648e8: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1648E8u;
    {
        const bool branch_taken_0x1648e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1648ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648E8u;
        // 0x1648ec: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648e8) {
            ctx->pc = 0x164A08u;
            goto label_164a08;
        }
    }
    ctx->pc = 0x1648F0u;
    // 0x1648f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1648F0u;
    SET_GPR_U32(ctx, 31, 0x1648F8u);
    ctx->pc = 0x1648F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648F0u;
    // 0x1648f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1648F0u, 0x1648F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648F8u;
label_1648f8:
    // 0x1648f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1648f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1648FCu;
    SET_GPR_U32(ctx, 31, 0x164904u);
    ctx->pc = 0x164900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648FCu;
    // 0x164900: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1648FCu, 0x164904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164904u;
label_164904:
    // 0x164904: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x164904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16490c: 0x56420016  bnel        $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16490Cu;
    {
        const bool branch_taken_0x16490c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16490c) {
            ctx->pc = 0x164910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16490Cu;
            // 0x164910: 0x8e630038  lw          $v1, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164968u;
            goto label_164968;
        }
    }
    ctx->pc = 0x164914u;
    // 0x164914: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x164918: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x164918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16491c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x16491cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164920: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x164920u;
    {
        const bool branch_taken_0x164920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164920u;
        // 0x164924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164920) {
            ctx->pc = 0x16495Cu;
            goto label_16495c;
        }
    }
    ctx->pc = 0x164928u;
    // 0x164928: 0x8e670038  lw          $a3, 0x38($s3)
    ctx->pc = 0x164928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16492c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x16492cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164930: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x164930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164934: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_164938:
    // 0x164938: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x164938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x16493c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x16493cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x164940: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x164940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x164944: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x164944u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x164948: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164948u;
    {
        const bool branch_taken_0x164948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x16494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164948u;
        // 0x16494c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164948) {
            ctx->pc = 0x164960u;
            goto label_164960;
        }
    }
    ctx->pc = 0x164950u;
    // 0x164950: 0x0  nop
    ctx->pc = 0x164950u;
    // NOP
    // 0x164954: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x164954u;
    {
        const bool branch_taken_0x164954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x164954) {
            ctx->pc = 0x164958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164954u;
            // 0x164958: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164938;
        }
    }
    ctx->pc = 0x16495Cu;
label_16495c:
    // 0x16495c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16495cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164960:
    // 0x164960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164960u;
    {
        const bool branch_taken_0x164960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164960u;
        // 0x164964: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164960) {
            ctx->pc = 0x164970u;
            goto label_164970;
        }
    }
    ctx->pc = 0x164968u;
label_164968:
    // 0x164968: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x164968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x16496c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x16496cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_164970:
    // 0x164970: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164970u;
    {
        const bool branch_taken_0x164970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164970u;
        // 0x164974: 0x121027  nor         $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164970) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164978u;
    // 0x164978: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x164978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16497c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16497Cu;
    {
        const bool branch_taken_0x16497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16497Cu;
        // 0x164980: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16497c) {
            ctx->pc = 0x1649A8u;
            goto label_1649a8;
        }
    }
    ctx->pc = 0x164984u;
    // 0x164984: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x164984u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
label_164988:
    // 0x164988: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x164988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16498c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164990: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x164990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
    // 0x164994: 0x2a2200a  movz        $a0, $s5, $v0
    ctx->pc = 0x164994u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
    // 0x164998: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x164998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x16499c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16499Cu;
    SET_GPR_U32(ctx, 31, 0x1649A4u);
    ctx->pc = 0x1649A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16499Cu;
    // 0x1649a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16499Cu, 0x1649A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649A4u;
label_1649a4:
    // 0x1649a4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1649a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1649a8:
    // 0x1649a8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1649ac: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1649b0: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1649b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1649b4: 0x8c45038c  lw          $a1, 0x38C($v0)
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x1649b8: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1649bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1649c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1649c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649c8: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1649c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x1649cc: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x1649ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1649d0: 0xafa8005c  sw          $t0, 0x5C($sp)
    ctx->pc = 0x1649d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 8));
    // 0x1649d4: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x1649d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x1649d8: 0xafbd0058  sw          $sp, 0x58($sp)
    ctx->pc = 0x1649d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 29));
    // 0x1649dc: 0xc060e24  jal         func_183890
    ctx->pc = 0x1649DCu;
    SET_GPR_U32(ctx, 31, 0x1649E4u);
    ctx->pc = 0x1649E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649DCu;
    // 0x1649e0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183890u, 0x1649DCu, 0x1649E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649E4u;
label_1649e4:
    // 0x1649e4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1649e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1649e8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1649ec: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x1649ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
    // 0x1649f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649f4: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x1649f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1649f8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1649f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1649fc: 0xc069626  jal         func_1A5898
    ctx->pc = 0x1649FCu;
    SET_GPR_U32(ctx, 31, 0x164A04u);
    ctx->pc = 0x164A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649FCu;
    // 0x164a00: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x1649FCu, 0x164A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A04u;
label_164a04:
    // 0x164a04: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x164a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164a08:
    // 0x164a08: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x164a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a0c: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x164a10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x164a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a14: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x164a14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164a18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x164a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a1c: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x164a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x164a20: 0xc058ff6  jal         func_163FD8
    ctx->pc = 0x164A20u;
    SET_GPR_U32(ctx, 31, 0x164A28u);
    ctx->pc = 0x164A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A20u;
    // 0x164a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FD8u, 0x164A20u, 0x164A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A28u;
label_164a28:
    // 0x164a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x164a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a30: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x164A30u;
    SET_GPR_U32(ctx, 31, 0x164A38u);
    ctx->pc = 0x164A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A30u;
    // 0x164a34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x164A30u, 0x164A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A38u;
label_164a38:
    // 0x164a38: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x164a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164a3c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x164a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x164a40: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x164a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164a44: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x164a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x164a48: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x164a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x164a4c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x164a4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x164a50: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x164a50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x164a54: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x164a54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x164a58: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x164a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x164a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x164A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A5Cu;
        // 0x164a60: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164A64u;
}
