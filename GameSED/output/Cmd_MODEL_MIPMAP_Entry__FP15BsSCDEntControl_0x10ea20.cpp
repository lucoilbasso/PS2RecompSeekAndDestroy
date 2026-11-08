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

// Function: Cmd_MODEL_MIPMAP_Entry__FP15BsSCDEntControl
// Address: 0x10ea20 - 0x10eab8
void Cmd_MODEL_MIPMAP_Entry__FP15BsSCDEntControl_0x10ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_MIPMAP_Entry__FP15BsSCDEntControl_0x10ea20");
#endif

    switch (ctx->pc) {
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea6cu: goto label_10ea6c;
        case 0x10ea84u: goto label_10ea84;
        case 0x10ea8cu: goto label_10ea8c;
        case 0x10ea98u: goto label_10ea98;
        default: break;
    }

    ctx->pc = 0x10ea20u;

    // 0x10ea20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ea24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10ea24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ea28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ea2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ea2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ea34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ea34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ea3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10ea40: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10ea44: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10ea48: 0xc04110c  jal         func_104430
    ctx->pc = 0x10EA48u;
    SET_GPR_U32(ctx, 31, 0x10EA50u);
    ctx->pc = 0x10EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA48u;
    // 0x10ea4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10EA48u, 0x10EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA50u;
label_10ea50:
    // 0x10ea50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ea50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea54: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10ea58: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x10ea58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ea5c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EA5Cu;
    {
        const bool branch_taken_0x10ea5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA5Cu;
        // 0x10ea60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea5c) {
            ctx->pc = 0x10EA84u;
            goto label_10ea84;
        }
    }
    ctx->pc = 0x10EA64u;
    // 0x10ea64: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10EA64u;
    SET_GPR_U32(ctx, 31, 0x10EA6Cu);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10EA64u, 0x10EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA6Cu;
label_10ea6c:
    // 0x10ea6c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10ea70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ea70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea74: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10ea78: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10ea7c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10EA7Cu;
    SET_GPR_U32(ctx, 31, 0x10EA84u);
    ctx->pc = 0x10EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA7Cu;
    // 0x10ea80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10EA7Cu, 0x10EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA84u;
label_10ea84:
    // 0x10ea84: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10EA84u;
    SET_GPR_U32(ctx, 31, 0x10EA8Cu);
    ctx->pc = 0x10EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA84u;
    // 0x10ea88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10EA84u, 0x10EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA8Cu;
label_10ea8c:
    // 0x10ea8c: 0xc78c805c  lwc1        $f12, -0x7FA4($gp)
    ctx->pc = 0x10ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10ea90: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x10EA90u;
    SET_GPR_U32(ctx, 31, 0x10EA98u);
    ctx->pc = 0x10EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA90u;
    // 0x10ea94: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x10EA90u, 0x10EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA98u;
label_10ea98:
    // 0x10ea98: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10ea9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ea9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eaa0: 0xae42019c  sw          $v0, 0x19C($s2)
    ctx->pc = 0x10eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
    // 0x10eaa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10eaa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10eaa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10eaa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eaac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAB0u;
        // 0x10eab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EAB8u;
}
