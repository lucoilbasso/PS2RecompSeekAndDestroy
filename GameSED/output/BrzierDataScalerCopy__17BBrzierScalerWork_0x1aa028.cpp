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

// Function: BrzierDataScalerCopy__17BBrzierScalerWork
// Address: 0x1aa028 - 0x1aa0b0
void BrzierDataScalerCopy__17BBrzierScalerWork_0x1aa028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrzierDataScalerCopy__17BBrzierScalerWork_0x1aa028");
#endif

    switch (ctx->pc) {
        case 0x1aa040u: goto label_1aa040;
        default: break;
    }

    ctx->pc = 0x1aa028u;

    // 0x1aa028: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1aa028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa02c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1aa02cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa030: 0x8d020048  lw          $v0, 0x48($t0)
    ctx->pc = 0x1aa030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x1aa034: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1aa034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa038: 0x8d0a0044  lw          $t2, 0x44($t0)
    ctx->pc = 0x1aa038u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x1aa03c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x1aa03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aa040:
    // 0x1aa040: 0x55400009  bnel        $t2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA040u;
    {
        const bool branch_taken_0x1aa040 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa040) {
            ctx->pc = 0x1AA044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA040u;
            // 0x1aa044: 0x8d04003c  lw          $a0, 0x3C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA068u;
            goto label_1aa068;
        }
    }
    ctx->pc = 0x1AA048u;
    // 0x1aa048: 0x8d03003c  lw          $v1, 0x3C($t0)
    ctx->pc = 0x1aa048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x1aa04c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1aa04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1aa050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa054: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1aa054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1aa058: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1aa058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa05c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1aa05cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1aa060: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AA060u;
    {
        const bool branch_taken_0x1aa060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA060u;
        // 0x1aa064: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa060) {
            ctx->pc = 0x1AA090u;
            goto label_1aa090;
        }
    }
    ctx->pc = 0x1AA068u;
label_1aa068:
    // 0x1aa068: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1aa068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1aa06c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1aa06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aa070: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1aa070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1aa074: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1aa074u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1aa078: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1aa078u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1aa07c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1aa07cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1aa080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa084: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1aa084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aa088: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1aa088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1aa08c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1aa08cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_1aa090:
    // 0x1aa090: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1aa090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1aa094: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1aa094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1aa098: 0x521ffe9  bgez        $t1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1AA098u;
    {
        const bool branch_taken_0x1aa098 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1AA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA098u;
        // 0x1aa09c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa098) {
            ctx->pc = 0x1AA040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa040;
        }
    }
    ctx->pc = 0x1AA0A0u;
    // 0x1aa0a0: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x1aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x1aa0a4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1aa0a4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1aa0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0A8u;
        // 0x1aa0ac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA0B0u;
}
