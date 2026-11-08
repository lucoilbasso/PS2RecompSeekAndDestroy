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

// Function: GetSmokeGeometrix__9ApcCqpartP9FVector32P9DVAngle32
// Address: 0x1dafd8 - 0x1db058
void GetSmokeGeometrix__9ApcCqpartP9FVector32P9DVAngle32_0x1dafd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSmokeGeometrix__9ApcCqpartP9FVector32P9DVAngle32_0x1dafd8");
#endif

    switch (ctx->pc) {
        case 0x1db044u: goto label_1db044;
        default: break;
    }

    ctx->pc = 0x1dafd8u;

    // 0x1dafd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dafd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dafdc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dafdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dafe0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dafe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dafe4: 0x8c831218  lw          $v1, 0x1218($a0)
    ctx->pc = 0x1dafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4632)));
    // 0x1dafe8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DAFE8u;
    {
        const bool branch_taken_0x1dafe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFE8u;
        // 0x1dafec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafe8) {
            ctx->pc = 0x1DB048u;
            goto label_1db048;
        }
    }
    ctx->pc = 0x1DAFF0u;
    // 0x1daff0: 0x8c90121c  lw          $s0, 0x121C($a0)
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x1daff4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1daff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1daff8: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x1daff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1daffc: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x1daffcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db000: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1db000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db004: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1db004u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1db008: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1db008u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1db00c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1db00cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1db010: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1db010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1db014: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1db014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1db018: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1db018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1db01c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1db01cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1db020: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x1db020u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1db024: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1db024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1db028: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1db028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1db02c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1db02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1db030: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1db030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1db034: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1db034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db03c: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1DB03Cu;
    SET_GPR_U32(ctx, 31, 0x1DB044u);
    ctx->pc = 0x1DB040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB03Cu;
    // 0x1db040: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1DB03Cu, 0x1DB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB044u;
label_1db044:
    // 0x1db044: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db048:
    // 0x1db048: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1db048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db04c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db050: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB050u;
        // 0x1db054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB058u;
}
