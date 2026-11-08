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

// Function: ApVwEntGetEntityLocalOffset__FP8WcEntityP15BsSCDEntControlP9FVector32
// Address: 0x110aa0 - 0x110b74
void ApVwEntGetEntityLocalOffset__FP8WcEntityP15BsSCDEntControlP9FVector32_0x110aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetEntityLocalOffset__FP8WcEntityP15BsSCDEntControlP9FVector32_0x110aa0");
#endif

    switch (ctx->pc) {
        case 0x110af4u: goto label_110af4;
        default: break;
    }

    ctx->pc = 0x110aa0u;

    // 0x110aa0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x110aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x110aa4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110aa8: 0x8c47b830  lw          $a3, -0x47D0($v0)
    ctx->pc = 0x110aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110aac: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x110aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x110ab0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110ab4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x110ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x110ab8: 0x249100a0  addiu       $s1, $a0, 0xA0
    ctx->pc = 0x110ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x110abc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110ac0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x110ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ac4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110ac8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x110ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x110acc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110ad0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x110ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x110ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110ad8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110AD8u;
    {
        const bool branch_taken_0x110ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x110ad8) {
            ctx->pc = 0x110AF8u;
            goto label_110af8;
        }
    }
    ctx->pc = 0x110AE0u;
    // 0x110ae0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x110ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x110ae4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x110ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110ae8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110aec: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x110AECu;
    SET_GPR_U32(ctx, 31, 0x110AF4u);
    ctx->pc = 0x110AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AECu;
    // 0x110af0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x110AECu, 0x110AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AF4u;
label_110af4:
    // 0x110af4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x110af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_110af8:
    // 0x110af8: 0x50c0001a  beql        $a2, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x110AF8u;
    {
        const bool branch_taken_0x110af8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x110af8) {
            ctx->pc = 0x110AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110AF8u;
            // 0x110afc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110B64u;
            goto label_110b64;
        }
    }
    ctx->pc = 0x110B00u;
    // 0x110b00: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x110b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110b04: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x110b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x110b08: 0x4a0002ff  vnop
    ctx->pc = 0x110b08u;
    // NOP operation, no action needed for VU0
    // 0x110b0c: 0x4a0002ff  vnop
    ctx->pc = 0x110b0cu;
    // NOP operation, no action needed for VU0
    // 0x110b10: 0x4a0002ff  vnop
    ctx->pc = 0x110b10u;
    // NOP operation, no action needed for VU0
    // 0x110b14: 0x4a0002ff  vnop
    ctx->pc = 0x110b14u;
    // NOP operation, no action needed for VU0
    // 0x110b18: 0x4a0002ff  vnop
    ctx->pc = 0x110b18u;
    // NOP operation, no action needed for VU0
    // 0x110b1c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x110b1cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x110b20: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x110b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x110b24: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x110b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x110b28: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x110B28u;
    {
        const bool branch_taken_0x110b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110b28) {
            ctx->pc = 0x110B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110B28u;
            // 0x110b2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110B64u;
            goto label_110b64;
        }
    }
    ctx->pc = 0x110B30u;
    // 0x110b30: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x110b30u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110b34: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x110b34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110b38: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x110b38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x110b3c: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x110b3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x110b40: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x110b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110b44: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x110b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110b48: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x110b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x110b4c: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x110b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x110b50: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x110b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110b54: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x110b54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b58: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x110b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x110b5c: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x110b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x110b60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_110b64:
    // 0x110b64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x110b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110b68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x110B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B6Cu;
        // 0x110b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B74u;
}
