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

// Function: Finish__8WcObject
// Address: 0x193a38 - 0x193b14
void Finish__8WcObject_0x193a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcObject_0x193a38");
#endif

    switch (ctx->pc) {
        case 0x193a6cu: goto label_193a6c;
        case 0x193a80u: goto label_193a80;
        case 0x193a8cu: goto label_193a8c;
        case 0x193aacu: goto label_193aac;
        case 0x193ab8u: goto label_193ab8;
        case 0x193ad0u: goto label_193ad0;
        case 0x193ae8u: goto label_193ae8;
        case 0x193af0u: goto label_193af0;
        case 0x193af8u: goto label_193af8;
        case 0x193b00u: goto label_193b00;
        default: break;
    }

    ctx->pc = 0x193a38u;

    // 0x193a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193a4c: 0x8e1101a4  lw          $s1, 0x1A4($s0)
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x193a50: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x193A50u;
    {
        const bool branch_taken_0x193a50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a50) {
            ctx->pc = 0x193A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A50u;
            // 0x193a54: 0x8e0401ac  lw          $a0, 0x1AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A90u;
            goto label_193a90;
        }
    }
    ctx->pc = 0x193A58u;
    // 0x193a58: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x193a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x193a5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x193A5Cu;
    {
        const bool branch_taken_0x193a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a5c) {
            ctx->pc = 0x193A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A5Cu;
            // 0x193a60: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A70u;
            goto label_193a70;
        }
    }
    ctx->pc = 0x193A64u;
    // 0x193a64: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193A64u;
    SET_GPR_U32(ctx, 31, 0x193A6Cu);
    ctx->pc = 0x193A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A64u;
    // 0x193a68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193A64u, 0x193A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A6Cu;
label_193a6c:
    // 0x193a6c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x193a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_193a70:
    // 0x193a70: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x193A70u;
    {
        const bool branch_taken_0x193a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a70) {
            ctx->pc = 0x193A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A70u;
            // 0x193a74: 0x8e0401a4  lw          $a0, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A84u;
            goto label_193a84;
        }
    }
    ctx->pc = 0x193A78u;
    // 0x193a78: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193A78u;
    SET_GPR_U32(ctx, 31, 0x193A80u);
    ctx->pc = 0x193A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A78u;
    // 0x193a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193A78u, 0x193A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A80u;
label_193a80:
    // 0x193a80: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x193a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_193a84:
    // 0x193a84: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193A84u;
    SET_GPR_U32(ctx, 31, 0x193A8Cu);
    ctx->pc = 0x193A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A84u;
    // 0x193a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193A84u, 0x193A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A8Cu;
label_193a8c:
    // 0x193a8c: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x193a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_193a90:
    // 0x193a90: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x193A90u;
    {
        const bool branch_taken_0x193a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A90u;
        // 0x193a94: 0x26110160  addiu       $s1, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a90) {
            ctx->pc = 0x193ABCu;
            goto label_193abc;
        }
    }
    ctx->pc = 0x193A98u;
    // 0x193a98: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x193a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x193a9c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x193A9Cu;
    {
        const bool branch_taken_0x193a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a9c) {
            ctx->pc = 0x193AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A9Cu;
            // 0x193aa0: 0x8e0401ac  lw          $a0, 0x1AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193AB0u;
            goto label_193ab0;
        }
    }
    ctx->pc = 0x193AA4u;
    // 0x193aa4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193AA4u;
    SET_GPR_U32(ctx, 31, 0x193AACu);
    ctx->pc = 0x193AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AA4u;
    // 0x193aa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193AA4u, 0x193AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AACu;
label_193aac:
    // 0x193aac: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x193aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_193ab0:
    // 0x193ab0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193AB0u;
    SET_GPR_U32(ctx, 31, 0x193AB8u);
    ctx->pc = 0x193AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AB0u;
    // 0x193ab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193AB0u, 0x193AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AB8u;
label_193ab8:
    // 0x193ab8: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x193ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_193abc:
    // 0x193abc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x193abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x193ac0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193AC0u;
    {
        const bool branch_taken_0x193ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AC0u;
        // 0x193ac4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ac0) {
            ctx->pc = 0x193AD4u;
            goto label_193ad4;
        }
    }
    ctx->pc = 0x193AC8u;
    // 0x193ac8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193AC8u;
    SET_GPR_U32(ctx, 31, 0x193AD0u);
    ctx->pc = 0x193ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AC8u;
    // 0x193acc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193AC8u, 0x193AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AD0u;
label_193ad0:
    // 0x193ad0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_193ad4:
    // 0x193ad4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x193ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x193ad8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x193ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x193adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ae0: 0xc0654c8  jal         func_195320
    ctx->pc = 0x193AE0u;
    SET_GPR_U32(ctx, 31, 0x193AE8u);
    ctx->pc = 0x193AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AE0u;
    // 0x193ae4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195320u, 0x193AE0u, 0x193AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AE8u;
label_193ae8:
    // 0x193ae8: 0xc065500  jal         func_195400
    ctx->pc = 0x193AE8u;
    SET_GPR_U32(ctx, 31, 0x193AF0u);
    ctx->pc = 0x193AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AE8u;
    // 0x193aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195400u, 0x193AE8u, 0x193AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AF0u;
label_193af0:
    // 0x193af0: 0xc065546  jal         func_195518
    ctx->pc = 0x193AF0u;
    SET_GPR_U32(ctx, 31, 0x193AF8u);
    ctx->pc = 0x193AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AF0u;
    // 0x193af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195518u, 0x193AF0u, 0x193AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AF8u;
label_193af8:
    // 0x193af8: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x193AF8u;
    SET_GPR_U32(ctx, 31, 0x193B00u);
    ctx->pc = 0x193AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AF8u;
    // 0x193afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x193AF8u, 0x193B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B00u;
label_193b00:
    // 0x193b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x193B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B0Cu;
        // 0x193b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193B14u;
}
