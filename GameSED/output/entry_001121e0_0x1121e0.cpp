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

// Function: entry_001121e0
// Address: 0x1121e0 - 0x112220
void entry_001121e0_0x1121e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001121e0_0x1121e0");
#endif

    switch (ctx->pc) {
        case 0x1121e8u: goto label_1121e8;
        default: break;
    }

    ctx->pc = 0x1121e0u;

    // 0x1121e0: 0xc061422  jal         func_185088
    ctx->pc = 0x1121E0u;
    SET_GPR_U32(ctx, 31, 0x1121E8u);
    ctx->pc = 0x1121E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121E0u;
    // 0x1121e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1121E0u, 0x1121E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121E8u;
label_1121e8:
    // 0x1121e8: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x1121e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1121ec: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1121ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1121f0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1121f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1121f4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1121f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1121f8: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1121f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1121fc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1121fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x112200: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x112200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x112204: 0x2463f720  addiu       $v1, $v1, -0x8E0
    ctx->pc = 0x112204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965024));
    // 0x112208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11220c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112210: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x112210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112214: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x112214u;
    {
        const bool branch_taken_0x112214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112214u;
        // 0x112218: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112214) {
            ctx->pc = 0x11227Cu;
            return;
        }
    }
    ctx->pc = 0x11221Cu;
    // 0x11221c: 0x0  nop
    ctx->pc = 0x11221cu;
    // NOP
    ctx->pc = 0x112220u;
}
