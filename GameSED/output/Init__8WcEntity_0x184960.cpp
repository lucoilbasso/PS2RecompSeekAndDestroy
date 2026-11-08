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

// Function: Init__8WcEntity
// Address: 0x184960 - 0x184a90
void Init__8WcEntity_0x184960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8WcEntity_0x184960");
#endif

    switch (ctx->pc) {
        case 0x184a70u: goto label_184a70;
        case 0x184a80u: goto label_184a80;
        default: break;
    }

    ctx->pc = 0x184960u;

    // 0x184960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184964: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x184964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x184968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18496c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18496cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184970: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x184970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x184974: 0x2404e000  addiu       $a0, $zero, -0x2000
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
    // 0x184978: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x184978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18497c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x18497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x184980: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x184980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x184984: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x184984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x184988: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x184988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x18498c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x18498cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x184990: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x184990u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x184994: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x184994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x184998: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x184998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x18499c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18499cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1849a0: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x1849a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x1849a4: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1849a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1849a8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1849a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1849ac: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x1849acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1849b0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1849b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1849b4: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1849b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1849b8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1849b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1849bc: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x1849bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1849c0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1849c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1849c4: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1849c8: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1849c8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1849cc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1849ccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1849d0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1849d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1849d4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1849d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1849d8: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1849d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1849dc: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1849dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1849e0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1849e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1849e4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1849e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1849e8: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x1849e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1849ec: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1849ecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1849f0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1849f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1849f4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1849f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1849f8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1849f8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1849fc: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1849fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184a00: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x184a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184a04: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x184a04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x184a08: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x184a08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x184a0c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x184a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x184a10: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x184a10u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x184a14: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x184a14u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184a18: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x184a18u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x184a1c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x184a1cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x184a20: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x184a20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184a24: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x184a24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184a28: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x184a28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x184a2c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x184a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x184a30: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x184a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x184a34: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x184a38: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x184a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x184a3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a40: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x184a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x184a44: 0x248415a8  addiu       $a0, $a0, 0x15A8
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5544));
    // 0x184a48: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x184a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x184a4c: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x184a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x184a50: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x184a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x184a54: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x184a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x184a58: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x184a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x184a5c: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x184a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x184a60: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x184a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x184a64: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x184a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x184a68: 0xc068584  jal         func_1A1610
    ctx->pc = 0x184A68u;
    SET_GPR_U32(ctx, 31, 0x184A70u);
    ctx->pc = 0x184A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A68u;
    // 0x184a6c: 0xae000148  sw          $zero, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x184A68u, 0x184A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A70u;
label_184a70:
    // 0x184a70: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x184a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a78: 0xc068584  jal         func_1A1610
    ctx->pc = 0x184A78u;
    SET_GPR_U32(ctx, 31, 0x184A80u);
    ctx->pc = 0x184A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A78u;
    // 0x184a7c: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x184A78u, 0x184A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A80u;
label_184a80:
    // 0x184a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184a88: 0x3e00008  jr          $ra
    ctx->pc = 0x184A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A88u;
        // 0x184a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A90u;
}
