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

// Function: EffectLazerInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x128ad0 - 0x128bc8
void EffectLazerInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x128ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLazerInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x128ad0");
#endif

    switch (ctx->pc) {
        case 0x128af4u: goto label_128af4;
        case 0x128b98u: goto label_128b98;
        default: break;
    }

    ctx->pc = 0x128ad0u;

    // 0x128ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128ad4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x128ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x128ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128ae8: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x128ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x128aec: 0xc04844a  jal         func_121128
    ctx->pc = 0x128AECu;
    SET_GPR_U32(ctx, 31, 0x128AF4u);
    ctx->pc = 0x128AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AECu;
    // 0x128af0: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x128AECu, 0x128AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AF4u;
label_128af4:
    // 0x128af4: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x128af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x128af8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x128AF8u;
    {
        const bool branch_taken_0x128af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AF8u;
        // 0x128afc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128af8) {
            ctx->pc = 0x128B38u;
            goto label_128b38;
        }
    }
    ctx->pc = 0x128B00u;
    // 0x128b00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x128b04: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x128b04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x128b08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x128b08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128b0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x128b0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128b14: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x128b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x128b18: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128b1c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x128b1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x128b20: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x128b20u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128b24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x128b24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128b2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128B2Cu;
    {
        const bool branch_taken_0x128b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B2Cu;
        // 0x128b30: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b2c) {
            ctx->pc = 0x128B48u;
            goto label_128b48;
        }
    }
    ctx->pc = 0x128B34u;
    // 0x128b34: 0x0  nop
    ctx->pc = 0x128b34u;
    // NOP
label_128b38:
    // 0x128b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128b40: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x128b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x128b44: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x128b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_128b48:
    // 0x128b48: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x128b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x128b4c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x128b4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x128b50: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x128b50u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128b54: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x128b54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128b5c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x128b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x128b60: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x128b64: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x128b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x128b68: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x128b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x128b6c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x128b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b70: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x128b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x128b74: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x128b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x128b78: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x128b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x128b7c: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x128b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x128b80: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x128b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x128b84: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x128b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x128b88: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x128b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x128b8c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x128b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x128b90: 0xc04844a  jal         func_121128
    ctx->pc = 0x128B90u;
    SET_GPR_U32(ctx, 31, 0x128B98u);
    ctx->pc = 0x128B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B90u;
    // 0x128b94: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x128B90u, 0x128B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B98u;
label_128b98:
    // 0x128b98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128B98u;
    {
        const bool branch_taken_0x128b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B98u;
        // 0x128b9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b98) {
            ctx->pc = 0x128BB4u;
            goto label_128bb4;
        }
    }
    ctx->pc = 0x128BA0u;
    // 0x128ba0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x128ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x128ba4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128BA4u;
    {
        const bool branch_taken_0x128ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x128BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BA4u;
        // 0x128ba8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ba4) {
            ctx->pc = 0x128BB8u;
            goto label_128bb8;
        }
    }
    ctx->pc = 0x128BACu;
    // 0x128bac: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x128bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x128bb0: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x128bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
label_128bb4:
    // 0x128bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128bb8:
    // 0x128bb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x128BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BC0u;
        // 0x128bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128BC8u;
}
