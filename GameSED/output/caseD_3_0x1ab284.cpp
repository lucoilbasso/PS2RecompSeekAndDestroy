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

// Function: caseD_3
// Address: 0x1ab284 - 0x1ab2a4
void caseD_3_0x1ab284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ab284");
#endif

    switch (ctx->pc) {
        case 0x1ab29cu: goto label_1ab29c;
        default: break;
    }

    ctx->pc = 0x1ab284u;

    // 0x1ab284: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1ab284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1ab288: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1ab288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ab28c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB28Cu;
    {
        const bool branch_taken_0x1ab28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB28Cu;
        // 0x1ab290: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab28c) {
            ctx->pc = 0x1AB2A4u;
            return;
        }
    }
    ctx->pc = 0x1AB294u;
    // 0x1ab294: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB294u;
    SET_GPR_U32(ctx, 31, 0x1AB29Cu);
    ctx->pc = 0x1AB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB294u;
    // 0x1ab298: 0x24849690  addiu       $a0, $a0, -0x6970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB294u, 0x1AB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB29Cu;
label_1ab29c:
    // 0x1ab29c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1AB29Cu;
    {
        const bool branch_taken_0x1ab29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB29Cu;
        // 0x1ab2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab29c) {
            ctx->pc = 0x1AB3B0u;
            return;
        }
    }
    ctx->pc = 0x1AB2A4u;
}
