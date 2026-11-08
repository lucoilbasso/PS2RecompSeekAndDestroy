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

// Function: entry_00161430
// Address: 0x161430 - 0x161448
void entry_00161430_0x161430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161430_0x161430");
#endif

    switch (ctx->pc) {
        case 0x161440u: goto label_161440;
        default: break;
    }

    ctx->pc = 0x161430u;

    // 0x161430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161434: 0x24a56ea8  addiu       $a1, $a1, 0x6EA8
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28328));
    // 0x161438: 0xc068186  jal         func_1A0618
    ctx->pc = 0x161438u;
    SET_GPR_U32(ctx, 31, 0x161440u);
    ctx->pc = 0x16143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161438u;
    // 0x16143c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x161438u, 0x161440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161440u;
label_161440:
    // 0x161440: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x161440u;
    {
        const bool branch_taken_0x161440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161440u;
        // 0x161444: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161440) {
            ctx->pc = 0x16146Cu;
            return;
        }
    }
    ctx->pc = 0x161448u;
}
