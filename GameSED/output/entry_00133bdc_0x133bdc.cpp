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

// Function: entry_00133bdc
// Address: 0x133bdc - 0x133c18
void entry_00133bdc_0x133bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133bdc_0x133bdc");
#endif

    switch (ctx->pc) {
        case 0x133be4u: goto label_133be4;
        default: break;
    }

    ctx->pc = 0x133bdcu;

    // 0x133bdc: 0xc061422  jal         func_185088
    ctx->pc = 0x133BDCu;
    SET_GPR_U32(ctx, 31, 0x133BE4u);
    ctx->pc = 0x133BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BDCu;
    // 0x133be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133BDCu, 0x133BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BE4u;
label_133be4:
    // 0x133be4: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x133be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x133be8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x133be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x133bec: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x133becu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x133bf0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x133bf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133bf4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x133bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133bf8: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x133bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133bfc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x133bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133c00: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x133c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133c04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x133c04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133c0c: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x133C0Cu;
    {
        const bool branch_taken_0x133c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c0c) {
            ctx->pc = 0x134090u;
            return;
        }
    }
    ctx->pc = 0x133C14u;
    // 0x133c14: 0x0  nop
    ctx->pc = 0x133c14u;
    // NOP
    ctx->pc = 0x133c18u;
}
