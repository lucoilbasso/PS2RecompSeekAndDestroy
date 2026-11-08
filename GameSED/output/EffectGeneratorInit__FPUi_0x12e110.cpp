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

// Function: EffectGeneratorInit__FPUi
// Address: 0x12e110 - 0x12e1d4
void EffectGeneratorInit__FPUi_0x12e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectGeneratorInit__FPUi_0x12e110");
#endif

    switch (ctx->pc) {
        case 0x12e130u: goto label_12e130;
        case 0x12e140u: goto label_12e140;
        case 0x12e150u: goto label_12e150;
        case 0x12e16cu: goto label_12e16c;
        case 0x12e17cu: goto label_12e17c;
        case 0x12e18cu: goto label_12e18c;
        case 0x12e19cu: goto label_12e19c;
        case 0x12e1acu: goto label_12e1ac;
        case 0x12e1c0u: goto label_12e1c0;
        default: break;
    }

    ctx->pc = 0x12e110u;

    // 0x12e110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e118: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e120: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x12E120u;
    {
        const bool branch_taken_0x12e120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E120u;
        // 0x12e124: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e120) {
            ctx->pc = 0x12E1C0u;
            goto label_12e1c0;
        }
    }
    ctx->pc = 0x12E128u;
    // 0x12e128: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E128u;
    SET_GPR_U32(ctx, 31, 0x12E130u);
    ctx->pc = 0x12E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E128u;
    // 0x12e12c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E128u, 0x12E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E130u;
label_12e130:
    // 0x12e130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e134: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12e138: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E138u;
    SET_GPR_U32(ctx, 31, 0x12E140u);
    ctx->pc = 0x12E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E138u;
    // 0x12e13c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E138u, 0x12E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E140u;
label_12e140:
    // 0x12e140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e144: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x12e144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x12e148: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E148u;
    SET_GPR_U32(ctx, 31, 0x12E150u);
    ctx->pc = 0x12E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E148u;
    // 0x12e14c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E148u, 0x12E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E150u;
label_12e150:
    // 0x12e150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e154: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E154u;
    {
        const bool branch_taken_0x12e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E154u;
        // 0x12e158: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e154) {
            ctx->pc = 0x12E164u;
            goto label_12e164;
        }
    }
    ctx->pc = 0x12E15Cu;
    // 0x12e15c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12e160: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x12e160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_12e164:
    // 0x12e164: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E164u;
    SET_GPR_U32(ctx, 31, 0x12E16Cu);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E164u, 0x12E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E16Cu;
label_12e16c:
    // 0x12e16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e170: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12e170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x12e174: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E174u;
    SET_GPR_U32(ctx, 31, 0x12E17Cu);
    ctx->pc = 0x12E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E174u;
    // 0x12e178: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E174u, 0x12E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E17Cu;
label_12e17c:
    // 0x12e17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e180: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12e180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12e184: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E184u;
    SET_GPR_U32(ctx, 31, 0x12E18Cu);
    ctx->pc = 0x12E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E184u;
    // 0x12e188: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E184u, 0x12E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E18Cu;
label_12e18c:
    // 0x12e18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e190: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12e190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12e194: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E194u;
    SET_GPR_U32(ctx, 31, 0x12E19Cu);
    ctx->pc = 0x12E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E194u;
    // 0x12e198: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E194u, 0x12E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E19Cu;
label_12e19c:
    // 0x12e19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12e1a4: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E1A4u;
    SET_GPR_U32(ctx, 31, 0x12E1ACu);
    ctx->pc = 0x12E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1A4u;
    // 0x12e1a8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E1A4u, 0x12E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1ACu;
label_12e1ac:
    // 0x12e1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1b0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x12e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x12e1b4: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x12e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x12e1b8: 0xc04c04c  jal         func_130130
    ctx->pc = 0x12E1B8u;
    SET_GPR_U32(ctx, 31, 0x12E1C0u);
    ctx->pc = 0x12E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1B8u;
    // 0x12e1bc: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130130u, 0x12E1B8u, 0x12E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1C0u;
label_12e1c0:
    // 0x12e1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e1c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e1c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12E1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1CCu;
        // 0x12e1d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E1D4u;
}
