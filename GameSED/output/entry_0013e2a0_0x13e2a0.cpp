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

// Function: entry_0013e2a0
// Address: 0x13e2a0 - 0x13e338
void entry_0013e2a0_0x13e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e2a0_0x13e2a0");
#endif

    ctx->pc = 0x13e2a0u;

    // 0x13e2a0: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x13e2a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13e2a4: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x13e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x13e2a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13e2ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13e2b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13e2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e2b4: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x13e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x13e2b8: 0x96a40006  lhu         $a0, 0x6($s5)
    ctx->pc = 0x13e2b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x13e2bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x13e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13e2c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13e2c4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x13e2c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e2c8: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x13e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x13e2cc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x13e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13e2d0: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x13e2d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13e2d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13e2d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13e2dc: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x13e2dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13e2e0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13e2e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13e2e8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x13e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x13e2ec: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x13e2ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x13e2f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e2f4: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x13e2f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13e2f8: 0x24a5ebb0  addiu       $a1, $a1, -0x1450
    ctx->pc = 0x13e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962096));
    // 0x13e2fc: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x13e2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x13e300: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x13e304: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x13e304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x13e308: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x13e308u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x13e30c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x13e30cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x13e310: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x13e310u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x13e314: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x13e314u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x13e318: 0xd8740000  lqc2        $vf20, 0x0($v1)
    ctx->pc = 0x13e318u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x13e31c: 0xd8750010  lqc2        $vf21, 0x10($v1)
    ctx->pc = 0x13e31cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x13e320: 0xd8760020  lqc2        $vf22, 0x20($v1)
    ctx->pc = 0x13e320u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x13e324: 0xd8770030  lqc2        $vf23, 0x30($v1)
    ctx->pc = 0x13e324u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x13e328: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e32c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x13e32cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e330: 0x2e0682d  daddu       $t5, $s7, $zero
    ctx->pc = 0x13e330u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e334: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x13e334u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    ctx->pc = 0x13e338u;
}
