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

// Function: WPolySetPointRect__FP6WcPolyff
// Address: 0x18f478 - 0x18f59c
void WPolySetPointRect__FP6WcPolyff_0x18f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolySetPointRect__FP6WcPolyff_0x18f478");
#endif

    ctx->pc = 0x18f478u;

    // 0x18f478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f47c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x18f47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f480: 0x46006087  neg.s       $f2, $f12
    ctx->pc = 0x18f480u;
    ctx->f[2] = FPU_NEG_S(ctx->f[12]);
    // 0x18f484: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x18f484u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x18f488: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18f488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f48c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x18f48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18f490: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18f490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f494: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18f494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f498: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18f498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18f49c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18f49cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18f4a0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18f4a0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18f4a4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18f4a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18f4a8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f4ac: 0x94e6015a  lhu         $a2, 0x15A($a3)
    ctx->pc = 0x18f4acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 346)));
    // 0x18f4b0: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F4B0u;
    {
        const bool branch_taken_0x18f4b0 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x18f4b0) {
            ctx->pc = 0x18F4C8u;
            goto label_18f4c8;
        }
    }
    ctx->pc = 0x18F4B8u;
    // 0x18f4b8: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x18f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x18f4bc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18f4bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f4c0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18f4c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f4c4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18f4c8:
    // 0x18f4c8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x18f4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18f4cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18f4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f4d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18f4d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f4d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18f4d8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18f4d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18f4dc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18f4dcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18f4e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18f4e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18f4e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f4e8: 0x94e6015a  lhu         $a2, 0x15A($a3)
    ctx->pc = 0x18f4e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 346)));
    // 0x18f4ec: 0x28c60002  slti        $a2, $a2, 0x2
    ctx->pc = 0x18f4ecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18f4f0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F4F0u;
    {
        const bool branch_taken_0x18f4f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f4f0) {
            ctx->pc = 0x18F50Cu;
            goto label_18f50c;
        }
    }
    ctx->pc = 0x18F4F8u;
    // 0x18f4f8: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x18f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x18f4fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18f500: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18f500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f504: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18f504u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f508: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18f50c:
    // 0x18f50c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x18f50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18f510: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x18f510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f514: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18f514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f518: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18f518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18f51c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18f51cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18f520: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18f520u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18f524: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18f524u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18f528: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f52c: 0x94e6015a  lhu         $a2, 0x15A($a3)
    ctx->pc = 0x18f52cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 346)));
    // 0x18f530: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x18f530u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18f534: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F534u;
    {
        const bool branch_taken_0x18f534 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f534) {
            ctx->pc = 0x18F550u;
            goto label_18f550;
        }
    }
    ctx->pc = 0x18F53Cu;
    // 0x18f53c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x18f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x18f540: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x18f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18f544: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18f544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f548: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18f548u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f54c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18f550:
    // 0x18f550: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x18f550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18f554: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x18f554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f558: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18f558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f55c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18f560: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18f560u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18f564: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18f564u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18f568: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18f568u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18f56c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f570: 0x94e6015a  lhu         $a2, 0x15A($a3)
    ctx->pc = 0x18f570u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 346)));
    // 0x18f574: 0x28c60004  slti        $a2, $a2, 0x4
    ctx->pc = 0x18f574u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18f578: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F578u;
    {
        const bool branch_taken_0x18f578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f578) {
            ctx->pc = 0x18F594u;
            goto label_18f594;
        }
    }
    ctx->pc = 0x18F580u;
    // 0x18f580: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x18f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x18f584: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x18f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x18f588: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18f588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f58c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18f58cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f590: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f590u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18f594:
    // 0x18f594: 0x3e00008  jr          $ra
    ctx->pc = 0x18F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F594u;
        // 0x18f598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F59Cu;
}
