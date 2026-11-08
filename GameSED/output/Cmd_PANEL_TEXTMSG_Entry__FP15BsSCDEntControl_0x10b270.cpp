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

// Function: Cmd_PANEL_TEXTMSG_Entry__FP15BsSCDEntControl
// Address: 0x10b270 - 0x10b394
void Cmd_PANEL_TEXTMSG_Entry__FP15BsSCDEntControl_0x10b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_TEXTMSG_Entry__FP15BsSCDEntControl_0x10b270");
#endif

    switch (ctx->pc) {
        case 0x10b2a4u: goto label_10b2a4;
        case 0x10b2d0u: goto label_10b2d0;
        case 0x10b2f0u: goto label_10b2f0;
        case 0x10b300u: goto label_10b300;
        case 0x10b328u: goto label_10b328;
        case 0x10b33cu: goto label_10b33c;
        case 0x10b374u: goto label_10b374;
        default: break;
    }

    ctx->pc = 0x10b270u;

    // 0x10b270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b28c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b290: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10b294: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10b298: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b29c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B29Cu;
    SET_GPR_U32(ctx, 31, 0x10B2A4u);
    ctx->pc = 0x10B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B29Cu;
    // 0x10b2a0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B29Cu, 0x10B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2A4u;
label_10b2a4:
    // 0x10b2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2a8: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b2ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B2ACu;
    {
        const bool branch_taken_0x10b2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2ACu;
        // 0x10b2b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2ac) {
            ctx->pc = 0x10B2C4u;
            goto label_10b2c4;
        }
    }
    ctx->pc = 0x10B2B4u;
    // 0x10b2b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b2b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b2bc: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B2BCu;
    {
        const bool branch_taken_0x10b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10b2bc) {
            ctx->pc = 0x10B2C8u;
            goto label_10b2c8;
        }
    }
    ctx->pc = 0x10B2C4u;
label_10b2c4:
    // 0x10b2c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10b2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b2c8:
    // 0x10b2c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B2C8u;
    SET_GPR_U32(ctx, 31, 0x10B2D0u);
    ctx->pc = 0x10B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2C8u;
    // 0x10b2cc: 0x3c148000  lui         $s4, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B2C8u, 0x10B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2D0u;
label_10b2d0:
    // 0x10b2d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b2d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b2e0: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B2E0u;
    {
        const bool branch_taken_0x10b2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x10B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2E0u;
        // 0x10b2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2e0) {
            ctx->pc = 0x10B2F4u;
            goto label_10b2f4;
        }
    }
    ctx->pc = 0x10B2E8u;
    // 0x10b2e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B2E8u;
    SET_GPR_U32(ctx, 31, 0x10B2F0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B2E8u, 0x10B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2F0u;
label_10b2f0:
    // 0x10b2f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b2f4:
    // 0x10b2f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10b2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2f8: 0xc041862  jal         func_106188
    ctx->pc = 0x10B2F8u;
    SET_GPR_U32(ctx, 31, 0x10B300u);
    ctx->pc = 0x10B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2F8u;
    // 0x10b2fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106188u, 0x10B2F8u, 0x10B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B300u;
label_10b300:
    // 0x10b300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b304: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b308: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10b308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10b30c: 0x2453f4d0  addiu       $s3, $v0, -0xB30
    ctx->pc = 0x10b30cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
    // 0x10b310: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b318: 0x10740013  beq         $v1, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x10B318u;
    {
        const bool branch_taken_0x10b318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x10B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B318u;
        // 0x10b31c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b318) {
            ctx->pc = 0x10B368u;
            goto label_10b368;
        }
    }
    ctx->pc = 0x10B320u;
    // 0x10b320: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B320u;
    SET_GPR_U32(ctx, 31, 0x10B328u);
    ctx->pc = 0x10B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B320u;
    // 0x10b324: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B320u, 0x10B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B328u;
label_10b328:
    // 0x10b328: 0x2610f2d0  addiu       $s0, $s0, -0xD30
    ctx->pc = 0x10b328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963920));
    // 0x10b32c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b334: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x10B334u;
    SET_GPR_U32(ctx, 31, 0x10B33Cu);
    ctx->pc = 0x10B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B334u;
    // 0x10b338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x10B334u, 0x10B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B33Cu;
label_10b33c:
    // 0x10b33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b354: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10b354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b358: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10b35c: 0x8063b2e  j           func_18ECB8
    ctx->pc = 0x10B35Cu;
    ctx->pc = 0x10B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B35Cu;
    // 0x10b360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    WTxPanelPrint__FP9WcTxPanelPc_0x18ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x10B364u;
    // 0x10b364: 0x0  nop
    ctx->pc = 0x10b364u;
    // NOP
label_10b368:
    // 0x10b368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b36c: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10B36Cu;
    SET_GPR_U32(ctx, 31, 0x10B374u);
    ctx->pc = 0x10B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B36Cu;
    // 0x10b370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10B36Cu, 0x10B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B374u;
label_10b374:
    // 0x10b374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b37c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b384: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10b384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b388: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10b388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10b38c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B38Cu;
        // 0x10b390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B394u;
}
