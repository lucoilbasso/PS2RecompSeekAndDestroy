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

// Function: entry_00159668
// Address: 0x159668 - 0x159734
void entry_00159668_0x159668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159668_0x159668");
#endif

    switch (ctx->pc) {
        case 0x1596d4u: goto label_1596d4;
        case 0x1596e4u: goto label_1596e4;
        default: break;
    }

    ctx->pc = 0x159668u;

    // 0x159668: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x15966c: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x15966cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159670: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159670u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159674: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159674u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x159678: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159678u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15967c: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x15967cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x159680: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x159680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x159684: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x159684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x159688: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x159688u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x15968c: 0x26a603f0  addiu       $a2, $s5, 0x3F0
    ctx->pc = 0x15968cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
    // 0x159690: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x159690u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159694: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159698: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159698u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15969c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x15969cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1596a0: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x1596a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1596a4: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x1596a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1596a8: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x1596a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1596ac: 0xf8c80000  sqc2        $vf8, 0x0($a2)
    ctx->pc = 0x1596acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1596b0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1596b4: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x1596B4u;
    {
        const bool branch_taken_0x1596b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596B4u;
        // 0x1596b8: 0xc6140014  lwc1        $f20, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596b4) {
            ctx->pc = 0x1598F0u;
            return;
        }
    }
    ctx->pc = 0x1596BCu;
    // 0x1596bc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1596bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1596c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1596c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596c4: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x1596c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1596c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1596c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1596cc: 0xc060bca  jal         func_182F28
    ctx->pc = 0x1596CCu;
    SET_GPR_U32(ctx, 31, 0x1596D4u);
    ctx->pc = 0x1596D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596CCu;
    // 0x1596d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182F28u, 0x1596CCu, 0x1596D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596D4u;
label_1596d4:
    // 0x1596d4: 0x50400105  beql        $v0, $zero, . + 4 + (0x105 << 2)
    ctx->pc = 0x1596D4u;
    {
        const bool branch_taken_0x1596d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1596d4) {
            ctx->pc = 0x1596D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1596D4u;
            // 0x1596d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159AECu;
            return;
        }
    }
    ctx->pc = 0x1596DCu;
    // 0x1596dc: 0xc0609fe  jal         func_1827F8
    ctx->pc = 0x1596DCu;
    SET_GPR_U32(ctx, 31, 0x1596E4u);
    ctx->pc = 0x1596E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596DCu;
    // 0x1596e0: 0x8ef00160  lw          $s0, 0x160($s7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x1596DCu, 0x1596E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596E4u;
label_1596e4:
    // 0x1596e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1596e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596e8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1596e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1596ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596f0: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1596f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1596f4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1596f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1596f8: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x1596f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1596fc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1596FCu;
    {
        const bool branch_taken_0x1596fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596FCu;
        // 0x159700: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596fc) {
            ctx->pc = 0x159734u;
            return;
        }
    }
    ctx->pc = 0x159704u;
    // 0x159704: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x159704u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159708: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159708u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x15970c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x15970cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x159710: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x159710u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x159714: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x159714u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x159718: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159718u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x15971c: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x15971cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x159720: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x159720u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x159724: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x159724u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x159728: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159728u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x15972c: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x15972cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x159730: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x159730u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    ctx->pc = 0x159734u;
}
