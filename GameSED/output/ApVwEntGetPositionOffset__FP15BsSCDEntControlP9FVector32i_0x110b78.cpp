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

// Function: ApVwEntGetPositionOffset__FP15BsSCDEntControlP9FVector32i
// Address: 0x110b78 - 0x110c08
void ApVwEntGetPositionOffset__FP15BsSCDEntControlP9FVector32i_0x110b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetPositionOffset__FP15BsSCDEntControlP9FVector32i_0x110b78");
#endif

    switch (ctx->pc) {
        case 0x110ba4u: goto label_110ba4;
        case 0x110bb8u: goto label_110bb8;
        case 0x110bd4u: goto label_110bd4;
        case 0x110be4u: goto label_110be4;
        default: break;
    }

    ctx->pc = 0x110b78u;

    // 0x110b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110b7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110b80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x110b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x110b88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110b90: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x110B90u;
    {
        const bool branch_taken_0x110b90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B90u;
        // 0x110b94: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b90) {
            ctx->pc = 0x110BB0u;
            goto label_110bb0;
        }
    }
    ctx->pc = 0x110B98u;
    // 0x110b98: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x110b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x110b9c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x110B9Cu;
    SET_GPR_U32(ctx, 31, 0x110BA4u);
    ctx->pc = 0x110BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B9Cu;
    // 0x110ba0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x110B9Cu, 0x110BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BA4u;
label_110ba4:
    // 0x110ba4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x110BA4u;
    {
        const bool branch_taken_0x110ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BA4u;
        // 0x110ba8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ba4) {
            ctx->pc = 0x110BBCu;
            goto label_110bbc;
        }
    }
    ctx->pc = 0x110BACu;
    // 0x110bac: 0x0  nop
    ctx->pc = 0x110bacu;
    // NOP
label_110bb0:
    // 0x110bb0: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x110BB0u;
    SET_GPR_U32(ctx, 31, 0x110BB8u);
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x110BB0u, 0x110BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BB8u;
label_110bb8:
    // 0x110bb8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x110bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_110bbc:
    // 0x110bbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110bc4: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110BC4u;
    {
        const bool branch_taken_0x110bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x110bc4) {
            ctx->pc = 0x110BE4u;
            goto label_110be4;
        }
    }
    ctx->pc = 0x110BCCu;
    // 0x110bcc: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x110BCCu;
    SET_GPR_U32(ctx, 31, 0x110BD4u);
    ctx->pc = 0x110BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BCCu;
    // 0x110bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x110BCCu, 0x110BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BD4u;
label_110bd4:
    // 0x110bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bdc: 0xc06760e  jal         func_19D838
    ctx->pc = 0x110BDCu;
    SET_GPR_U32(ctx, 31, 0x110BE4u);
    ctx->pc = 0x110BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BDCu;
    // 0x110be0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x110BDCu, 0x110BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BE4u;
label_110be4:
    // 0x110be4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x110be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110be8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x110be8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110bec: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x110becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x110bf0: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x110bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x110bf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110bf8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x110bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110c00: 0x3e00008  jr          $ra
    ctx->pc = 0x110C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C00u;
        // 0x110c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C08u;
}
