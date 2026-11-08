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

// Function: ApFieldLandActorRetry__FP8ApcFieldP9FVector32fP7WcActorP8WcEntity
// Address: 0x13ea00 - 0x13eaa4
void ApFieldLandActorRetry__FP8ApcFieldP9FVector32fP7WcActorP8WcEntity_0x13ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldLandActorRetry__FP8ApcFieldP9FVector32fP7WcActorP8WcEntity_0x13ea00");
#endif

    switch (ctx->pc) {
        case 0x13ea30u: goto label_13ea30;
        case 0x13ea8cu: goto label_13ea8c;
        default: break;
    }

    ctx->pc = 0x13ea00u;

    // 0x13ea00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ea04: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x13ea04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea08: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x13ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x13ea0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13ea0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea10: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13ea14: 0x8c820204  lw          $v0, 0x204($a0)
    ctx->pc = 0x13ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x13ea18: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13EA18u;
    {
        const bool branch_taken_0x13ea18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA18u;
        // 0x13ea1c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea18) {
            ctx->pc = 0x13EA54u;
            goto label_13ea54;
        }
    }
    ctx->pc = 0x13EA20u;
    // 0x13ea20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea24: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ea28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ea28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea2c: 0x0  nop
    ctx->pc = 0x13ea2cu;
    // NOP
label_13ea30:
    // 0x13ea30: 0x10650018  beq         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x13EA30u;
    {
        const bool branch_taken_0x13ea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x13EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA30u;
        // 0x13ea34: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea30) {
            ctx->pc = 0x13EA94u;
            goto label_13ea94;
        }
    }
    ctx->pc = 0x13EA38u;
    // 0x13ea38: 0x0  nop
    ctx->pc = 0x13ea38u;
    // NOP
    // 0x13ea3c: 0x0  nop
    ctx->pc = 0x13ea3cu;
    // NOP
    // 0x13ea40: 0x0  nop
    ctx->pc = 0x13ea40u;
    // NOP
    // 0x13ea44: 0x0  nop
    ctx->pc = 0x13ea44u;
    // NOP
    // 0x13ea48: 0x0  nop
    ctx->pc = 0x13ea48u;
    // NOP
    // 0x13ea4c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13EA4Cu;
    {
        const bool branch_taken_0x13ea4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea4c) {
            ctx->pc = 0x13EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA4Cu;
            // 0x13ea50: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ea30;
        }
    }
    ctx->pc = 0x13EA54u;
label_13ea54:
    // 0x13ea54: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x13ea54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13ea58: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13ea5c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x13ea5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13ea60: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x13ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13ea64: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x13ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea68: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ea6c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x13ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ea70: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x13ea70u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x13ea74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x13ea74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13ea78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13ea7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13ea80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x13ea84: 0xc04eff4  jal         func_13BFD0
    ctx->pc = 0x13EA84u;
    SET_GPR_U32(ctx, 31, 0x13EA8Cu);
    ctx->pc = 0x13EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA84u;
    // 0x13ea88: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BFD0u, 0x13EA84u, 0x13EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA8Cu;
label_13ea8c:
    // 0x13ea8c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x13ea8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x13ea90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13ea90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ea94:
    // 0x13ea94: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x13ea94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ea98: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13ea98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13ea9c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA9Cu;
        // 0x13eaa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EAA4u;
}
