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

// Function: entry_0013c048
// Address: 0x13c048 - 0x13c0d0
void entry_0013c048_0x13c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c048_0x13c048");
#endif

    switch (ctx->pc) {
        case 0x13c050u: goto label_13c050;
        case 0x13c094u: goto label_13c094;
        default: break;
    }

    ctx->pc = 0x13c048u;

    // 0x13c048: 0xc061422  jal         func_185088
    ctx->pc = 0x13C048u;
    SET_GPR_U32(ctx, 31, 0x13C050u);
    ctx->pc = 0x13C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C048u;
    // 0x13c04c: 0x263200e0  addiu       $s2, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13C048u, 0x13C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C050u;
label_13c050:
    // 0x13c050: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x13c054: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13c054u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c058: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13c058u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c05c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13c05cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13c060: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13c060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13c064: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13c064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13c068: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13c068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13c06c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13c06cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13c070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c074: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x13c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c078: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c07c: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x13C07Cu;
    {
        const bool branch_taken_0x13c07c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C07Cu;
        // 0x13c080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c07c) {
            ctx->pc = 0x13C19Cu;
            return;
        }
    }
    ctx->pc = 0x13C084u;
    // 0x13c084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c08c: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x13C08Cu;
    SET_GPR_U32(ctx, 31, 0x13C094u);
    ctx->pc = 0x13C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C08Cu;
    // 0x13c090: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x13C08Cu, 0x13C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C094u;
label_13c094:
    // 0x13c094: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x13c094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13c098: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x13c098u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x13c09c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c0a0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13C0A0u;
    {
        const bool branch_taken_0x13c0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c0a0) {
            ctx->pc = 0x13C0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C0A0u;
            // 0x13c0a4: 0xc6ac0010  lwc1        $f12, 0x10($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C0D0u;
            return;
        }
    }
    ctx->pc = 0x13C0A8u;
    // 0x13c0a8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x13c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0ac: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x13c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c0b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13c0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0b4: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x13C0B4u;
    {
        const bool branch_taken_0x13c0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0B4u;
        // 0x13c0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0b4) {
            ctx->pc = 0x13C19Cu;
            return;
        }
    }
    ctx->pc = 0x13C0BCu;
    // 0x13c0bc: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13c0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x13C0C4u;
    {
        const bool branch_taken_0x13c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0C4u;
        // 0x13c0c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0c4) {
            ctx->pc = 0x13C1A0u;
            return;
        }
    }
    ctx->pc = 0x13C0CCu;
    // 0x13c0cc: 0x0  nop
    ctx->pc = 0x13c0ccu;
    // NOP
    ctx->pc = 0x13c0d0u;
}
