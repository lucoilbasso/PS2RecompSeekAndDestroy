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

// Function: entry_001a54ec
// Address: 0x1a54ec - 0x1a5510
void entry_001a54ec_0x1a54ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a54ec_0x1a54ec");
#endif

    switch (ctx->pc) {
        case 0x1a5504u: goto label_1a5504;
        default: break;
    }

    ctx->pc = 0x1a54ecu;

    // 0x1a54ec: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1a54ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a54f0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a54f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a54f4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a54f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a54f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a54fc: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A54FCu;
    SET_GPR_U32(ctx, 31, 0x1A5504u);
    ctx->pc = 0x1A5500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A54FCu;
    // 0x1a5500: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A54FCu, 0x1A5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5504u;
label_1a5504:
    // 0x1a5504: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a5504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5508: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a5508u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a550c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a550cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x1a5510u;
}
