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

// Function: GetFireGeometrix__9ApcCqpartP9FVector32P9DVAngle32
// Address: 0x1daf40 - 0x1dafd8
void GetFireGeometrix__9ApcCqpartP9FVector32P9DVAngle32_0x1daf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFireGeometrix__9ApcCqpartP9FVector32P9DVAngle32_0x1daf40");
#endif

    switch (ctx->pc) {
        case 0x1dafc4u: goto label_1dafc4;
        default: break;
    }

    ctx->pc = 0x1daf40u;

    // 0x1daf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1daf44: 0x24871200  addiu       $a3, $a0, 0x1200
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
    // 0x1daf48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1daf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1daf4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1daf4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1daf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1daf54: 0x8c831200  lw          $v1, 0x1200($a0)
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4608)));
    // 0x1daf58: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DAF58u;
    {
        const bool branch_taken_0x1daf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF58u;
        // 0x1daf5c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf58) {
            ctx->pc = 0x1DAFC8u;
            goto label_1dafc8;
        }
    }
    ctx->pc = 0x1DAF60u;
    // 0x1daf60: 0x8cf00008  lw          $s0, 0x8($a3)
    ctx->pc = 0x1daf60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1daf64: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1daf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1daf68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAF68u;
    {
        const bool branch_taken_0x1daf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF68u;
        // 0x1daf6c: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf68) {
            ctx->pc = 0x1DAF78u;
            goto label_1daf78;
        }
    }
    ctx->pc = 0x1DAF70u;
    // 0x1daf70: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1daf74: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1daf74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_1daf78:
    // 0x1daf78: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1daf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1daf7c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x1daf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1daf80: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x1daf80u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1daf84: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1daf84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1daf88: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1daf88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1daf8c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1daf8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1daf90: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1daf90u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1daf94: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1daf94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1daf98: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1daf98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1daf9c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1daf9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1dafa0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1dafa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1dafa4: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x1dafa4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1dafa8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dafac: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1dafacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1dafb0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1dafb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dafb4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1dafb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1dafb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dafb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafbc: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1DAFBCu;
    SET_GPR_U32(ctx, 31, 0x1DAFC4u);
    ctx->pc = 0x1DAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAFBCu;
    // 0x1dafc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1DAFBCu, 0x1DAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFC4u;
label_1dafc4:
    // 0x1dafc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dafc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dafc8:
    // 0x1dafc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dafc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dafcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dafccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dafd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFD0u;
        // 0x1dafd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAFD8u;
}
