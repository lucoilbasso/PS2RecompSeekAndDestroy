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

// Function: entry_00121af4
// Address: 0x121af4 - 0x121b9c
void entry_00121af4_0x121af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121af4_0x121af4");
#endif

    switch (ctx->pc) {
        case 0x121b08u: goto label_121b08;
        default: break;
    }

    ctx->pc = 0x121af4u;

    // 0x121af4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121af8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121afc: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x121afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x121b00: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x121B00u;
    SET_GPR_U32(ctx, 31, 0x121B08u);
    ctx->pc = 0x121B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B00u;
    // 0x121b04: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x121B00u, 0x121B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B08u;
label_121b08:
    // 0x121b08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x121b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121b0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x121b0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121b10: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x121B10u;
    {
        const bool branch_taken_0x121b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B10u;
        // 0x121b14: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b10) {
            ctx->pc = 0x121B9Cu;
            return;
        }
    }
    ctx->pc = 0x121B18u;
    // 0x121b18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x121b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121b1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x121b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x121b20: 0xae0400f4  sw          $a0, 0xF4($s0)
    ctx->pc = 0x121b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 4));
    // 0x121b24: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x121b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x121b28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121b2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121b30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121b30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121b34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121b34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121b3c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x121b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121b40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121b44: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121b44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121b48: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121b48u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121b4c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121b4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121b54: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x121b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x121b58: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x121b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x121b5c: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x121b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x121b60: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x121b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x121b64: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x121b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x121b68: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x121b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x121b6c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x121b70: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x121b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x121b74: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x121b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x121b78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121b7c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x121b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x121b80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x121b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121b88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x121b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121b8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x121b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x121b90: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x121b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x121b94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x121b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121b98: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x121b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x121b9cu;
}
