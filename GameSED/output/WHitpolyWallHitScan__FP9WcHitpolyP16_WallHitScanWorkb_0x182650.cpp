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

// Function: WHitpolyWallHitScan__FP9WcHitpolyP16_WallHitScanWorkb
// Address: 0x182650 - 0x1827f4
void WHitpolyWallHitScan__FP9WcHitpolyP16_WallHitScanWorkb_0x182650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyWallHitScan__FP9WcHitpolyP16_WallHitScanWorkb_0x182650");
#endif

    switch (ctx->pc) {
        case 0x1826e8u: goto label_1826e8;
        case 0x182780u: goto label_182780;
        case 0x1827dcu: goto label_1827dc;
        default: break;
    }

    ctx->pc = 0x182650u;

    // 0x182650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182654: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x182654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18265c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18265cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182660: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x182660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x182664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182668: 0x14c00019  bnez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x182668u;
    {
        const bool branch_taken_0x182668 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182668u;
        // 0x18266c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182668) {
            ctx->pc = 0x1826D0u;
            goto label_1826d0;
        }
    }
    ctx->pc = 0x182670u;
    // 0x182670: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x182670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x182674: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x182674u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182678: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x182678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18267c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x18267cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x182680: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x182680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182684: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x182684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182688: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x182688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18268c: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18268cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x182690: 0x4a0003bf  vwaitq
    ctx->pc = 0x182690u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x182694: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x182694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182698: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x182698u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18269c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1826a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1826a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1826a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1826a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1826a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1826A8u;
    {
        const bool branch_taken_0x1826a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1826ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826A8u;
        // 0x1826ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826a8) {
            ctx->pc = 0x1826B4u;
            goto label_1826b4;
        }
    }
    ctx->pc = 0x1826B0u;
    // 0x1826b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1826b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1826b4:
    // 0x1826b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1826B4u;
    {
        const bool branch_taken_0x1826b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1826b4) {
            ctx->pc = 0x1826D0u;
            goto label_1826d0;
        }
    }
    ctx->pc = 0x1826BCu;
    // 0x1826bc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1826bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1826c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1826c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1826C4u;
    {
        const bool branch_taken_0x1826c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1826C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826C4u;
        // 0x1826c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826c4) {
            ctx->pc = 0x1826D0u;
            goto label_1826d0;
        }
    }
    ctx->pc = 0x1826CCu;
    // 0x1826cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1826ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1826d0:
    // 0x1826d0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1826D0u;
    {
        const bool branch_taken_0x1826d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826D0u;
        // 0x1826d4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826d0) {
            ctx->pc = 0x182700u;
            goto label_182700;
        }
    }
    ctx->pc = 0x1826D8u;
    // 0x1826d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1826d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1826dc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1826dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1826e0: 0xc06084e  jal         func_182138
    ctx->pc = 0x1826E0u;
    SET_GPR_U32(ctx, 31, 0x1826E8u);
    ctx->pc = 0x1826E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826E0u;
    // 0x1826e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182138u, 0x1826E0u, 0x1826E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1826E8u;
label_1826e8:
    // 0x1826e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1826e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826ec: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x1826ECu;
    {
        const bool branch_taken_0x1826ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826ECu;
        // 0x1826f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826ec) {
            ctx->pc = 0x1827E0u;
            goto label_1827e0;
        }
    }
    ctx->pc = 0x1826F4u;
    // 0x1826f4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1826f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1826f8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1826F8u;
    {
        const bool branch_taken_0x1826f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826F8u;
        // 0x1826fc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826f8) {
            ctx->pc = 0x1827E0u;
            goto label_1827e0;
        }
    }
    ctx->pc = 0x182700u;
label_182700:
    // 0x182700: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x182700u;
    {
        const bool branch_taken_0x182700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182700u;
        // 0x182704: 0x26030030  addiu       $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182700) {
            ctx->pc = 0x182760u;
            goto label_182760;
        }
    }
    ctx->pc = 0x182708u;
    // 0x182708: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x182708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x18270c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x182710: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x182710u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182714: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x182714u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182718: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x182718u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18271c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18271cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x182720: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x182720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182724: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x182724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182728: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x182728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18272c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x18272cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182730: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x182730u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x182734: 0x4a0003bf  vwaitq
    ctx->pc = 0x182734u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x182738: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x182738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18273c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x18273cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x182740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182744: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x182744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182748: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x182748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18274c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18274cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x182750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x182754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x182754u;
    {
        const bool branch_taken_0x182754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182754u;
        // 0x182758: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182754) {
            ctx->pc = 0x182778u;
            goto label_182778;
        }
    }
    ctx->pc = 0x18275Cu;
    // 0x18275c: 0x0  nop
    ctx->pc = 0x18275cu;
    // NOP
label_182760:
    // 0x182760: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x182764: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x182764u;
    {
        const bool branch_taken_0x182764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182764) {
            ctx->pc = 0x182768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182764u;
            // 0x182768: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182788u;
            goto label_182788;
        }
    }
    ctx->pc = 0x18276Cu;
    // 0x18276c: 0xae100048  sw          $s0, 0x48($s0)
    ctx->pc = 0x18276cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 16));
    // 0x182770: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x182770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182778:
    // 0x182778: 0xc06084e  jal         func_182138
    ctx->pc = 0x182778u;
    SET_GPR_U32(ctx, 31, 0x182780u);
    ctx->pc = 0x182138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182138u, 0x182778u, 0x182780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182780u;
label_182780:
    // 0x182780: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x182780u;
    {
        const bool branch_taken_0x182780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182780u;
        // 0x182784: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182780) {
            ctx->pc = 0x1827E0u;
            goto label_1827e0;
        }
    }
    ctx->pc = 0x182788u;
label_182788:
    // 0x182788: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x182788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x18278c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x182790: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x182790u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182794: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x182794u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182798: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x182798u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18279c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18279cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1827a0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1827a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1827a4: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1827a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1827a8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1827a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1827ac: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1827acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1827b0: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1827b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1827b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1827b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1827b8: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x1827b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1827bc: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1827bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1827c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1827c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1827c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1827c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1827c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1827c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1827ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1827d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1827d4: 0xc06084e  jal         func_182138
    ctx->pc = 0x1827D4u;
    SET_GPR_U32(ctx, 31, 0x1827DCu);
    ctx->pc = 0x1827D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827D4u;
    // 0x1827d8: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182138u, 0x1827D4u, 0x1827DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1827DCu;
label_1827dc:
    // 0x1827dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1827dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1827e0:
    // 0x1827e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1827e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1827e4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1827e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1827e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1827ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1827ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1827F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827ECu;
        // 0x1827f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1827ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1827F4u;
}
