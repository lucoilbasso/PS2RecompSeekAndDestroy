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

// Function: entry_00153d18
// Address: 0x153d18 - 0x153d60
void entry_00153d18_0x153d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153d18_0x153d18");
#endif

    ctx->pc = 0x153d18u;

    // 0x153d18: 0x8e23084c  lw          $v1, 0x84C($s1)
    ctx->pc = 0x153d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
    // 0x153d1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153d20: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x153d24: 0x24219aa8  addiu       $at, $at, -0x6558
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294941352));
    // 0x153d28: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x153d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x153d2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x153d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x153d30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x153d34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x153d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x153d38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x153d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x153d3c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x153d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x153d40: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x153d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x153d44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153d44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153d48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153d48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d50: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x153d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x153d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d58: 0xc056854  jal         func_15A150
    ctx->pc = 0x153D58u;
    SET_GPR_U32(ctx, 31, 0x153D60u);
    ctx->pc = 0x153D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D58u;
    // 0x153d5c: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153D58u, 0x153D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D60u;
}
