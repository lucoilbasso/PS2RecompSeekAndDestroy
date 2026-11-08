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

// Function: entry_001209f0
// Address: 0x1209f0 - 0x120ac8
void entry_001209f0_0x1209f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001209f0_0x1209f0");
#endif

    switch (ctx->pc) {
        case 0x120a34u: goto label_120a34;
        default: break;
    }

    ctx->pc = 0x1209f0u;

    // 0x1209f0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1209f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1209f4: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1209f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1209f8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1209f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1209fc: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1209fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a00: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x120a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x120a04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120a08: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x120a08u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a0c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a10: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a14: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x120a18: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120a1c: 0xdac30000  lqc2        $vf3, 0x0($s6)
    ctx->pc = 0x120a1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x120a20: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a24: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120a2c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120A2Cu;
    SET_GPR_U32(ctx, 31, 0x120A34u);
    ctx->pc = 0x120A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A2Cu;
    // 0x120a30: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120A2Cu, 0x120A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A34u;
label_120a34:
    // 0x120a34: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x120a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x120a38: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x120a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120a3c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x120a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x120a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120a44: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x120a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x120a48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x120a4c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x120a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x120a50: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x120a50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x120a54: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120a58: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x120a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x120a5c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x120A5Cu;
    {
        const bool branch_taken_0x120a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A5Cu;
        // 0x120a60: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a5c) {
            ctx->pc = 0x120ADCu;
            return;
        }
    }
    ctx->pc = 0x120A64u;
    // 0x120a64: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120a64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120a68: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x120a68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120a6c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a70: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120a70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a74: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x120a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x120a78: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120a7c: 0xdbc30000  lqc2        $vf3, 0x0($fp)
    ctx->pc = 0x120a7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x120a80: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a84: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120a84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a88: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x120a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x120a8c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120a90: 0xdac30000  lqc2        $vf3, 0x0($s6)
    ctx->pc = 0x120a90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x120a94: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120a98: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120a98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120a9c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x120a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120aa0: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x120aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x120aa4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120aa8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x120aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x120aac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x120ab0: 0x2aa30015  slti        $v1, $s5, 0x15
    ctx->pc = 0x120ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x120ab4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x120ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x120ab8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x120abc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x120ABCu;
    {
        const bool branch_taken_0x120abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ABCu;
        // 0x120ac0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120abc) {
            ctx->pc = 0x120AC8u;
            return;
        }
    }
    ctx->pc = 0x120AC4u;
    // 0x120ac4: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x120ac4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    ctx->pc = 0x120ac8u;
}
