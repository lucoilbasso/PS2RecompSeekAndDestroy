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

// Function: entry_0012efc8
// Address: 0x12efc8 - 0x12f0b8
void entry_0012efc8_0x12efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012efc8_0x12efc8");
#endif

    ctx->pc = 0x12efc8u;

    // 0x12efc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12efcc: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x12efccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x12efd0: 0xac820128  sw          $v0, 0x128($a0)
    ctx->pc = 0x12efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 2));
    // 0x12efd4: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x12efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x12efd8: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x12efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x12efdc: 0xa4800132  sh          $zero, 0x132($a0)
    ctx->pc = 0x12efdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 306), (uint16_t)GPR_U32(ctx, 0));
    // 0x12efe0: 0xa4800130  sh          $zero, 0x130($a0)
    ctx->pc = 0x12efe0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x12efe4: 0xa4800064  sh          $zero, 0x64($a0)
    ctx->pc = 0x12efe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x12efe8: 0xa4800066  sh          $zero, 0x66($a0)
    ctx->pc = 0x12efe8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x12efec: 0xa4800126  sh          $zero, 0x126($a0)
    ctx->pc = 0x12efecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 0));
    // 0x12eff0: 0xa4800124  sh          $zero, 0x124($a0)
    ctx->pc = 0x12eff0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x12eff4: 0xa48000c4  sh          $zero, 0xC4($a0)
    ctx->pc = 0x12eff4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 0));
    // 0x12eff8: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x12eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x12effc: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x12effcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x12f000: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x12f000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x12f004: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x12f004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x12f008: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x12f008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x12f00c: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x12f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x12f010: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x12f010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x12f014: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x12f014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x12f018: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x12f018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x12f01c: 0xa4800118  sh          $zero, 0x118($a0)
    ctx->pc = 0x12f01cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f020: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x12f020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x12f024: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x12f024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x12f028: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x12f028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x12f02c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x12f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x12f030: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x12f030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x12f034: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x12f034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
    // 0x12f038: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x12f038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x12f03c: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x12f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x12f040: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x12f040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
    // 0x12f044: 0xac80013c  sw          $zero, 0x13C($a0)
    ctx->pc = 0x12f044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 0));
    // 0x12f048: 0xa48000c6  sh          $zero, 0xC6($a0)
    ctx->pc = 0x12f048u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f04c: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x12f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
    // 0x12f050: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12f050u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12f054: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12f054u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f058: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12f058u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12f05c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12f05cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12f060: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x12f060u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12f064: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x12f064u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f068: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x12f068u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12f06c: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x12f06cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12f070: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f074: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x12f074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
    // 0x12f078: 0xac820108  sw          $v0, 0x108($a0)
    ctx->pc = 0x12f078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 2));
    // 0x12f07c: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x12f07cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f080: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x12f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x12f084: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12f084u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f088: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x12f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x12f08c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f090: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12f090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12f094: 0x24820074  addiu       $v0, $a0, 0x74
    ctx->pc = 0x12f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x12f098: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12f098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12f09c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f0a0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x12f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12f0a4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x12f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x12f0a8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x12f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x12f0ac: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x12f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x12f0b0: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x12f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x12f0b4: 0x0  nop
    ctx->pc = 0x12f0b4u;
    // NOP
    ctx->pc = 0x12f0b8u;
}
