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

// Function: entry_00151f60
// Address: 0x151f60 - 0x151fa0
void entry_00151f60_0x151f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151f60_0x151f60");
#endif

    ctx->pc = 0x151f60u;

    // 0x151f60: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x151f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151f64: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x151f64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151f68: 0x4a0002ff  vnop
    ctx->pc = 0x151f68u;
    // NOP operation, no action needed for VU0
    // 0x151f6c: 0x4a0002ff  vnop
    ctx->pc = 0x151f6cu;
    // NOP operation, no action needed for VU0
    // 0x151f70: 0x4a0002ff  vnop
    ctx->pc = 0x151f70u;
    // NOP operation, no action needed for VU0
    // 0x151f74: 0x4a0002ff  vnop
    ctx->pc = 0x151f74u;
    // NOP operation, no action needed for VU0
    // 0x151f78: 0x4a0002ff  vnop
    ctx->pc = 0x151f78u;
    // NOP operation, no action needed for VU0
    // 0x151f7c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x151f7cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x151f80: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x151f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x151f84: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x151f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x151f88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151F88u;
    {
        const bool branch_taken_0x151f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F88u;
        // 0x151f8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f88) {
            ctx->pc = 0x151FA0u;
            return;
        }
    }
    ctx->pc = 0x151F90u;
    // 0x151f90: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x151f94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f98: 0xc0618c2  jal         func_186308
    ctx->pc = 0x151F98u;
    SET_GPR_U32(ctx, 31, 0x151FA0u);
    ctx->pc = 0x151F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F98u;
    // 0x151f9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x151F98u, 0x151FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FA0u;
}
