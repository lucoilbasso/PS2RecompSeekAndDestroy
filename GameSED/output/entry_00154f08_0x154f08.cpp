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

// Function: entry_00154f08
// Address: 0x154f08 - 0x154f28
void entry_00154f08_0x154f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154f08_0x154f08");
#endif

    ctx->pc = 0x154f08u;

    // 0x154f08: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x154f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x154f0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x154f0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x154f10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x154f10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154f14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154f14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154f1c: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x154F1Cu;
    {
        const bool branch_taken_0x154f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F1Cu;
        // 0x154f20: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f1c) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154F24u;
    // 0x154f24: 0x0  nop
    ctx->pc = 0x154f24u;
    // NOP
    ctx->pc = 0x154f28u;
}
