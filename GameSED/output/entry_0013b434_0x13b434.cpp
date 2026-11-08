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

// Function: entry_0013b434
// Address: 0x13b434 - 0x13b464
void entry_0013b434_0x13b434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b434_0x13b434");
#endif

    ctx->pc = 0x13b434u;

    // 0x13b434: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13b434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13b438: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x13b438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x13b43c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13B43Cu;
    {
        const bool branch_taken_0x13b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B43Cu;
        // 0x13b440: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b43c) {
            ctx->pc = 0x13B418u;
            return;
        }
    }
    ctx->pc = 0x13B444u;
    // 0x13b444: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x13b448: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x13b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13b44c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x13b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13b450: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13b450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b45c: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x13B45Cu;
    SET_GPR_U32(ctx, 31, 0x13B464u);
    ctx->pc = 0x13B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B45Cu;
    // 0x13b460: 0xae4201e0  sw          $v0, 0x1E0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x13B45Cu, 0x13B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B464u;
}
