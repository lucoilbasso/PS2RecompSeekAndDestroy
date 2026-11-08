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

// Function: ApTankBoneMarker__FP7ApcTank
// Address: 0x14ea18 - 0x14ead0
void ApTankBoneMarker__FP7ApcTank_0x14ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankBoneMarker__FP7ApcTank_0x14ea18");
#endif

    switch (ctx->pc) {
        case 0x14ea60u: goto label_14ea60;
        case 0x14eaa0u: goto label_14eaa0;
        default: break;
    }

    ctx->pc = 0x14ea18u;

    // 0x14ea18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ea1c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14ea20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14ea20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ea28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14ea2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14ea30: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x14ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14ea34: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14ea38: 0x8e710690  lw          $s1, 0x690($s3)
    ctx->pc = 0x14ea38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1680)));
    // 0x14ea3c: 0x8e2219c4  lw          $v0, 0x19C4($s1)
    ctx->pc = 0x14ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
    // 0x14ea40: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14EA40u;
    {
        const bool branch_taken_0x14ea40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA40u;
        // 0x14ea44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea40) {
            ctx->pc = 0x14EAB4u;
            goto label_14eab4;
        }
    }
    ctx->pc = 0x14EA48u;
    // 0x14ea48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14ea48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea4c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14EA4Cu;
    {
        const bool branch_taken_0x14ea4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA4Cu;
        // 0x14ea50: 0x8e3019cc  lw          $s0, 0x19CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea4c) {
            ctx->pc = 0x14EAB0u;
            goto label_14eab0;
        }
    }
    ctx->pc = 0x14EA54u;
    // 0x14ea54: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x14ea58: 0x24549b58  addiu       $s4, $v0, -0x64A8
    ctx->pc = 0x14ea58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941528));
    // 0x14ea5c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x14ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_14ea60:
    // 0x14ea60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14ea60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ea64: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x14ea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x14ea68: 0xc6201a50  lwc1        $f0, 0x1A50($s1)
    ctx->pc = 0x14ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ea6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14ea6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea70: 0xc62119c8  lwc1        $f1, 0x19C8($s1)
    ctx->pc = 0x14ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ea74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14ea74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14ea78: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x14ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14ea7c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x14ea7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x14ea80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ea80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ea84: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x14ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x14ea88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14ea8c: 0xc78c81f0  lwc1        $f12, -0x7E10($gp)
    ctx->pc = 0x14ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ea90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ea94: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x14ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x14ea98: 0xc051588  jal         func_145620
    ctx->pc = 0x14EA98u;
    SET_GPR_U32(ctx, 31, 0x14EAA0u);
    ctx->pc = 0x14EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA98u;
    // 0x14ea9c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x145620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145620u, 0x14EA98u, 0x14EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAA0u;
label_14eaa0:
    // 0x14eaa0: 0x8e2319c4  lw          $v1, 0x19C4($s1)
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
    // 0x14eaa4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x14eaa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14eaa8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14EAA8u;
    {
        const bool branch_taken_0x14eaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAA8u;
        // 0x14eaac: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaa8) {
            ctx->pc = 0x14EA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ea60;
        }
    }
    ctx->pc = 0x14EAB0u;
label_14eab0:
    // 0x14eab0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14eab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14eab4:
    // 0x14eab4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14eab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14eab8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14eab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eabc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14eabcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14eac0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x14eac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eac4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14eac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14eac8: 0x3e00008  jr          $ra
    ctx->pc = 0x14EAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAC8u;
        // 0x14eacc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EAD0u;
}
