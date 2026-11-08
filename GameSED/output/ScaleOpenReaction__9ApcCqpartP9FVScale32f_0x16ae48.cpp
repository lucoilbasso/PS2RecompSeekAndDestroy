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

// Function: ScaleOpenReaction__9ApcCqpartP9FVScale32f
// Address: 0x16ae48 - 0x16af30
void ScaleOpenReaction__9ApcCqpartP9FVScale32f_0x16ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScaleOpenReaction__9ApcCqpartP9FVScale32f_0x16ae48");
#endif

    switch (ctx->pc) {
        case 0x16ae98u: goto label_16ae98;
        case 0x16aec8u: goto label_16aec8;
        case 0x16aedcu: goto label_16aedc;
        case 0x16aef4u: goto label_16aef4;
        default: break;
    }

    ctx->pc = 0x16ae48u;

    // 0x16ae48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ae48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ae4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16ae50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16ae50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16ae58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16ae58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae5c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x16ae5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x16ae60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ae64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ae68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16ae6c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16ae70: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x16ae70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x16ae74: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x16ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x16ae78: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16AE78u;
    {
        const bool branch_taken_0x16ae78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE78u;
        // 0x16ae7c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae78) {
            ctx->pc = 0x16AF08u;
            goto label_16af08;
        }
    }
    ctx->pc = 0x16AE80u;
    // 0x16ae80: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16AE80u;
    {
        const bool branch_taken_0x16ae80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE80u;
        // 0x16ae84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae80) {
            ctx->pc = 0x16AF08u;
            goto label_16af08;
        }
    }
    ctx->pc = 0x16AE88u;
    // 0x16ae88: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x16ae88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16ae8c: 0x265111e4  addiu       $s1, $s2, 0x11E4
    ctx->pc = 0x16ae8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x16ae90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ae94: 0x0  nop
    ctx->pc = 0x16ae94u;
    // NOP
label_16ae98:
    // 0x16ae98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x16ae98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x16ae9c: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x16aea0: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x16aea0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16aea4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16aea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aeac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16aeb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16AEB4u;
    {
        const bool branch_taken_0x16aeb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEB4u;
        // 0x16aeb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aeb4) {
            ctx->pc = 0x16AED0u;
            goto label_16aed0;
        }
    }
    ctx->pc = 0x16AEBCu;
    // 0x16aebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16aebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aec0: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x16AEC0u;
    SET_GPR_U32(ctx, 31, 0x16AEC8u);
    ctx->pc = 0x16AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEC0u;
    // 0x16aec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16AEC0u, 0x16AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEC8u;
label_16aec8:
    // 0x16aec8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16AEC8u;
    {
        const bool branch_taken_0x16aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEC8u;
        // 0x16aecc: 0x8e4211e0  lw          $v0, 0x11E0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aec8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AED0u;
label_16aed0:
    // 0x16aed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aed4: 0xc06164c  jal         func_185930
    ctx->pc = 0x16AED4u;
    SET_GPR_U32(ctx, 31, 0x16AEDCu);
    ctx->pc = 0x16AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AED4u;
    // 0x16aed8: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16AED4u, 0x16AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEDCu;
label_16aedc:
    // 0x16aedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16aee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16aee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16aee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16aeec: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16AEECu;
    SET_GPR_U32(ctx, 31, 0x16AEF4u);
    ctx->pc = 0x16AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEECu;
    // 0x16aef0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16AEECu, 0x16AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEF4u;
label_16aef4:
    // 0x16aef4: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x16aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_16aef8:
    // 0x16aef8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16aefc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x16aefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16af00: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x16AF00u;
    {
        const bool branch_taken_0x16af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16af00) {
            ctx->pc = 0x16AF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AF00u;
            // 0x16af04: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ae98;
        }
    }
    ctx->pc = 0x16AF08u;
label_16af08:
    // 0x16af08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16af08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16af0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16af10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16af10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16af14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16af14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16af18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16af18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16af1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16af1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16af20: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x16af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16af24: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x16af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16af28: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF28u;
        // 0x16af2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF30u;
}
