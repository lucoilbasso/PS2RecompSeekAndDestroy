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

// Function: entry_00112244
// Address: 0x112244 - 0x11227c
void entry_00112244_0x112244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112244_0x112244");
#endif

    switch (ctx->pc) {
        case 0x11224cu: goto label_11224c;
        default: break;
    }

    ctx->pc = 0x112244u;

    // 0x112244: 0xc061422  jal         func_185088
    ctx->pc = 0x112244u;
    SET_GPR_U32(ctx, 31, 0x11224Cu);
    ctx->pc = 0x112248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112244u;
    // 0x112248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x112244u, 0x11224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11224Cu;
label_11224c:
    // 0x11224c: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x11224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x112250: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x112254: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x112254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x112258: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x112258u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11225c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11225cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x112260: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x112260u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x112264: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x112264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x112268: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x112268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x11226c: 0x2442f720  addiu       $v0, $v0, -0x8E0
    ctx->pc = 0x11226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965024));
    // 0x112270: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x112270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112274: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x112274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11227cu;
}
