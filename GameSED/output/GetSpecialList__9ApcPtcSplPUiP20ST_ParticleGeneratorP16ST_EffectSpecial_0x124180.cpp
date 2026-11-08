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

// Function: GetSpecialList__9ApcPtcSplPUiP20ST_ParticleGeneratorP16ST_EffectSpecial
// Address: 0x124180 - 0x124374
void GetSpecialList__9ApcPtcSplPUiP20ST_ParticleGeneratorP16ST_EffectSpecial_0x124180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSpecialList__9ApcPtcSplPUiP20ST_ParticleGeneratorP16ST_EffectSpecial_0x124180");
#endif

    switch (ctx->pc) {
        case 0x124200u: goto label_124200;
        case 0x124214u: goto label_124214;
        case 0x1242c0u: goto label_1242c0;
        default: break;
    }

    ctx->pc = 0x124180u;

    // 0x124180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x124180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x124184: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124188: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x124188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12418c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x124190: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x124190u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124194: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x124194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x124198: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12419c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x12419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1241a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1241a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1241a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1241a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1241a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1241a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1241ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1241acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1241b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1241b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1241b4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1241b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1241b8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1241b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1241bc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1241bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1241c0: 0x8ee2015c  lw          $v0, 0x15C($s7)
    ctx->pc = 0x1241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 348)));
    // 0x1241c4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1241C4u;
    {
        const bool branch_taken_0x1241c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C4u;
        // 0x1241c8: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241c4) {
            ctx->pc = 0x12430Cu;
            goto label_12430c;
        }
    }
    ctx->pc = 0x1241CCu;
    // 0x1241cc: 0x5280005b  beql        $s4, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x1241CCu;
    {
        const bool branch_taken_0x1241cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241cc) {
            ctx->pc = 0x1241D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1241CCu;
            // 0x1241d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12433Cu;
            goto label_12433c;
        }
    }
    ctx->pc = 0x1241D4u;
    // 0x1241d4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1241d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1241d8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1241D8u;
    {
        const bool branch_taken_0x1241d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241D8u;
        // 0x1241dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241d8) {
            ctx->pc = 0x12430Cu;
            goto label_12430c;
        }
    }
    ctx->pc = 0x1241E0u;
    // 0x1241e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1241e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241e4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1241e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241e8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1241E8u;
    {
        const bool branch_taken_0x1241e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241E8u;
        // 0x1241ec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241e8) {
            ctx->pc = 0x1242D0u;
            goto label_1242d0;
        }
    }
    ctx->pc = 0x1241F0u;
    // 0x1241f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1241f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1241f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1241f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1241f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1241f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1241fc: 0x0  nop
    ctx->pc = 0x1241fcu;
    // NOP
label_124200:
    // 0x124200: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x124200u;
    {
        const bool branch_taken_0x124200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x124204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124200u;
        // 0x124204: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124200) {
            ctx->pc = 0x124308u;
            goto label_124308;
        }
    }
    ctx->pc = 0x124208u;
    // 0x124208: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x124208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12420c: 0xc048424  jal         func_121090
    ctx->pc = 0x12420Cu;
    SET_GPR_U32(ctx, 31, 0x124214u);
    ctx->pc = 0x124210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12420Cu;
    // 0x124210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12420Cu, 0x124214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124214u;
label_124214:
    // 0x124214: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x124214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
    // 0x124218: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x124218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x12421c: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x12421cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x124220: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x124220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x124224: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x124224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x124228: 0xe63400dc  swc1        $f20, 0xDC($s1)
    ctx->pc = 0x124228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x12422c: 0xe63500e0  swc1        $f21, 0xE0($s1)
    ctx->pc = 0x12422cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x124230: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x124230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x124234: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x124234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x124238: 0xe63400ec  swc1        $f20, 0xEC($s1)
    ctx->pc = 0x124238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x12423c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x12423cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x124240: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x124240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x124244: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x124244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x124248: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x124248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x12424c: 0xe6340104  swc1        $f20, 0x104($s1)
    ctx->pc = 0x12424cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x124250: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x124250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x124254: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x124254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x124258: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x124258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x12425c: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x12425cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x124260: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x124260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x124264: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x124264u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x124268: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x124268u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12426c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12426cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x124270: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x124270u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x124274: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x124274u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124278: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x124278u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12427c: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x12427cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x124280: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x124280u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x124284: 0x26220160  addiu       $v0, $s1, 0x160
    ctx->pc = 0x124284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x124288: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x124288u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12428c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12428cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x124290: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x124290u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x124294: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x124294u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x124298: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x124298u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12429c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x12429cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1242a0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1242a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1242a4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1242a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1242a8: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x1242a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x1242ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1242acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242b0: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x1242b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x1242b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1242b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242b8: 0xc048446  jal         func_121118
    ctx->pc = 0x1242B8u;
    SET_GPR_U32(ctx, 31, 0x1242C0u);
    ctx->pc = 0x1242BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242B8u;
    // 0x1242bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121118u, 0x1242B8u, 0x1242C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242C0u;
label_1242c0:
    // 0x1242c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1242c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1242c4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1242c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1242c8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1242C8u;
    {
        const bool branch_taken_0x1242c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1242CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242C8u;
        // 0x1242cc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242c8) {
            ctx->pc = 0x124200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124200;
        }
    }
    ctx->pc = 0x1242D0u;
label_1242d0:
    // 0x1242d0: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x1242d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x1242d4: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1242D4u;
    {
        const bool branch_taken_0x1242d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D4u;
        // 0x1242d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242d4) {
            ctx->pc = 0x12433Cu;
            goto label_12433c;
        }
    }
    ctx->pc = 0x1242DCu;
    // 0x1242dc: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1242dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1242e0: 0x8ee20160  lw          $v0, 0x160($s7)
    ctx->pc = 0x1242e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
    // 0x1242e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1242E4u;
    {
        const bool branch_taken_0x1242e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242e4) {
            ctx->pc = 0x1242E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1242E4u;
            // 0x1242e8: 0xaef20160  sw          $s2, 0x160($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 352), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124300u;
            goto label_124300;
        }
    }
    ctx->pc = 0x1242ECu;
    // 0x1242ec: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1242ECu;
    {
        const bool branch_taken_0x1242ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1242ec) {
            ctx->pc = 0x1242F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1242ECu;
            // 0x1242f0: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124318u;
            goto label_124318;
        }
    }
    ctx->pc = 0x1242F4u;
    // 0x1242f4: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1242f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x1242f8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1242f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x1242fc: 0xaef20160  sw          $s2, 0x160($s7)
    ctx->pc = 0x1242fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 352), GPR_U32(ctx, 18));
label_124300:
    // 0x124300: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x124300u;
    {
        const bool branch_taken_0x124300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124300u;
        // 0x124304: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124300) {
            ctx->pc = 0x12432Cu;
            goto label_12432c;
        }
    }
    ctx->pc = 0x124308u;
label_124308:
    // 0x124308: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x124308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_12430c:
    // 0x12430c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12430Cu;
    {
        const bool branch_taken_0x12430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12430Cu;
        // 0x124310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12430c) {
            ctx->pc = 0x12433Cu;
            goto label_12433c;
        }
    }
    ctx->pc = 0x124314u;
    // 0x124314: 0x0  nop
    ctx->pc = 0x124314u;
    // NOP
label_124318:
    // 0x124318: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x124318u;
    {
        const bool branch_taken_0x124318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124318u;
        // 0x12431c: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124318) {
            ctx->pc = 0x124324u;
            goto label_124324;
        }
    }
    ctx->pc = 0x124320u;
    // 0x124320: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x124320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_124324:
    // 0x124324: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x124324u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
    // 0x124328: 0xae560000  sw          $s6, 0x0($s2)
    ctx->pc = 0x124328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
label_12432c:
    // 0x12432c: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12432Cu;
    {
        const bool branch_taken_0x12432c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12432c) {
            ctx->pc = 0x124330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12432Cu;
            // 0x124330: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124334u;
            goto label_124334;
        }
    }
    ctx->pc = 0x124334u;
label_124334:
    // 0x124334: 0xaef1015c  sw          $s1, 0x15C($s7)
    ctx->pc = 0x124334u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 348), GPR_U32(ctx, 17));
    // 0x124338: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x124338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12433c:
    // 0x12433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124348: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12434c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12434cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124350: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x124350u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124354: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x124354u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124358: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x124358u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12435c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x12435cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124360: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x124360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124364: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x124364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124368: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x124368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12436c: 0x3e00008  jr          $ra
    ctx->pc = 0x12436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12436Cu;
        // 0x124370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12436Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124374u;
}
