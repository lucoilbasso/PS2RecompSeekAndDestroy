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

// Function: entry_00111f60
// Address: 0x111f60 - 0x111f88
void entry_00111f60_0x111f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111f60_0x111f60");
#endif

    switch (ctx->pc) {
        case 0x111f68u: goto label_111f68;
        default: break;
    }

    ctx->pc = 0x111f60u;

    // 0x111f60: 0xc061422  jal         func_185088
    ctx->pc = 0x111F60u;
    SET_GPR_U32(ctx, 31, 0x111F68u);
    ctx->pc = 0x111F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F60u;
    // 0x111f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x111F60u, 0x111F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F68u;
label_111f68:
    // 0x111f68: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x111f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x111f6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x111f6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f70: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x111f70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111f74: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x111f74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111f78: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x111f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x111f7c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x111F7Cu;
    {
        const bool branch_taken_0x111f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F7Cu;
        // 0x111f80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f7c) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111F84u;
    // 0x111f84: 0x0  nop
    ctx->pc = 0x111f84u;
    // NOP
    ctx->pc = 0x111f88u;
}
