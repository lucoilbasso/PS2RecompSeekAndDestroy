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

// Function: BSCDEntGetNParameter__FP15BsSCDEntControlPfi
// Address: 0x1a8b50 - 0x1a8bf8
void BSCDEntGetNParameter__FP15BsSCDEntControlPfi_0x1a8b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetNParameter__FP15BsSCDEntControlPfi_0x1a8b50");
#endif

    switch (ctx->pc) {
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8bb4u: goto label_1a8bb4;
        default: break;
    }

    ctx->pc = 0x1a8b50u;

    // 0x1a8b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8b54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8b58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a8b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8b60: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a8b60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8b68: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a8b68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1a8b6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8b70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8b74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8b7c: 0x2692001c  addiu       $s2, $s4, 0x1C
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1a8b80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8b84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b88:
    // 0x1a8b88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8b8c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b90: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x1a8b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8b98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8b9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8ba0: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8ba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8BA4u;
    {
        const bool branch_taken_0x1a8ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA4u;
        // 0x1a8ba8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ba4) {
            ctx->pc = 0x1A8BB8u;
            goto label_1a8bb8;
        }
    }
    ctx->pc = 0x1A8BACu;
    // 0x1a8bac: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8BACu;
    SET_GPR_U32(ctx, 31, 0x1A8BB4u);
    ctx->pc = 0x1A8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BACu;
    // 0x1a8bb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8BACu, 0x1A8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8bb8:
    // 0x1a8bb8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a8bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a8bbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a8bbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a8bc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a8bc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a8bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8bc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8bcc: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A8BCCu;
    {
        const bool branch_taken_0x1a8bcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BCCu;
        // 0x1a8bd0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bcc) {
            ctx->pc = 0x1A8B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8b88;
        }
    }
    ctx->pc = 0x1A8BD4u;
    // 0x1a8bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8bd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8bdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8be0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8be4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8be4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8be8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8be8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8bec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BF0u;
        // 0x1a8bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8BF8u;
}
