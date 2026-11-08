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

// Function: entry_00124200
// Address: 0x124200 - 0x1242d0
void entry_00124200_0x124200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124200_0x124200");
#endif

    switch (ctx->pc) {
        case 0x124214u: goto label_124214;
        case 0x1242c0u: goto label_1242c0;
        default: break;
    }

    ctx->pc = 0x124200u;

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
            return;
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
}
