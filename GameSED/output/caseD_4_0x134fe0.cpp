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

// Function: caseD_4
// Address: 0x134fe0 - 0x135008
void caseD_4_0x134fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x134fe0");
#endif

    switch (ctx->pc) {
        case 0x134fe8u: goto label_134fe8;
        default: break;
    }

    ctx->pc = 0x134fe0u;

    // 0x134fe0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134FE0u;
    SET_GPR_U32(ctx, 31, 0x134FE8u);
    ctx->pc = 0x134FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FE0u;
    // 0x134fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134FE0u, 0x134FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FE8u;
label_134fe8:
    // 0x134fe8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x134fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fec: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x134fecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x134ff0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x134ff0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x134ff4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x134ff4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x134ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ffc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x134FFCu;
    {
        const bool branch_taken_0x134ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FFCu;
        // 0x135000: 0xe6000384  swc1        $f0, 0x384($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ffc) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x135004u;
    // 0x135004: 0x0  nop
    ctx->pc = 0x135004u;
    // NOP
    ctx->pc = 0x135008u;
}
