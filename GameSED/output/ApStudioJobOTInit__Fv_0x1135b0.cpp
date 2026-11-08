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

// Function: ApStudioJobOTInit__Fv
// Address: 0x1135b0 - 0x113b30
void ApStudioJobOTInit__Fv_0x1135b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioJobOTInit__Fv_0x1135b0");
#endif

    switch (ctx->pc) {
        case 0x1135e0u: goto label_1135e0;
        case 0x113604u: goto label_113604;
        case 0x113628u: goto label_113628;
        case 0x113650u: goto label_113650;
        case 0x11367cu: goto label_11367c;
        case 0x1136b4u: goto label_1136b4;
        case 0x1136e0u: goto label_1136e0;
        case 0x1136f4u: goto label_1136f4;
        case 0x113710u: goto label_113710;
        case 0x11373cu: goto label_11373c;
        case 0x113774u: goto label_113774;
        case 0x1137a0u: goto label_1137a0;
        case 0x1137ccu: goto label_1137cc;
        case 0x1137ecu: goto label_1137ec;
        case 0x11380cu: goto label_11380c;
        case 0x11382cu: goto label_11382c;
        case 0x113840u: goto label_113840;
        case 0x11385cu: goto label_11385c;
        case 0x113888u: goto label_113888;
        case 0x1138b4u: goto label_1138b4;
        case 0x1138ecu: goto label_1138ec;
        case 0x113918u: goto label_113918;
        case 0x113954u: goto label_113954;
        case 0x113980u: goto label_113980;
        case 0x1139a0u: goto label_1139a0;
        case 0x1139c8u: goto label_1139c8;
        case 0x1139f4u: goto label_1139f4;
        case 0x113a10u: goto label_113a10;
        case 0x113a2cu: goto label_113a2c;
        case 0x113a58u: goto label_113a58;
        case 0x113a84u: goto label_113a84;
        case 0x113abcu: goto label_113abc;
        case 0x113ae8u: goto label_113ae8;
        case 0x113afcu: goto label_113afc;
        case 0x113b10u: goto label_113b10;
        default: break;
    }

    ctx->pc = 0x1135b0u;

    // 0x1135b0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1135b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1135b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1135b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1135b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1135bc: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1135bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1135c0: 0x24520050  addiu       $s2, $v0, 0x50
    ctx->pc = 0x1135c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1135c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1135c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1135c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1135c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1135cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1135ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1135d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1135d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1135d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1135d8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1135d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1135dc: 0x0  nop
    ctx->pc = 0x1135dcu;
    // NOP
label_1135e0:
    // 0x1135e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1135e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1135e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1135e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1135e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1135e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1135ec: 0x0  nop
    ctx->pc = 0x1135ecu;
    // NOP
    // 0x1135f0: 0x0  nop
    ctx->pc = 0x1135f0u;
    // NOP
    // 0x1135f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1135F4u;
    {
        const bool branch_taken_0x1135f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1135F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135F4u;
        // 0x1135f8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135f4) {
            ctx->pc = 0x1135E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1135e0;
        }
    }
    ctx->pc = 0x1135FCu;
    // 0x1135fc: 0xc066a70  jal         func_19A9C0
    ctx->pc = 0x1135FCu;
    SET_GPR_U32(ctx, 31, 0x113604u);
    ctx->pc = 0x113600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135FCu;
    // 0x113600: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9C0u, 0x1135FCu, 0x113604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113604u;
label_113604:
    // 0x113604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x113604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113608: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x113608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11360c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113610: 0x24130104  addiu       $s3, $zero, 0x104
    ctx->pc = 0x113610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x113614: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x113614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x113618: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x11361c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11361cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x113620: 0xc05343a  jal         func_14D0E8
    ctx->pc = 0x113620u;
    SET_GPR_U32(ctx, 31, 0x113628u);
    ctx->pc = 0x113624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113620u;
    // 0x113624: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E8u, 0x113620u, 0x113628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113628u;
label_113628:
    // 0x113628: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11362c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113630: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113630u;
    {
        const bool branch_taken_0x113630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113630u;
        // 0x113634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113630) {
            ctx->pc = 0x113650u;
            goto label_113650;
        }
    }
    ctx->pc = 0x113638u;
    // 0x113638: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x113638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11363c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11363cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113640: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x113640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x113644: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x113644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x113648: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x113648u;
    {
        const bool branch_taken_0x113648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113648u;
        // 0x11364c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113648) {
            ctx->pc = 0x113674u;
            goto label_113674;
        }
    }
    ctx->pc = 0x113650u;
label_113650:
    // 0x113650: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113654: 0x0  nop
    ctx->pc = 0x113654u;
    // NOP
    // 0x113658: 0x0  nop
    ctx->pc = 0x113658u;
    // NOP
    // 0x11365c: 0x0  nop
    ctx->pc = 0x11365cu;
    // NOP
    // 0x113660: 0x0  nop
    ctx->pc = 0x113660u;
    // NOP
    // 0x113664: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113664u;
    {
        const bool branch_taken_0x113664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113664) {
            ctx->pc = 0x113668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113664u;
            // 0x113668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113650;
        }
    }
    ctx->pc = 0x11366Cu;
    // 0x11366c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11366cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x113670: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_113674:
    // 0x113674: 0xc0619a2  jal         func_186688
    ctx->pc = 0x113674u;
    SET_GPR_U32(ctx, 31, 0x11367Cu);
    ctx->pc = 0x186688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186688u, 0x113674u, 0x11367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11367Cu;
label_11367c:
    // 0x11367c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x11367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x113680: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x113680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113688: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x11368c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x113690: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113690u;
    {
        const bool branch_taken_0x113690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113690u;
        // 0x113694: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113690) {
            ctx->pc = 0x1136B0u;
            goto label_1136b0;
        }
    }
    ctx->pc = 0x113698u;
    // 0x113698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11369c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11369cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1136a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1136a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1136a4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1136a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1136a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1136A8u;
    {
        const bool branch_taken_0x1136a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136A8u;
        // 0x1136ac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136a8) {
            ctx->pc = 0x1136D8u;
            goto label_1136d8;
        }
    }
    ctx->pc = 0x1136B0u;
label_1136b0:
    // 0x1136b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1136b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1136b4:
    // 0x1136b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1136b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1136b8: 0x0  nop
    ctx->pc = 0x1136b8u;
    // NOP
    // 0x1136bc: 0x0  nop
    ctx->pc = 0x1136bcu;
    // NOP
    // 0x1136c0: 0x0  nop
    ctx->pc = 0x1136c0u;
    // NOP
    // 0x1136c4: 0x0  nop
    ctx->pc = 0x1136c4u;
    // NOP
    // 0x1136c8: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1136C8u;
    {
        const bool branch_taken_0x1136c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1136c8) {
            ctx->pc = 0x1136CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1136C8u;
            // 0x1136cc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1136b4;
        }
    }
    ctx->pc = 0x1136D0u;
    // 0x1136d0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1136d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1136d4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1136d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1136d8:
    // 0x1136d8: 0xc066640  jal         func_199900
    ctx->pc = 0x1136D8u;
    SET_GPR_U32(ctx, 31, 0x1136E0u);
    ctx->pc = 0x1136DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136D8u;
    // 0x1136dc: 0x26500028  addiu       $s0, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199900u, 0x1136D8u, 0x1136E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136E0u;
label_1136e0:
    // 0x1136e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1136e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1136e4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x1136e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1136e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1136e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1136ec: 0xc055a50  jal         func_156940
    ctx->pc = 0x1136ECu;
    SET_GPR_U32(ctx, 31, 0x1136F4u);
    ctx->pc = 0x1136F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136ECu;
    // 0x1136f0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156940u, 0x1136ECu, 0x1136F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136F4u;
label_1136f4:
    // 0x1136f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1136f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1136f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1136fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1136FCu;
    {
        const bool branch_taken_0x1136fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136FCu;
        // 0x113700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136fc) {
            ctx->pc = 0x113710u;
            goto label_113710;
        }
    }
    ctx->pc = 0x113704u;
    // 0x113704: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x113708u;
    {
        const bool branch_taken_0x113708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113708u;
        // 0x11370c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113708) {
            ctx->pc = 0x113734u;
            goto label_113734;
        }
    }
    ctx->pc = 0x113710u;
label_113710:
    // 0x113710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113714: 0x0  nop
    ctx->pc = 0x113714u;
    // NOP
    // 0x113718: 0x0  nop
    ctx->pc = 0x113718u;
    // NOP
    // 0x11371c: 0x0  nop
    ctx->pc = 0x11371cu;
    // NOP
    // 0x113720: 0x0  nop
    ctx->pc = 0x113720u;
    // NOP
    // 0x113724: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113724u;
    {
        const bool branch_taken_0x113724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113724) {
            ctx->pc = 0x113728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113724u;
            // 0x113728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113710;
        }
    }
    ctx->pc = 0x11372Cu;
    // 0x11372c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11372cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x113730: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_113734:
    // 0x113734: 0xc062236  jal         func_1888D8
    ctx->pc = 0x113734u;
    SET_GPR_U32(ctx, 31, 0x11373Cu);
    ctx->pc = 0x1888D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888D8u, 0x113734u, 0x11373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11373Cu;
label_11373c:
    // 0x11373c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x11373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x113740: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x113740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113748: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x11374c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x113750: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113750u;
    {
        const bool branch_taken_0x113750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113750u;
        // 0x113754: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113750) {
            ctx->pc = 0x113770u;
            goto label_113770;
        }
    }
    ctx->pc = 0x113758u;
    // 0x113758: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11375c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11375cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x113760: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113764: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x113764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x113768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113768u;
    {
        const bool branch_taken_0x113768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113768u;
        // 0x11376c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113768) {
            ctx->pc = 0x113798u;
            goto label_113798;
        }
    }
    ctx->pc = 0x113770u;
label_113770:
    // 0x113770: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113774:
    // 0x113774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113778: 0x0  nop
    ctx->pc = 0x113778u;
    // NOP
    // 0x11377c: 0x0  nop
    ctx->pc = 0x11377cu;
    // NOP
    // 0x113780: 0x0  nop
    ctx->pc = 0x113780u;
    // NOP
    // 0x113784: 0x0  nop
    ctx->pc = 0x113784u;
    // NOP
    // 0x113788: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113788u;
    {
        const bool branch_taken_0x113788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113788) {
            ctx->pc = 0x11378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113788u;
            // 0x11378c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113774;
        }
    }
    ctx->pc = 0x113790u;
    // 0x113790: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x113790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x113794: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_113798:
    // 0x113798: 0xc04117a  jal         func_1045E8
    ctx->pc = 0x113798u;
    SET_GPR_U32(ctx, 31, 0x1137A0u);
    ctx->pc = 0x11379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113798u;
    // 0x11379c: 0x24100100  addiu       $s0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045E8u, 0x113798u, 0x1137A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137A0u;
label_1137a0:
    // 0x1137a0: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x1137a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1137a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1137a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1137a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1137a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1137ac: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x1137acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1137b0: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1137b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x1137b4: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1137b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1137b8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1137b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1137bc: 0x24130212  addiu       $s3, $zero, 0x212
    ctx->pc = 0x1137bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x1137c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1137c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1137c4: 0xc055a8a  jal         func_156A28
    ctx->pc = 0x1137C4u;
    SET_GPR_U32(ctx, 31, 0x1137CCu);
    ctx->pc = 0x1137C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137C4u;
    // 0x1137c8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A28u, 0x1137C4u, 0x1137CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137CCu;
label_1137cc:
    // 0x1137cc: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x1137ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1137d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1137d4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1137d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1137d8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1137d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x1137dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1137dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1137e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1137e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1137e4: 0xc055808  jal         func_156020
    ctx->pc = 0x1137E4u;
    SET_GPR_U32(ctx, 31, 0x1137ECu);
    ctx->pc = 0x1137E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137E4u;
    // 0x1137e8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156020u, 0x1137E4u, 0x1137ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137ECu;
label_1137ec:
    // 0x1137ec: 0x26430068  addiu       $v1, $s2, 0x68
    ctx->pc = 0x1137ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x1137f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1137f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1137f4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1137f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1137f8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1137f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x1137fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1137fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x113800: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x113800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x113804: 0xc053446  jal         func_14D118
    ctx->pc = 0x113804u;
    SET_GPR_U32(ctx, 31, 0x11380Cu);
    ctx->pc = 0x113808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113804u;
    // 0x113808: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D118u, 0x113804u, 0x11380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11380Cu;
label_11380c:
    // 0x11380c: 0x26430078  addiu       $v1, $s2, 0x78
    ctx->pc = 0x11380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x113810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113814: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x113814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113818: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x113818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x11381c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x11381cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x113820: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x113820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x113824: 0xc0619ce  jal         func_186738
    ctx->pc = 0x113824u;
    SET_GPR_U32(ctx, 31, 0x11382Cu);
    ctx->pc = 0x113828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113824u;
    // 0x113828: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186738u, 0x113824u, 0x11382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11382Cu;
label_11382c:
    // 0x11382c: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x11382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x113830: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x113830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113834: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113838: 0xc0654de  jal         func_195378
    ctx->pc = 0x113838u;
    SET_GPR_U32(ctx, 31, 0x113840u);
    ctx->pc = 0x11383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113838u;
    // 0x11383c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195378u, 0x113838u, 0x113840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113840u;
label_113840:
    // 0x113840: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x113840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113844: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x113844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113848: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x113848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x11384c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x11384cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113850: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x113850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x113854: 0xc065514  jal         func_195450
    ctx->pc = 0x113854u;
    SET_GPR_U32(ctx, 31, 0x11385Cu);
    ctx->pc = 0x113858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113854u;
    // 0x113858: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195450u, 0x113854u, 0x11385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11385Cu;
label_11385c:
    // 0x11385c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11385cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113860: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113864u;
    {
        const bool branch_taken_0x113864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113864u;
        // 0x113868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113864) {
            ctx->pc = 0x113888u;
            goto label_113888;
        }
    }
    ctx->pc = 0x11386Cu;
    // 0x11386c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113870: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113874: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x113874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x113878: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x113878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11387c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11387Cu;
    {
        const bool branch_taken_0x11387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11387Cu;
        // 0x113880: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11387c) {
            ctx->pc = 0x1138ACu;
            goto label_1138ac;
        }
    }
    ctx->pc = 0x113884u;
    // 0x113884: 0x0  nop
    ctx->pc = 0x113884u;
    // NOP
label_113888:
    // 0x113888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11388c: 0x0  nop
    ctx->pc = 0x11388cu;
    // NOP
    // 0x113890: 0x0  nop
    ctx->pc = 0x113890u;
    // NOP
    // 0x113894: 0x0  nop
    ctx->pc = 0x113894u;
    // NOP
    // 0x113898: 0x0  nop
    ctx->pc = 0x113898u;
    // NOP
    // 0x11389c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11389Cu;
    {
        const bool branch_taken_0x11389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11389c) {
            ctx->pc = 0x1138A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11389Cu;
            // 0x1138a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113888;
        }
    }
    ctx->pc = 0x1138A4u;
    // 0x1138a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1138a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1138a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1138a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1138ac:
    // 0x1138ac: 0xc05166e  jal         func_1459B8
    ctx->pc = 0x1138ACu;
    SET_GPR_U32(ctx, 31, 0x1138B4u);
    ctx->pc = 0x1459B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1459B8u, 0x1138ACu, 0x1138B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138B4u;
label_1138b4:
    // 0x1138b4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1138b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1138b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1138b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1138bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1138bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138c0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1138c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1138c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1138c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1138c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1138C8u;
    {
        const bool branch_taken_0x1138c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138C8u;
        // 0x1138cc: 0x32650300  andi        $a1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138c8) {
            ctx->pc = 0x1138E8u;
            goto label_1138e8;
        }
    }
    ctx->pc = 0x1138D0u;
    // 0x1138d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1138d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1138d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1138d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1138d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1138dc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1138dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1138e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1138E0u;
    {
        const bool branch_taken_0x1138e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138E0u;
        // 0x1138e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138e0) {
            ctx->pc = 0x113910u;
            goto label_113910;
        }
    }
    ctx->pc = 0x1138E8u;
label_1138e8:
    // 0x1138e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1138e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1138ec:
    // 0x1138ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1138ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1138f0: 0x0  nop
    ctx->pc = 0x1138f0u;
    // NOP
    // 0x1138f4: 0x0  nop
    ctx->pc = 0x1138f4u;
    // NOP
    // 0x1138f8: 0x0  nop
    ctx->pc = 0x1138f8u;
    // NOP
    // 0x1138fc: 0x0  nop
    ctx->pc = 0x1138fcu;
    // NOP
    // 0x113900: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113900u;
    {
        const bool branch_taken_0x113900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113900) {
            ctx->pc = 0x113904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113900u;
            // 0x113904: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1138ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1138ec;
        }
    }
    ctx->pc = 0x113908u;
    // 0x113908: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x113908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x11390c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11390cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_113910:
    // 0x113910: 0xc06555a  jal         func_195568
    ctx->pc = 0x113910u;
    SET_GPR_U32(ctx, 31, 0x113918u);
    ctx->pc = 0x195568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195568u, 0x113910u, 0x113918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113918u;
label_113918:
    // 0x113918: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x113918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x11391c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11391cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113924: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x113928: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x113928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11392c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11392Cu;
    {
        const bool branch_taken_0x11392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11392Cu;
        // 0x113930: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11392c) {
            ctx->pc = 0x113950u;
            goto label_113950;
        }
    }
    ctx->pc = 0x113934u;
    // 0x113934: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113938: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x11393c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113940: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x113940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x113944: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x113944u;
    {
        const bool branch_taken_0x113944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113944u;
        // 0x113948: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113944) {
            ctx->pc = 0x113978u;
            goto label_113978;
        }
    }
    ctx->pc = 0x11394Cu;
    // 0x11394c: 0x0  nop
    ctx->pc = 0x11394cu;
    // NOP
label_113950:
    // 0x113950: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113954:
    // 0x113954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113958: 0x0  nop
    ctx->pc = 0x113958u;
    // NOP
    // 0x11395c: 0x0  nop
    ctx->pc = 0x11395cu;
    // NOP
    // 0x113960: 0x0  nop
    ctx->pc = 0x113960u;
    // NOP
    // 0x113964: 0x0  nop
    ctx->pc = 0x113964u;
    // NOP
    // 0x113968: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113968u;
    {
        const bool branch_taken_0x113968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113968) {
            ctx->pc = 0x11396Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113968u;
            // 0x11396c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113954;
        }
    }
    ctx->pc = 0x113970u;
    // 0x113970: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x113970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x113974: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_113978:
    // 0x113978: 0xc05abfe  jal         func_16AFF8
    ctx->pc = 0x113978u;
    SET_GPR_U32(ctx, 31, 0x113980u);
    ctx->pc = 0x11397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113978u;
    // 0x11397c: 0x26500098  addiu       $s0, $s2, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AFF8u, 0x113978u, 0x113980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113980u;
label_113980:
    // 0x113980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x113980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113984: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x113984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x113988: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11398c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x11398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x113990: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113994: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x113994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x113998: 0xc055814  jal         func_156050
    ctx->pc = 0x113998u;
    SET_GPR_U32(ctx, 31, 0x1139A0u);
    ctx->pc = 0x11399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113998u;
    // 0x11399c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156050u, 0x113998u, 0x1139A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139A0u;
label_1139a0:
    // 0x1139a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1139a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1139a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1139a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1139A8u;
    {
        const bool branch_taken_0x1139a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1139ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139A8u;
        // 0x1139ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139a8) {
            ctx->pc = 0x1139C8u;
            goto label_1139c8;
        }
    }
    ctx->pc = 0x1139B0u;
    // 0x1139b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1139b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1139b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1139b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1139b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1139b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1139bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1139bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1139c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1139C0u;
    {
        const bool branch_taken_0x1139c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1139C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139C0u;
        // 0x1139c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139c0) {
            ctx->pc = 0x1139ECu;
            goto label_1139ec;
        }
    }
    ctx->pc = 0x1139C8u;
label_1139c8:
    // 0x1139c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1139c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1139cc: 0x0  nop
    ctx->pc = 0x1139ccu;
    // NOP
    // 0x1139d0: 0x0  nop
    ctx->pc = 0x1139d0u;
    // NOP
    // 0x1139d4: 0x0  nop
    ctx->pc = 0x1139d4u;
    // NOP
    // 0x1139d8: 0x0  nop
    ctx->pc = 0x1139d8u;
    // NOP
    // 0x1139dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1139DCu;
    {
        const bool branch_taken_0x1139dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1139dc) {
            ctx->pc = 0x1139E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1139DCu;
            // 0x1139e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1139C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1139c8;
        }
    }
    ctx->pc = 0x1139E4u;
    // 0x1139e4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1139e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1139e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1139e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1139ec:
    // 0x1139ec: 0xc05af84  jal         func_16BE10
    ctx->pc = 0x1139ECu;
    SET_GPR_U32(ctx, 31, 0x1139F4u);
    ctx->pc = 0x1139F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139ECu;
    // 0x1139f0: 0x265000c8  addiu       $s0, $s2, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE10u, 0x1139ECu, 0x1139F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139F4u;
label_1139f4:
    // 0x1139f4: 0x264300a0  addiu       $v1, $s2, 0xA0
    ctx->pc = 0x1139f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1139f8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1139f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1139fc: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x1139fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x113a00: 0x24130219  addiu       $s3, $zero, 0x219
    ctx->pc = 0x113a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    // 0x113a04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113a08: 0xc062d9e  jal         func_18B678
    ctx->pc = 0x113A08u;
    SET_GPR_U32(ctx, 31, 0x113A10u);
    ctx->pc = 0x113A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A08u;
    // 0x113a0c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B678u, 0x113A08u, 0x113A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A10u;
label_113a10:
    // 0x113a10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x113a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113a14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113a18: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x113a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x113a1c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113a20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x113a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x113a24: 0xc064db4  jal         func_1936D0
    ctx->pc = 0x113A24u;
    SET_GPR_U32(ctx, 31, 0x113A2Cu);
    ctx->pc = 0x113A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A24u;
    // 0x113a28: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1936D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1936D0u, 0x113A24u, 0x113A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A2Cu;
label_113a2c:
    // 0x113a2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113a2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x113a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113a34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113A34u;
    {
        const bool branch_taken_0x113a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A34u;
        // 0x113a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a34) {
            ctx->pc = 0x113A58u;
            goto label_113a58;
        }
    }
    ctx->pc = 0x113A3Cu;
    // 0x113a3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x113a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113a40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113a44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x113a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x113a48: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x113a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x113a4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113A4Cu;
    {
        const bool branch_taken_0x113a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A4Cu;
        // 0x113a50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a4c) {
            ctx->pc = 0x113A7Cu;
            goto label_113a7c;
        }
    }
    ctx->pc = 0x113A54u;
    // 0x113a54: 0x0  nop
    ctx->pc = 0x113a54u;
    // NOP
label_113a58:
    // 0x113a58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113a5c: 0x0  nop
    ctx->pc = 0x113a5cu;
    // NOP
    // 0x113a60: 0x0  nop
    ctx->pc = 0x113a60u;
    // NOP
    // 0x113a64: 0x0  nop
    ctx->pc = 0x113a64u;
    // NOP
    // 0x113a68: 0x0  nop
    ctx->pc = 0x113a68u;
    // NOP
    // 0x113a6c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113A6Cu;
    {
        const bool branch_taken_0x113a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113a6c) {
            ctx->pc = 0x113A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113A6Cu;
            // 0x113a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113a58;
        }
    }
    ctx->pc = 0x113A74u;
    // 0x113a74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x113a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x113a78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_113a7c:
    // 0x113a7c: 0xc063c0c  jal         func_18F030
    ctx->pc = 0x113A7Cu;
    SET_GPR_U32(ctx, 31, 0x113A84u);
    ctx->pc = 0x18F030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F030u, 0x113A7Cu, 0x113A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A84u;
label_113a84:
    // 0x113a84: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x113a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x113a88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x113a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113a8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a90: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x113a94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x113a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x113a98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113A98u;
    {
        const bool branch_taken_0x113a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A98u;
        // 0x113a9c: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a98) {
            ctx->pc = 0x113AB8u;
            goto label_113ab8;
        }
    }
    ctx->pc = 0x113AA0u;
    // 0x113aa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113aa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x113aa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113aac: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x113aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x113ab0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113AB0u;
    {
        const bool branch_taken_0x113ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AB0u;
        // 0x113ab4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ab0) {
            ctx->pc = 0x113AE0u;
            goto label_113ae0;
        }
    }
    ctx->pc = 0x113AB8u;
label_113ab8:
    // 0x113ab8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113ab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113abc:
    // 0x113abc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113ac0: 0x0  nop
    ctx->pc = 0x113ac0u;
    // NOP
    // 0x113ac4: 0x0  nop
    ctx->pc = 0x113ac4u;
    // NOP
    // 0x113ac8: 0x0  nop
    ctx->pc = 0x113ac8u;
    // NOP
    // 0x113acc: 0x0  nop
    ctx->pc = 0x113accu;
    // NOP
    // 0x113ad0: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113AD0u;
    {
        const bool branch_taken_0x113ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113ad0) {
            ctx->pc = 0x113AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113AD0u;
            // 0x113ad4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113abc;
        }
    }
    ctx->pc = 0x113AD8u;
    // 0x113ad8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x113ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x113adc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_113ae0:
    // 0x113ae0: 0xc066666  jal         func_199998
    ctx->pc = 0x113AE0u;
    SET_GPR_U32(ctx, 31, 0x113AE8u);
    ctx->pc = 0x199998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199998u, 0x113AE0u, 0x113AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AE8u;
label_113ae8:
    // 0x113ae8: 0x264300f0  addiu       $v1, $s2, 0xF0
    ctx->pc = 0x113ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x113aec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x113aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113af0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113af4: 0xc06222a  jal         func_1888A8
    ctx->pc = 0x113AF4u;
    SET_GPR_U32(ctx, 31, 0x113AFCu);
    ctx->pc = 0x113AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AF4u;
    // 0x113af8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888A8u, 0x113AF4u, 0x113AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AFCu;
label_113afc:
    // 0x113afc: 0x264300f8  addiu       $v1, $s2, 0xF8
    ctx->pc = 0x113afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
    // 0x113b00: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x113b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113b04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113b08: 0xc061984  jal         func_186610
    ctx->pc = 0x113B08u;
    SET_GPR_U32(ctx, 31, 0x113B10u);
    ctx->pc = 0x113B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B08u;
    // 0x113b0c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186610u, 0x113B08u, 0x113B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B10u;
label_113b10:
    // 0x113b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113b1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x113b1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113b20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x113b20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113b24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x113b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x113b28: 0x3e00008  jr          $ra
    ctx->pc = 0x113B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B28u;
        // 0x113b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B30u;
}
