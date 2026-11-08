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

// Function: Cmd_PANEL_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10a610 - 0x10aac8
void Cmd_PANEL_MAKE_Entry__FP15BsSCDEntControl_0x10a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_MAKE_Entry__FP15BsSCDEntControl_0x10a610");
#endif

    switch (ctx->pc) {
        case 0x10a650u: goto label_10a650;
        case 0x10a660u: goto label_10a660;
        case 0x10a66cu: goto label_10a66c;
        case 0x10a678u: goto label_10a678;
        case 0x10a688u: goto label_10a688;
        case 0x10a690u: goto label_10a690;
        case 0x10a6b4u: goto label_10a6b4;
        case 0x10a6c0u: goto label_10a6c0;
        case 0x10a728u: goto label_10a728;
        case 0x10a730u: goto label_10a730;
        case 0x10a7b8u: goto label_10a7b8;
        case 0x10a7c0u: goto label_10a7c0;
        case 0x10a7dcu: goto label_10a7dc;
        case 0x10a800u: goto label_10a800;
        case 0x10a808u: goto label_10a808;
        case 0x10a8f8u: goto label_10a8f8;
        case 0x10a904u: goto label_10a904;
        case 0x10a920u: goto label_10a920;
        case 0x10a92cu: goto label_10a92c;
        case 0x10a938u: goto label_10a938;
        case 0x10a954u: goto label_10a954;
        case 0x10aa98u: goto label_10aa98;
        default: break;
    }

    ctx->pc = 0x10a610u;

    // 0x10a610: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10a614: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x10a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x10a618: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x10a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x10a61c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10a620: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x10a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x10a624: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x10a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x10a628: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10a628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a62c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x10a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x10a630: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x10a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x10a634: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x10a634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a638: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x10a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x10a63c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x10a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10a640: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x10a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x10a644: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x10a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x10a648: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A648u;
    SET_GPR_U32(ctx, 31, 0x10A650u);
    ctx->pc = 0x10A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A648u;
    // 0x10a64c: 0x8c5e0044  lw          $fp, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A648u, 0x10A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A650u;
label_10a650:
    // 0x10a650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a654: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x10a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x10a658: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A658u;
    SET_GPR_U32(ctx, 31, 0x10A660u);
    ctx->pc = 0x10A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A658u;
    // 0x10a65c: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A658u, 0x10A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A660u;
label_10a660:
    // 0x10a660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a664: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A664u;
    SET_GPR_U32(ctx, 31, 0x10A66Cu);
    ctx->pc = 0x10A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A664u;
    // 0x10a668: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A664u, 0x10A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A66Cu;
label_10a66c:
    // 0x10a66c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a670: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A670u;
    SET_GPR_U32(ctx, 31, 0x10A678u);
    ctx->pc = 0x10A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A670u;
    // 0x10a674: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A670u, 0x10A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A678u;
label_10a678:
    // 0x10a678: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x10a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10a67c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10a680: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10A680u;
    SET_GPR_U32(ctx, 31, 0x10A688u);
    ctx->pc = 0x10A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A680u;
    // 0x10a684: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10A680u, 0x10A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A688u;
label_10a688:
    // 0x10a688: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10A688u;
    SET_GPR_U32(ctx, 31, 0x10A690u);
    ctx->pc = 0x10A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A688u;
    // 0x10a68c: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10A688u, 0x10A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A690u;
label_10a690:
    // 0x10a690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a698: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10a69c: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x10a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x10a6a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10a6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6ac: 0xc063114  jal         func_18C450
    ctx->pc = 0x10A6ACu;
    SET_GPR_U32(ctx, 31, 0x10A6B4u);
    ctx->pc = 0x10A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6ACu;
    // 0x10a6b0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x10A6ACu, 0x10A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6B4u;
label_10a6b4:
    // 0x10a6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6b8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10A6B8u;
    SET_GPR_U32(ctx, 31, 0x10A6C0u);
    ctx->pc = 0x10A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6B8u;
    // 0x10a6bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10A6B8u, 0x10A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6C0u;
label_10a6c0:
    // 0x10a6c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a6c4: 0x12420032  beq         $s2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10A6C4u;
    {
        const bool branch_taken_0x10a6c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C4u;
        // 0x10a6c8: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6c4) {
            ctx->pc = 0x10A790u;
            goto label_10a790;
        }
    }
    ctx->pc = 0x10A6CCu;
    // 0x10a6cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A6CCu;
    {
        const bool branch_taken_0x10a6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6CCu;
        // 0x10a6d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6cc) {
            ctx->pc = 0x10A6E8u;
            goto label_10a6e8;
        }
    }
    ctx->pc = 0x10A6D4u;
    // 0x10a6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6d8: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A6D8u;
    {
        const bool branch_taken_0x10a6d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6D8u;
        // 0x10a6dc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6d8) {
            ctx->pc = 0x10A700u;
            goto label_10a700;
        }
    }
    ctx->pc = 0x10A6E0u;
    // 0x10a6e0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x10A6E0u;
    {
        const bool branch_taken_0x10a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6e0) {
            ctx->pc = 0x10A868u;
            goto label_10a868;
        }
    }
    ctx->pc = 0x10A6E8u;
label_10a6e8:
    // 0x10a6e8: 0x12420039  beq         $s2, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x10A6E8u;
    {
        const bool branch_taken_0x10a6e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E8u;
        // 0x10a6ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e8) {
            ctx->pc = 0x10A7D0u;
            goto label_10a7d0;
        }
    }
    ctx->pc = 0x10A6F0u;
    // 0x10a6f0: 0x1242003d  beq         $s2, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x10A6F0u;
    {
        const bool branch_taken_0x10a6f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6F0u;
        // 0x10a6f4: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6f0) {
            ctx->pc = 0x10A7E8u;
            goto label_10a7e8;
        }
    }
    ctx->pc = 0x10A6F8u;
    // 0x10a6f8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x10A6F8u;
    {
        const bool branch_taken_0x10a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6f8) {
            ctx->pc = 0x10A868u;
            goto label_10a868;
        }
    }
    ctx->pc = 0x10A700u;
label_10a700:
    // 0x10a700: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10a704: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x10a704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x10a708: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x10a708u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x10a70c: 0x24170011  addiu       $s7, $zero, 0x11
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x10a710: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a714: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x10a714u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    // 0x10a718: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a71c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x10a71cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a720: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A720u;
    SET_GPR_U32(ctx, 31, 0x10A728u);
    ctx->pc = 0x10A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A720u;
    // 0x10a724: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A720u, 0x10A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A728u;
label_10a728:
    // 0x10a728: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A728u;
    SET_GPR_U32(ctx, 31, 0x10A730u);
    ctx->pc = 0x10A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A728u;
    // 0x10a72c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A728u, 0x10A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A730u;
label_10a730:
    // 0x10a730: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a734: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x10a734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10a738: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x10a738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10a73c: 0x24660100  addiu       $a2, $v1, 0x100
    ctx->pc = 0x10a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x10a740: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x10a740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10a744: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x10a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x10a748: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x10a748u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10a74c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x10a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x10a750: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x10a750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10a754: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x10a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x10a758: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x10a758u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10a75c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x10a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x10a760: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x10a760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10a764: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x10a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x10a768: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x10a768u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x10a76c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x10a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x10a770: 0xdcc20030  ld          $v0, 0x30($a2)
    ctx->pc = 0x10a770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x10a774: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x10a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x10a778: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x10a778u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x10a77c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x10a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x10a780: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x10a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x10a784: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10A784u;
    {
        const bool branch_taken_0x10a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A784u;
        // 0x10a788: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a784) {
            ctx->pc = 0x10A85Cu;
            goto label_10a85c;
        }
    }
    ctx->pc = 0x10A78Cu;
    // 0x10a78c: 0x0  nop
    ctx->pc = 0x10a78cu;
    // NOP
label_10a790:
    // 0x10a790: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10a794: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x10a794u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x10a798: 0x36310003  ori         $s1, $s1, 0x3
    ctx->pc = 0x10a798u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3);
    // 0x10a79c: 0x24170011  addiu       $s7, $zero, 0x11
    ctx->pc = 0x10a79cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x10a7a0: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x10a7a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a7a4: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x10a7a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    // 0x10a7a8: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a7ac: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x10a7acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a7b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A7B0u;
    SET_GPR_U32(ctx, 31, 0x10A7B8u);
    ctx->pc = 0x10A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7B0u;
    // 0x10a7b4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A7B0u, 0x10A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7B8u;
label_10a7b8:
    // 0x10a7b8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A7B8u;
    SET_GPR_U32(ctx, 31, 0x10A7C0u);
    ctx->pc = 0x10A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7B8u;
    // 0x10a7bc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A7B8u, 0x10A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7C0u;
label_10a7c0:
    // 0x10a7c0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x10a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a7c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x10a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10a7c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10A7C8u;
    {
        const bool branch_taken_0x10a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7C8u;
        // 0x10a7cc: 0x24660100  addiu       $a2, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7c8) {
            ctx->pc = 0x10A814u;
            goto label_10a814;
        }
    }
    ctx->pc = 0x10A7D0u;
label_10a7d0:
    // 0x10a7d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7d4: 0xc04292e  jal         func_10A4B8
    ctx->pc = 0x10A7D4u;
    SET_GPR_U32(ctx, 31, 0x10A7DCu);
    ctx->pc = 0x10A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7D4u;
    // 0x10a7d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4B8u, 0x10A7D4u, 0x10A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7DCu;
label_10a7dc:
    // 0x10a7dc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x10A7DCu;
    {
        const bool branch_taken_0x10a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7DCu;
        // 0x10a7e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7dc) {
            ctx->pc = 0x10A8E0u;
            goto label_10a8e0;
        }
    }
    ctx->pc = 0x10A7E4u;
    // 0x10a7e4: 0x0  nop
    ctx->pc = 0x10a7e4u;
    // NOP
label_10a7e8:
    // 0x10a7e8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10a7ec: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x10a7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x10a7f0: 0x36310008  ori         $s1, $s1, 0x8
    ctx->pc = 0x10a7f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x10a7f4: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a7f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A7F8u;
    SET_GPR_U32(ctx, 31, 0x10A800u);
    ctx->pc = 0x10A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7F8u;
    // 0x10a7fc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A7F8u, 0x10A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A800u;
label_10a800:
    // 0x10a800: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A800u;
    SET_GPR_U32(ctx, 31, 0x10A808u);
    ctx->pc = 0x10A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A800u;
    // 0x10a804: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A800u, 0x10A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A808u;
label_10a808:
    // 0x10a808: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a80c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x10a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10a810: 0x24660290  addiu       $a2, $v1, 0x290
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
label_10a814:
    // 0x10a814: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x10a814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10a818: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x10a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x10a81c: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x10a81cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10a820: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x10a820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x10a824: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x10a824u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10a828: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x10a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x10a82c: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x10a82cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10a830: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x10a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x10a834: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x10a834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10a838: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x10a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x10a83c: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x10a83cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x10a840: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x10a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x10a844: 0xdcc20030  ld          $v0, 0x30($a2)
    ctx->pc = 0x10a844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x10a848: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x10a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x10a84c: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x10a84cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x10a850: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x10a850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x10a854: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x10a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x10a858: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x10a858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_10a85c:
    // 0x10a85c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x10a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x10a860: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10A860u;
    {
        const bool branch_taken_0x10a860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A860u;
        // 0x10a864: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a860) {
            ctx->pc = 0x10A8E0u;
            goto label_10a8e0;
        }
    }
    ctx->pc = 0x10A868u;
label_10a868:
    // 0x10a868: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x10a868u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a86c: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x10a86cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a870: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x10a870u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    // 0x10a874: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x10a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x10a878: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x10a878u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x10a87c: 0xdc4c0038  ld          $t4, 0x38($v0)
    ctx->pc = 0x10a87cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10a880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10a884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10a884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10a888: 0xdc4a0000  ld          $t2, 0x0($v0)
    ctx->pc = 0x10a888u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a88c: 0x17583c  dsll32      $t3, $s7, 0
    ctx->pc = 0x10a88cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a890: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x10a890u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x10a894: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x10a894u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10a898: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a89c: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x10a89cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10a8a0: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x10a8a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10a8a4: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x10a8a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10a8a8: 0xdc470028  ld          $a3, 0x28($v0)
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a8ac: 0xdc480030  ld          $t0, 0x30($v0)
    ctx->pc = 0x10a8acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10a8b0: 0xfe6a0000  sd          $t2, 0x0($s3)
    ctx->pc = 0x10a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 10));
    // 0x10a8b4: 0xfe690008  sd          $t1, 0x8($s3)
    ctx->pc = 0x10a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 9));
    // 0x10a8b8: 0xfe640010  sd          $a0, 0x10($s3)
    ctx->pc = 0x10a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 4));
    // 0x10a8bc: 0xfe650018  sd          $a1, 0x18($s3)
    ctx->pc = 0x10a8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 5));
    // 0x10a8c0: 0xfe660020  sd          $a2, 0x20($s3)
    ctx->pc = 0x10a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 6));
    // 0x10a8c4: 0xfe670028  sd          $a3, 0x28($s3)
    ctx->pc = 0x10a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 7));
    // 0x10a8c8: 0xfe680030  sd          $t0, 0x30($s3)
    ctx->pc = 0x10a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 8));
    // 0x10a8cc: 0xfe6c0038  sd          $t4, 0x38($s3)
    ctx->pc = 0x10a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 12));
    // 0x10a8d0: 0xae6b0048  sw          $t3, 0x48($s3)
    ctx->pc = 0x10a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 11));
    // 0x10a8d4: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x10a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x10a8d8: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x10a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x10a8dc: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x10a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_10a8e0:
    // 0x10a8e0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10a8e4: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x10a8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10a8e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A8E8u;
    {
        const bool branch_taken_0x10a8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a8e8) {
            ctx->pc = 0x10A8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A8E8u;
            // 0x10a8ec: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A90Cu;
            goto label_10a90c;
        }
    }
    ctx->pc = 0x10A8F0u;
    // 0x10a8f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A8F0u;
    SET_GPR_U32(ctx, 31, 0x10A8F8u);
    ctx->pc = 0x10A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8F0u;
    // 0x10a8f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A8F0u, 0x10A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8F8u;
label_10a8f8:
    // 0x10a8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A8FCu;
    SET_GPR_U32(ctx, 31, 0x10A904u);
    ctx->pc = 0x10A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8FCu;
    // 0x10a900: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A8FCu, 0x10A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A904u;
label_10a904:
    // 0x10a904: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x10a904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x10a908: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_10a90c:
    // 0x10a90c: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x10a90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x10a910: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A910u;
    {
        const bool branch_taken_0x10a910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A910u;
        // 0x10a914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a910) {
            ctx->pc = 0x10A948u;
            goto label_10a948;
        }
    }
    ctx->pc = 0x10A918u;
    // 0x10a918: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A918u;
    SET_GPR_U32(ctx, 31, 0x10A920u);
    ctx->pc = 0x10A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A918u;
    // 0x10a91c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A918u, 0x10A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A920u;
label_10a920:
    // 0x10a920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a924: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A924u;
    SET_GPR_U32(ctx, 31, 0x10A92Cu);
    ctx->pc = 0x10A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A924u;
    // 0x10a928: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A924u, 0x10A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A92Cu;
label_10a92c:
    // 0x10a92c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a930: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A930u;
    SET_GPR_U32(ctx, 31, 0x10A938u);
    ctx->pc = 0x10A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A930u;
    // 0x10a934: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A930u, 0x10A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A938u;
label_10a938:
    // 0x10a938: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x10a938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10a93c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a940: 0xa6630008  sh          $v1, 0x8($s3)
    ctx->pc = 0x10a940u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x10a944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a948:
    // 0x10a948: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10a948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a94c: 0xc0631a2  jal         func_18C688
    ctx->pc = 0x10A94Cu;
    SET_GPR_U32(ctx, 31, 0x10A954u);
    ctx->pc = 0x10A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A94Cu;
    // 0x10a950: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C688u, 0x10A94Cu, 0x10A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A954u;
label_10a954:
    // 0x10a954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a958: 0x16c3004c  bne         $s6, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x10A958u;
    {
        const bool branch_taken_0x10a958 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x10A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A958u;
        // 0x10a95c: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a958) {
            ctx->pc = 0x10AA8Cu;
            goto label_10aa8c;
        }
    }
    ctx->pc = 0x10A960u;
    // 0x10a960: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x10a960u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x10a964: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x10a964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a968: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10a968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10a96c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x10a96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10a970: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10a970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10a974: 0x26a70150  addiu       $a3, $s5, 0x150
    ctx->pc = 0x10a974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x10a978: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10a978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a97c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a980: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x10a980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10a984: 0xc7838038  lwc1        $f3, -0x7FC8($gp)
    ctx->pc = 0x10a984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10a988: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x10a988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10a98c: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10a98cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10a990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10a990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10a994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10a998: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x10a998u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x10a99c: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x10a99cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10a9a0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x10a9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10a9a4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10a9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10a9a8: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x10a9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10a9ac: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10a9acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x10a9b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a9b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10a9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10a9b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10a9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10a9bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10a9bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10a9c0: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10a9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a9c4: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x10a9c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10a9c8: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x10a9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x10a9cc: 0x0  nop
    ctx->pc = 0x10a9ccu;
    // NOP
    // 0x10a9d0: 0x0  nop
    ctx->pc = 0x10a9d0u;
    // NOP
    // 0x10a9d4: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x10a9d4u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[5]); }
    // 0x10a9d8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10a9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10a9dc: 0x0  nop
    ctx->pc = 0x10a9dcu;
    // NOP
    // 0x10a9e0: 0x0  nop
    ctx->pc = 0x10a9e0u;
    // NOP
    // 0x10a9e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10a9e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a9e8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x10a9e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x10a9ec: 0xe4e40068  swc1        $f4, 0x68($a3)
    ctx->pc = 0x10a9ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x10a9f0: 0xe4e50060  swc1        $f5, 0x60($a3)
    ctx->pc = 0x10a9f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10a9f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10a9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10a9f8: 0xe4e1006c  swc1        $f1, 0x6C($a3)
    ctx->pc = 0x10a9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x10a9fc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x10a9fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x10aa00: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10aa04: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x10aa04u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x10aa08: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x10aa08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x10aa0c: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x10aa0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x10aa10: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x10aa10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10aa14: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x10aa14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10aa18: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x10aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10aa1c: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x10aa1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10aa20: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10aa20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10aa24: 0xe4e20020  swc1        $f2, 0x20($a3)
    ctx->pc = 0x10aa24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10aa28: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10aa28u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10aa2c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x10aa2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aa30: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10aa30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aa34: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10aa34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aa38: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10aa3c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10aa3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10aa40: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10aa40u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10aa44: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10aa44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10aa48: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10aa4c: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x10aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10aa50: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10aa54: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10aa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10aa58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10aa58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aa5c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10aa5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aa60: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10aa60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aa64: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10aa68: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10aa68u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10aa6c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10aa6cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10aa70: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10aa70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10aa74: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10aa78: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10aa78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10aa7c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10aa7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10aa80: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10aa80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10aa84: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10aa88: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x10aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_10aa8c:
    // 0x10aa8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10aa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa90: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10AA90u;
    SET_GPR_U32(ctx, 31, 0x10AA98u);
    ctx->pc = 0x10AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA90u;
    // 0x10aa94: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10AA90u, 0x10AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA98u;
label_10aa98:
    // 0x10aa98: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10aa98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10aa9c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x10aa9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10aaa0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10aaa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10aaa4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x10aaa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x10aaa8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x10aaa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10aaac: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x10aaacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x10aab0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x10aab0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10aab4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x10aab4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x10aab8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10aab8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10aabc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x10aabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x10aac0: 0x3e00008  jr          $ra
    ctx->pc = 0x10AAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAC0u;
        // 0x10aac4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AAC8u;
}
