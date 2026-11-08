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

// Function: entry_00121488
// Address: 0x121488 - 0x1214ec
void entry_00121488_0x121488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121488_0x121488");
#endif

    switch (ctx->pc) {
        case 0x121494u: goto label_121494;
        default: break;
    }

    ctx->pc = 0x121488u;

label_121488:
    // 0x121488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12148c: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x12148Cu;
    SET_GPR_U32(ctx, 31, 0x121494u);
    ctx->pc = 0x121490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12148Cu;
    // 0x121490: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x12148Cu, 0x121494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121494u;
label_121494:
    // 0x121494: 0xda680000  lqc2        $vf8, 0x0($s3)
    ctx->pc = 0x121494u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x121498: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x121498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12149c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12149cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1214a0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x1214a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1214a4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x1214a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1214a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1214a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1214ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1214acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1214b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1214b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1214b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1214b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1214b8: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x1214b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1214bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1214bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1214c0: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x1214c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1214c4: 0x621fff0  bgez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1214C4u;
    {
        const bool branch_taken_0x1214c4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1214C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214C4u;
        // 0x1214c8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214c4) {
            ctx->pc = 0x121488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121488;
        }
    }
    ctx->pc = 0x1214CCu;
    // 0x1214cc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1214ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1214d0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1214d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1214d4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1214d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1214d8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1214d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1214dc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1214dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1214e0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1214e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1214e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1214E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1214E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214E4u;
        // 0x1214e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1214E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1214ECu;
}
