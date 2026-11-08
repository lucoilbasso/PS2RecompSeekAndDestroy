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

// Function: entry_00137260
// Address: 0x137260 - 0x1372a0
void entry_00137260_0x137260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137260_0x137260");
#endif

    switch (ctx->pc) {
        case 0x137268u: goto label_137268;
        default: break;
    }

    ctx->pc = 0x137260u;

    // 0x137260: 0xc061422  jal         func_185088
    ctx->pc = 0x137260u;
    SET_GPR_U32(ctx, 31, 0x137268u);
    ctx->pc = 0x137264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137260u;
    // 0x137264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137260u, 0x137268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137268u;
label_137268:
    // 0x137268: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x137268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x13726c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13726cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137270: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137274: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x137278: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x13727c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x13727cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x137280: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x137280u;
    {
        const bool branch_taken_0x137280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137280u;
        // 0x137284: 0x264200a0  addiu       $v0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137280) {
            ctx->pc = 0x1372ECu;
            return;
        }
    }
    ctx->pc = 0x137288u;
    // 0x137288: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137288u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13728c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x13728cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137290: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x137290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137294: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137298: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x137298u;
    {
        const bool branch_taken_0x137298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137298u;
        // 0x13729c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137298) {
            ctx->pc = 0x1372F0u;
            return;
        }
    }
    ctx->pc = 0x1372A0u;
}
