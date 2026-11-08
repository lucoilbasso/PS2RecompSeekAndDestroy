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

// Function: entry_0013a86c
// Address: 0x13a86c - 0x13a8a0
void entry_0013a86c_0x13a86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a86c_0x13a86c");
#endif

    switch (ctx->pc) {
        case 0x13a894u: goto label_13a894;
        default: break;
    }

    ctx->pc = 0x13a86cu;

    // 0x13a86c: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x13A86Cu;
    {
        const bool branch_taken_0x13a86c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A86Cu;
        // 0x13a870: 0x264200d0  addiu       $v0, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a86c) {
            ctx->pc = 0x13A8A0u;
            return;
        }
    }
    ctx->pc = 0x13A874u;
    // 0x13a874: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13a874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a878: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x13a878u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a87c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13a87cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a880: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a884: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a888: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13a888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a88c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13A88Cu;
    SET_GPR_U32(ctx, 31, 0x13A894u);
    ctx->pc = 0x13A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A88Cu;
    // 0x13a890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13A88Cu, 0x13A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A894u;
label_13a894:
    // 0x13a894: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13A894u;
    {
        const bool branch_taken_0x13a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A894u;
        // 0x13a898: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a894) {
            ctx->pc = 0x13A8B4u;
            return;
        }
    }
    ctx->pc = 0x13A89Cu;
    // 0x13a89c: 0x0  nop
    ctx->pc = 0x13a89cu;
    // NOP
    ctx->pc = 0x13a8a0u;
}
