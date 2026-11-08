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

// Function: EffectSendCone__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x11ef90 - 0x11f2ec
void EffectSendCone__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendCone__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11ef90");
#endif

    switch (ctx->pc) {
        case 0x11f00cu: goto label_11f00c;
        case 0x11f030u: goto label_11f030;
        case 0x11f044u: goto label_11f044;
        case 0x11f050u: goto label_11f050;
        case 0x11f060u: goto label_11f060;
        case 0x11f11cu: goto label_11f11c;
        default: break;
    }

    ctx->pc = 0x11ef90u;

    // 0x11ef90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11ef94: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x11ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x11ef98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ef98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef9c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x11ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x11efa0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x11efa0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efa4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x11efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x11efa8: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x11efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x11efac: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x11efacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x11efb0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x11efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11efb4: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x11efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x11efb8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x11efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x11efbc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x11efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x11efc0: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x11efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x11efc4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x11efc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x11efc8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x11efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11efcc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11efccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11efd0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11efd0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11efd4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11efd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11efd8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x11efd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11efdc: 0xaf8089c8  sw          $zero, -0x7638($gp)
    ctx->pc = 0x11efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U32(ctx, 0));
    // 0x11efe0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x11efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x11efe4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EFE4u;
    {
        const bool branch_taken_0x11efe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFE4u;
        // 0x11efe8: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efe4) {
            ctx->pc = 0x11EFF4u;
            goto label_11eff4;
        }
    }
    ctx->pc = 0x11EFECu;
    // 0x11efec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11EFECu;
    {
        const bool branch_taken_0x11efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11efec) {
            ctx->pc = 0x11F00Cu;
            goto label_11f00c;
        }
    }
    ctx->pc = 0x11EFF4u;
label_11eff4:
    // 0x11eff4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11eff8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x11eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11effc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x11effcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x11f000: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x11f000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x11f004: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x11F004u;
    SET_GPR_U32(ctx, 31, 0x11F00Cu);
    ctx->pc = 0x11F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F004u;
    // 0x11f008: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x11F004u, 0x11F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F00Cu;
label_11f00c:
    // 0x11f00c: 0x12e000aa  beqz        $s7, . + 4 + (0xAA << 2)
    ctx->pc = 0x11F00Cu;
    {
        const bool branch_taken_0x11f00c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F00Cu;
        // 0x11f010: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f00c) {
            ctx->pc = 0x11F2B8u;
            goto label_11f2b8;
        }
    }
    ctx->pc = 0x11F014u;
    // 0x11f014: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x11f014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x11f018: 0x3c022022  lui         $v0, 0x2022
    ctx->pc = 0x11f018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8226 << 16));
    // 0x11f01c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11f020: 0x2455f640  addiu       $s5, $v0, -0x9C0
    ctx->pc = 0x11f020u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x11f024: 0x24be7cc0  addiu       $fp, $a1, 0x7CC0
    ctx->pc = 0x11f024u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
    // 0x11f028: 0x24d60790  addiu       $s6, $a2, 0x790
    ctx->pc = 0x11f028u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x11f02c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x11f02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11f030:
    // 0x11f030: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x11f030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11f034: 0x5220009d  beql        $s1, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x11F034u;
    {
        const bool branch_taken_0x11f034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f034) {
            ctx->pc = 0x11F038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F034u;
            // 0x11f038: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F2ACu;
            goto label_11f2ac;
        }
    }
    ctx->pc = 0x11F03Cu;
    // 0x11f03c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F03Cu;
    SET_GPR_U32(ctx, 31, 0x11F044u);
    ctx->pc = 0x11F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F03Cu;
    // 0x11f040: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F03Cu, 0x11F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F044u;
label_11f044:
    // 0x11f044: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x11f044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11f048: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F048u;
    SET_GPR_U32(ctx, 31, 0x11F050u);
    ctx->pc = 0x11F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F048u;
    // 0x11f04c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F048u, 0x11F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F050u;
label_11f050:
    // 0x11f050: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11f054: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x11f054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11f058: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F058u;
    SET_GPR_U32(ctx, 31, 0x11F060u);
    ctx->pc = 0x11F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F058u;
    // 0x11f05c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F058u, 0x11F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F060u;
label_11f060:
    // 0x11f060: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x11f060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x11f064: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x11f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x11f068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11f068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f06c: 0x32047fff  andi        $a0, $s0, 0x7FFF
    ctx->pc = 0x11f06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x11f070: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x11f070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x11f074: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x11f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x11f078: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x11f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f07c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f080: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11f080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11f084: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x11f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x11f088: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11f088u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11f08c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x11f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x11f090: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x11f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f094: 0x26102000  addiu       $s0, $s0, 0x2000
    ctx->pc = 0x11f094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x11f098: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x11f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f09c: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x11f09cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x11f0a0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x11f0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f0a4: 0xc6220084  lwc1        $f2, 0x84($s1)
    ctx->pc = 0x11f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f0a8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11f0a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11f0ac: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x11f0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x11f0b0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x11f0b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x11f0b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f0b8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x11f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11f0bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11f0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11f0c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11f0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11f0c4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x11f0c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11f0c8: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x11f0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x11f0cc: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x11f0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x11f0d0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11F0D0u;
    {
        const bool branch_taken_0x11f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D0u;
        // 0x11f0d4: 0xe6230080  swc1        $f3, 0x80($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0d0) {
            ctx->pc = 0x11F1E0u;
            goto label_11f1e0;
        }
    }
    ctx->pc = 0x11F0D8u;
    // 0x11f0d8: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x11f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x11f0dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11f0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f0e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x11f0e4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11f0e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f0e8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f0e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f0ec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f0ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f0f0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f0f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f0f4: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f0f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f0f8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f0f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f0fc: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f100: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f100u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f104: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f108: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x11f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f10c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x11f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11f110: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x11f110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11f114: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F114u;
    SET_GPR_U32(ctx, 31, 0x11F11Cu);
    ctx->pc = 0x11F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F114u;
    // 0x11f118: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F114u, 0x11F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F11Cu;
label_11f11c:
    // 0x11f11c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x11f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11f120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f124: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F124u;
    {
        const bool branch_taken_0x11f124 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F124u;
        // 0x11f128: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f124) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11F12Cu;
    // 0x11f12c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11f12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f130: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11f130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11f134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11F134u;
    {
        const bool branch_taken_0x11f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f134) {
            ctx->pc = 0x11F154u;
            goto label_11f154;
        }
    }
    ctx->pc = 0x11F13Cu;
    // 0x11f13c: 0x0  nop
    ctx->pc = 0x11f13cu;
    // NOP
label_11f140:
    // 0x11f140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11f144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11f144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11f148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11f148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f14c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11f14cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11f150: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11f150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_11f154:
    // 0x11f154: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x11f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f158: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x11f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f15c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11f15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11f160: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f164: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x11f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f168: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11f168u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11f16c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11f16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11f170: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11f170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11f174: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x11f174u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x11f178: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x11f178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x11f17c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x11f17cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11f180: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x11f180u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11f184: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11f184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11f188: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11f188u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f18c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f190: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f194: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f198: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f198u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f19c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f19cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f1a0: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f1a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f1a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f1a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f1a8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f1ac: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x11f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f1b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f1b4: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x11f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f1b8: 0xc6220078  lwc1        $f2, 0x78($s1)
    ctx->pc = 0x11f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f1bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11f1bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f1c0: 0xc6230074  lwc1        $f3, 0x74($s1)
    ctx->pc = 0x11f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f1c4: 0xe6210070  swc1        $f1, 0x70($s1)
    ctx->pc = 0x11f1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x11f1c8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f1cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11f1ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11f1d0: 0xe6220078  swc1        $f2, 0x78($s1)
    ctx->pc = 0x11f1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x11f1d4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f1d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11f1d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11f1dc: 0xe6230074  swc1        $f3, 0x74($s1)
    ctx->pc = 0x11f1dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_11f1e0:
    // 0x11f1e0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x11f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x11f1e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F1E4u;
    {
        const bool branch_taken_0x11f1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1E4u;
        // 0x11f1e8: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1e4) {
            ctx->pc = 0x11F1F8u;
            goto label_11f1f8;
        }
    }
    ctx->pc = 0x11F1ECu;
    // 0x11f1ec: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x11f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x11f1f0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F1F0u;
    {
        const bool branch_taken_0x11f1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F0u;
        // 0x11f1f4: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1f0) {
            ctx->pc = 0x11F24Cu;
            goto label_11f24c;
        }
    }
    ctx->pc = 0x11F1F8u;
label_11f1f8:
    // 0x11f1f8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x11f1f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f1fc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11f1fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f200: 0xda850010  lqc2        $vf5, 0x10($s4)
    ctx->pc = 0x11f200u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x11f204: 0xda860020  lqc2        $vf6, 0x20($s4)
    ctx->pc = 0x11f204u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x11f208: 0xda870030  lqc2        $vf7, 0x30($s4)
    ctx->pc = 0x11f208u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x11f20c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11f20cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f210: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11f210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f214: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11f214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f218: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11f218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11f21c: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x11f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11f220: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x11f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x11f224: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x11f224u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f228: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11f228u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f22c: 0xda850010  lqc2        $vf5, 0x10($s4)
    ctx->pc = 0x11f22cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x11f230: 0xda860020  lqc2        $vf6, 0x20($s4)
    ctx->pc = 0x11f230u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x11f234: 0xda870030  lqc2        $vf7, 0x30($s4)
    ctx->pc = 0x11f234u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x11f238: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11f238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f23c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11f23cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f240: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11f240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f244: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11f244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11f248: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x11f248u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_11f24c:
    // 0x11f24c: 0x2e62000a  sltiu       $v0, $s3, 0xA
    ctx->pc = 0x11f24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11f250: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F250u;
    {
        const bool branch_taken_0x11f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f250) {
            ctx->pc = 0x11F254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F250u;
            // 0x11f254: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F2ACu;
            goto label_11f2ac;
        }
    }
    ctx->pc = 0x11F258u;
    // 0x11f258: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11f25c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x11f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x11f260: 0x24427b80  addiu       $v0, $v0, 0x7B80
    ctx->pc = 0x11f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31616));
    // 0x11f264: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x11f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x11f268: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11f26c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x11f26cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f270: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x11f270u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x11f274: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11f278: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x11f278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x11f27c: 0x24427c20  addiu       $v0, $v0, 0x7C20
    ctx->pc = 0x11f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31776));
    // 0x11f280: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x11f280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11f284: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11f284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f288: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x11f288u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x11f28c: 0xde3021  addu        $a2, $a2, $fp
    ctx->pc = 0x11f28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x11f290: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x11f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x11f294: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11f294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f298: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x11f298u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x11f29c: 0x8f8489c8  lw          $a0, -0x7638($gp)
    ctx->pc = 0x11f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x11f2a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11f2a4: 0xaf8489c8  sw          $a0, -0x7638($gp)
    ctx->pc = 0x11f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U32(ctx, 4));
    // 0x11f2a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11f2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11f2ac:
    // 0x11f2ac: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x11f2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x11f2b0: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x11F2B0u;
    {
        const bool branch_taken_0x11f2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2B0u;
        // 0x11f2b4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2b0) {
            ctx->pc = 0x11F030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f030;
        }
    }
    ctx->pc = 0x11F2B8u;
label_11f2b8:
    // 0x11f2b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x11f2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f2bc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x11f2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11f2c0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x11f2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f2c4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x11f2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11f2c8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11f2c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f2cc: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x11f2ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11f2d0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x11f2d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f2d4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x11f2d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11f2d8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x11f2d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11f2dc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x11f2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x11f2e0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x11f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E4u;
        // 0x11f2e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F2ECu;
}
