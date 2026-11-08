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

// Function: BUtilityGetMoveAngle__FP9DVAngle32if
// Address: 0x19ddd0 - 0x19deec
void BUtilityGetMoveAngle__FP9DVAngle32if_0x19ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityGetMoveAngle__FP9DVAngle32if_0x19ddd0");
#endif

    ctx->pc = 0x19ddd0u;

    // 0x19ddd0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19ddd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ddd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ddd8: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x19ddd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19dddc: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19dddcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dde0: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x19dde0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x19dde4: 0x28c34000  slti        $v1, $a2, 0x4000
    ctx->pc = 0x19dde4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x19dde8: 0x24c28000  addiu       $v0, $a2, -0x8000
    ctx->pc = 0x19dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x19ddec: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x19ddecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x19ddf0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x19DDF0u;
    {
        const bool branch_taken_0x19ddf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDF0u;
        // 0x19ddf4: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddf0) {
            ctx->pc = 0x19DE70u;
            goto label_19de70;
        }
    }
    ctx->pc = 0x19DDF8u;
    // 0x19ddf8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19ddf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19ddfc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19ddfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19de00: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x19de00u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19de04: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x19de04u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19de08: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x19de08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x19de0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19de10: 0x64200a  movz        $a0, $v1, $a0
    ctx->pc = 0x19de10u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x19de14: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19de18: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19de18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19de1c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19de1cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19de20: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19de20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19de24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DE24u;
    {
        const bool branch_taken_0x19de24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE24u;
        // 0x19de28: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de24) {
            ctx->pc = 0x19DE30u;
            goto label_19de30;
        }
    }
    ctx->pc = 0x19DE2Cu;
    // 0x19de2c: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19de2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19de30:
    // 0x19de30: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19de30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19de34: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x19de34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19de38: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19de38u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19de3c: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19de3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19de40: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DE40u;
    {
        const bool branch_taken_0x19de40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE40u;
        // 0x19de44: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de40) {
            ctx->pc = 0x19DE4Cu;
            goto label_19de4c;
        }
    }
    ctx->pc = 0x19DE48u;
    // 0x19de48: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19de48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19de4c:
    // 0x19de4c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x19de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x19de50: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x19de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19de54: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19de54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19de58: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19de58u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19de5c: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19de5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19de60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DE60u;
    {
        const bool branch_taken_0x19de60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE60u;
        // 0x19de64: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de60) {
            ctx->pc = 0x19DE6Cu;
            goto label_19de6c;
        }
    }
    ctx->pc = 0x19DE68u;
    // 0x19de68: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19de68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19de6c:
    // 0x19de6c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x19de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_19de70:
    // 0x19de70: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x19DE70u;
    {
        const bool branch_taken_0x19de70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de70) {
            ctx->pc = 0x19DE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DE70u;
            // 0x19de74: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DED4u;
            goto label_19ded4;
        }
    }
    ctx->pc = 0x19DE78u;
    // 0x19de78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19de78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19de7c: 0x706518e8  pminw       $v1, $v1, $a1
    ctx->pc = 0x19de7cu;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x19de80: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19de84: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19de84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19de88: 0x52023  negu        $a0, $a1
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x19de8c: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x19de8cu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x19de90: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19de90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19de94: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19de94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19de98: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x19de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19de9c: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x19de9cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x19dea0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19dea4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x19dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x19dea8: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x19dea8u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x19deac: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19deacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19deb0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x19deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x19deb4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x19deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19deb8: 0x706518e8  pminw       $v1, $v1, $a1
    ctx->pc = 0x19deb8u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x19debc: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19dec0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x19dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x19dec4: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x19dec4u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x19dec8: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19decc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x19deccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x19ded0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_19ded4:
    // 0x19ded4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x19ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19ded8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x19ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19dedc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19dedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19dee0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19dee4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEE4u;
        // 0x19dee8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DEECu;
}
