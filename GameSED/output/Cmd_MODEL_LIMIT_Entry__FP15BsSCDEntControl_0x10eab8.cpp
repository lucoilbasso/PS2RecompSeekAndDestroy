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

// Function: Cmd_MODEL_LIMIT_Entry__FP15BsSCDEntControl
// Address: 0x10eab8 - 0x10eb90
void Cmd_MODEL_LIMIT_Entry__FP15BsSCDEntControl_0x10eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_LIMIT_Entry__FP15BsSCDEntControl_0x10eab8");
#endif

    switch (ctx->pc) {
        case 0x10eaecu: goto label_10eaec;
        case 0x10eb08u: goto label_10eb08;
        case 0x10eb20u: goto label_10eb20;
        case 0x10eb28u: goto label_10eb28;
        case 0x10eb4cu: goto label_10eb4c;
        default: break;
    }

    ctx->pc = 0x10eab8u;

    // 0x10eab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eabc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10eac0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10eac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eac8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10eacc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10eaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ead0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ead4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10ead8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10ead8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10eadc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10eae0: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10eae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10eae4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10EAE4u;
    SET_GPR_U32(ctx, 31, 0x10EAECu);
    ctx->pc = 0x10EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EAE4u;
    // 0x10eae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10EAE4u, 0x10EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAECu;
label_10eaec:
    // 0x10eaec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10eaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eaf0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10eaf4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x10eaf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10eaf8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EAF8u;
    {
        const bool branch_taken_0x10eaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAF8u;
        // 0x10eafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaf8) {
            ctx->pc = 0x10EB20u;
            goto label_10eb20;
        }
    }
    ctx->pc = 0x10EB00u;
    // 0x10eb00: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10EB00u;
    SET_GPR_U32(ctx, 31, 0x10EB08u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10EB00u, 0x10EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB08u;
label_10eb08:
    // 0x10eb08: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10eb0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10eb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb10: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10eb14: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10eb18: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10EB18u;
    SET_GPR_U32(ctx, 31, 0x10EB20u);
    ctx->pc = 0x10EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB18u;
    // 0x10eb1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10EB18u, 0x10EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB20u;
label_10eb20:
    // 0x10eb20: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10EB20u;
    SET_GPR_U32(ctx, 31, 0x10EB28u);
    ctx->pc = 0x10EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB20u;
    // 0x10eb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10EB20u, 0x10EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB28u;
label_10eb28:
    // 0x10eb28: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10eb2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10eb2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10eb30: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10eb34: 0xe65401a0  swc1        $f20, 0x1A0($s2)
    ctx->pc = 0x10eb34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x10eb38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10eb3c: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x10EB3Cu;
    {
        const bool branch_taken_0x10eb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB3Cu;
        // 0x10eb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb3c) {
            ctx->pc = 0x10EB74u;
            goto label_10eb74;
        }
    }
    ctx->pc = 0x10EB44u;
    // 0x10eb44: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10EB44u;
    SET_GPR_U32(ctx, 31, 0x10EB4Cu);
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10EB44u, 0x10EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB4Cu;
label_10eb4c:
    // 0x10eb4c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10eb4cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x10eb50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10eb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eb54: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10eb54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10eb58: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x10EB58u;
    {
        const bool branch_taken_0x10eb58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10eb58) {
            ctx->pc = 0x10EB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EB58u;
            // 0x10eb5c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EB6Cu;
            goto label_10eb6c;
        }
    }
    ctx->pc = 0x10EB60u;
    // 0x10eb60: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x10eb60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x10eb64: 0xe7808d88  swc1        $f0, -0x7278($gp)
    ctx->pc = 0x10eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937992), bits); }
    // 0x10eb68: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_10eb6c:
    // 0x10eb6c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x10eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x10eb70: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x10eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_10eb74:
    // 0x10eb74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10eb78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10eb7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10eb7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10eb84: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10eb88: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB88u;
        // 0x10eb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EB90u;
}
