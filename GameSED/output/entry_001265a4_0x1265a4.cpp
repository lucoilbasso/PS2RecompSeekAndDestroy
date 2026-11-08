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

// Function: entry_001265a4
// Address: 0x1265a4 - 0x126658
void entry_001265a4_0x1265a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001265a4_0x1265a4");
#endif

    switch (ctx->pc) {
        case 0x1265c4u: goto label_1265c4;
        case 0x126614u: goto label_126614;
        default: break;
    }

    ctx->pc = 0x1265a4u;

    // 0x1265a4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1265a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1265a8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1265a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1265ac: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1265acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1265b0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1265b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1265b4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1265b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1265b8: 0xfa600000  sqc2        $vf0, 0x0($s3)
    ctx->pc = 0x1265b8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1265bc: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x1265BCu;
    SET_GPR_U32(ctx, 31, 0x1265C4u);
    ctx->pc = 0x1265C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265BCu;
    // 0x1265c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x1265BCu, 0x1265C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265C4u;
label_1265c4:
    // 0x1265c4: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1265c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1265c8: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1265C8u;
    {
        const bool branch_taken_0x1265c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1265c8) {
            ctx->pc = 0x1265CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265C8u;
            // 0x1265cc: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12668Cu;
            return;
        }
    }
    ctx->pc = 0x1265D0u;
    // 0x1265d0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1265d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1265d4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1265d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1265d8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1265d8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1265dc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1265dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1265e0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1265e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1265e4: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1265e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1265e8: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x1265e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1265ec: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x1265ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1265f0: 0x265101c0  addiu       $s1, $s2, 0x1C0
    ctx->pc = 0x1265f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x1265f4: 0x265001d0  addiu       $s0, $s2, 0x1D0
    ctx->pc = 0x1265f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x1265f8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1265f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1265fc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1265fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x126600: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x126600u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x126604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126608: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12660c: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x12660Cu;
    SET_GPR_U32(ctx, 31, 0x126614u);
    ctx->pc = 0x126610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12660Cu;
    // 0x126610: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x12660Cu, 0x126614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126614u;
label_126614:
    // 0x126614: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x126614u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126618: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x126618u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12661c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x12661cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x126620: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x126620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x126624: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x126624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x126628: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x126628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12662c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x12662cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x126630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126634: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x126634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x126638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12663c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12663cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126640: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x126640u;
    {
        const bool branch_taken_0x126640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126640) {
            ctx->pc = 0x126658u;
            return;
        }
    }
    ctx->pc = 0x126648u;
    // 0x126648: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x126648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12664c: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x12664cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126650: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x126650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x126654: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x126654u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x126658u;
}
