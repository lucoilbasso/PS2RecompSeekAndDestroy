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

// Function: ApVwEntGetAngleOffset__FP15BsSCDEntControlP9DVAngle32
// Address: 0x111c88 - 0x111d58
void ApVwEntGetAngleOffset__FP15BsSCDEntControlP9DVAngle32_0x111c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetAngleOffset__FP15BsSCDEntControlP9DVAngle32_0x111c88");
#endif

    switch (ctx->pc) {
        case 0x111cacu: goto label_111cac;
        case 0x111cf0u: goto label_111cf0;
        case 0x111d00u: goto label_111d00;
        case 0x111d0cu: goto label_111d0c;
        case 0x111d2cu: goto label_111d2c;
        default: break;
    }

    ctx->pc = 0x111c88u;

    // 0x111c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111c8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x111c90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x111c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c94: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x111c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x111c98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111c9c: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x111c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x111ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ca4: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x111CA4u;
    SET_GPR_U32(ctx, 31, 0x111CACu);
    ctx->pc = 0x111CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CA4u;
    // 0x111ca8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x111CA4u, 0x111CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CACu;
label_111cac:
    // 0x111cac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x111cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x111cb0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x111cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x111cb4: 0x24484080  addiu       $t0, $v0, 0x4080
    ctx->pc = 0x111cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x111cb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111cbc: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x111cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111cc0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x111cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x111cc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x111cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x111cc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x111cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ccc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x111cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x111cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cd4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x111CD4u;
    {
        const bool branch_taken_0x111cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CD4u;
        // 0x111cd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cd4) {
            ctx->pc = 0x111D44u;
            goto label_111d44;
        }
    }
    ctx->pc = 0x111CDCu;
    // 0x111cdc: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x111cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x111ce0: 0xdd030000  ld          $v1, 0x0($t0)
    ctx->pc = 0x111ce0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x111ce4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x111ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x111ce8: 0xc067586  jal         func_19D618
    ctx->pc = 0x111CE8u;
    SET_GPR_U32(ctx, 31, 0x111CF0u);
    ctx->pc = 0x111CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CE8u;
    // 0x111cec: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x111CE8u, 0x111CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CF0u;
label_111cf0:
    // 0x111cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x111cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cf8: 0xc067586  jal         func_19D618
    ctx->pc = 0x111CF8u;
    SET_GPR_U32(ctx, 31, 0x111D00u);
    ctx->pc = 0x111CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CF8u;
    // 0x111cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x111CF8u, 0x111D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D00u;
label_111d00:
    // 0x111d00: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x111d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x111d04: 0xc067a02  jal         func_19E808
    ctx->pc = 0x111D04u;
    SET_GPR_U32(ctx, 31, 0x111D0Cu);
    ctx->pc = 0x111D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D04u;
    // 0x111d08: 0xc7ad0018  lwc1        $f13, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x111D04u, 0x111D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D0Cu;
label_111d0c:
    // 0x111d0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x111d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x111d10: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x111d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111d14: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x111d14u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x111d18: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x111d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x111d1c: 0x46006b45  abs.s       $f13, $f13
    ctx->pc = 0x111d1cu;
    ctx->f[13] = FPU_ABS_S(ctx->f[13]);
    // 0x111d20: 0x460d0340  add.s       $f13, $f0, $f13
    ctx->pc = 0x111d20u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x111d24: 0xc067a02  jal         func_19E808
    ctx->pc = 0x111D24u;
    SET_GPR_U32(ctx, 31, 0x111D2Cu);
    ctx->pc = 0x111D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D24u;
    // 0x111d28: 0xc7ac0014  lwc1        $f12, 0x14($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x111D24u, 0x111D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D2Cu;
label_111d2c:
    // 0x111d2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x111d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x111d30: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x111d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111d34: 0x21023  negu        $v0, $v0
    ctx->pc = 0x111d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111d38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x111d3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111d40: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x111d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_111d44:
    // 0x111d44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111d48: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x111d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111d4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111d50: 0x3e00008  jr          $ra
    ctx->pc = 0x111D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D50u;
        // 0x111d54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111D58u;
}
