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

// Function: Cmd_DIRECTOR_SET_Entry__FP15BsSCDEntControl
// Address: 0x11b028 - 0x11b100
void Cmd_DIRECTOR_SET_Entry__FP15BsSCDEntControl_0x11b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_SET_Entry__FP15BsSCDEntControl_0x11b028");
#endif

    switch (ctx->pc) {
        case 0x11b058u: goto label_11b058;
        case 0x11b06cu: goto label_11b06c;
        case 0x11b07cu: goto label_11b07c;
        case 0x11b088u: goto label_11b088;
        case 0x11b09cu: goto label_11b09c;
        case 0x11b0c0u: goto label_11b0c0;
        case 0x11b0e8u: goto label_11b0e8;
        default: break;
    }

    ctx->pc = 0x11b028u;

    // 0x11b028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b03c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11b040: 0x8f928d10  lw          $s2, -0x72F0($gp)
    ctx->pc = 0x11b040u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11b044: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11b048: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B048u;
    {
        const bool branch_taken_0x11b048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B048u;
        // 0x11b04c: 0x265033f0  addiu       $s0, $s2, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b048) {
            ctx->pc = 0x11B09Cu;
            goto label_11b09c;
        }
    }
    ctx->pc = 0x11B050u;
    // 0x11b050: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11B050u;
    SET_GPR_U32(ctx, 31, 0x11B058u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11B050u, 0x11B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B058u;
label_11b058:
    // 0x11b058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b05c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11b060: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11b060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11b064: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11B064u;
    SET_GPR_U32(ctx, 31, 0x11B06Cu);
    ctx->pc = 0x11B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B064u;
    // 0x11b068: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11B064u, 0x11B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B06Cu;
label_11b06c:
    // 0x11b06c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B06Cu;
    {
        const bool branch_taken_0x11b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B06Cu;
        // 0x11b070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b06c) {
            ctx->pc = 0x11B09Cu;
            goto label_11b09c;
        }
    }
    ctx->pc = 0x11B074u;
    // 0x11b074: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11B074u;
    SET_GPR_U32(ctx, 31, 0x11B07Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11B074u, 0x11B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B07Cu;
label_11b07c:
    // 0x11b07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b080: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11B080u;
    SET_GPR_U32(ctx, 31, 0x11B088u);
    ctx->pc = 0x11B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B080u;
    // 0x11b084: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11B080u, 0x11B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B088u;
label_11b088:
    // 0x11b088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b08c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B08Cu;
    {
        const bool branch_taken_0x11b08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B08Cu;
        // 0x11b090: 0x264533f8  addiu       $a1, $s2, 0x33F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 13304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b08c) {
            ctx->pc = 0x11B09Cu;
            goto label_11b09c;
        }
    }
    ctx->pc = 0x11B094u;
    // 0x11b094: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x11B094u;
    SET_GPR_U32(ctx, 31, 0x11B09Cu);
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x11B094u, 0x11B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B09Cu;
label_11b09c:
    // 0x11b09c: 0x8e423410  lw          $v0, 0x3410($s2)
    ctx->pc = 0x11b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13328)));
    // 0x11b0a0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x11b0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11b0a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B0A4u;
    {
        const bool branch_taken_0x11b0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0A4u;
        // 0x11b0a8: 0x26443410  addiu       $a0, $s2, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0a4) {
            ctx->pc = 0x11B0C4u;
            goto label_11b0c4;
        }
    }
    ctx->pc = 0x11B0ACu;
    // 0x11b0ac: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b0b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x11b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11b0b8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B0B8u;
    SET_GPR_U32(ctx, 31, 0x11B0C0u);
    ctx->pc = 0x11B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0B8u;
    // 0x11b0bc: 0x24a54780  addiu       $a1, $a1, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B0B8u, 0x11B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0C0u;
label_11b0c0:
    // 0x11b0c0: 0x26443410  addiu       $a0, $s2, 0x3410
    ctx->pc = 0x11b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13328));
label_11b0c4:
    // 0x11b0c4: 0x264533f0  addiu       $a1, $s2, 0x33F0
    ctx->pc = 0x11b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 13296));
    // 0x11b0c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b0cc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b0d0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x11b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b0d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11b0dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11b0e0: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B0E0u;
    SET_GPR_U32(ctx, 31, 0x11B0E8u);
    ctx->pc = 0x11B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0E0u;
    // 0x11b0e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B0E0u, 0x11B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0E8u;
label_11b0e8:
    // 0x11b0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b0f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b0f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11b0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0F8u;
        // 0x11b0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B100u;
}
