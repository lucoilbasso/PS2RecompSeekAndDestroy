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

// Function: entry_0010fa2c
// Address: 0x10fa2c - 0x10fa50
void entry_0010fa2c_0x10fa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa2c_0x10fa2c");
#endif

    switch (ctx->pc) {
        case 0x10fa40u: goto label_10fa40;
        default: break;
    }

    ctx->pc = 0x10fa2cu;

    // 0x10fa2c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x10fa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10fa30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x10fa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10fa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa38: 0xc067586  jal         func_19D618
    ctx->pc = 0x10FA38u;
    SET_GPR_U32(ctx, 31, 0x10FA40u);
    ctx->pc = 0x10FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA38u;
    // 0x10fa3c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x10FA38u, 0x10FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA40u;
label_10fa40:
    // 0x10fa40: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10fa40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fa44: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x10fa44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10fa48: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10fa48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10fa4c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x10fa50u;
}
