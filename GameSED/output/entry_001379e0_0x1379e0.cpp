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

// Function: entry_001379e0
// Address: 0x1379e0 - 0x137a54
void entry_001379e0_0x1379e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001379e0_0x1379e0");
#endif

    switch (ctx->pc) {
        case 0x1379e8u: goto label_1379e8;
        default: break;
    }

    ctx->pc = 0x1379e0u;

    // 0x1379e0: 0xc061422  jal         func_185088
    ctx->pc = 0x1379E0u;
    SET_GPR_U32(ctx, 31, 0x1379E8u);
    ctx->pc = 0x1379E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379E0u;
    // 0x1379e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1379E0u, 0x1379E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379E8u;
label_1379e8:
    // 0x1379e8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1379ec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1379ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1379f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1379f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1379f4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1379f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1379f8: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1379f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1379fc: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1379fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x137a00: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x137a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137a04: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x137a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137a08: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x137a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137a0c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x137a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x137a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x137a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137a14: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x137a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x137a18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x137a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137a20: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x137A20u;
    {
        const bool branch_taken_0x137a20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A20u;
        // 0x137a24: 0x152140  sll         $a0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a20) {
            ctx->pc = 0x137A54u;
            return;
        }
    }
    ctx->pc = 0x137A28u;
    // 0x137a28: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x137a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x137a2c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x137a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x137a30: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x137a34: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x137a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a38: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x137a38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x137a3c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x137a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137a40: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x137a40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x137a44: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x137a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x137a48: 0x2aa2000f  slti        $v0, $s5, 0xF
    ctx->pc = 0x137a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x137a4c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x137a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x137a50: 0xa2a80a  movz        $s5, $a1, $v0
    ctx->pc = 0x137a50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
    ctx->pc = 0x137a54u;
}
