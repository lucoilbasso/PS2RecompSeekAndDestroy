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

// Function: entry_00141334
// Address: 0x141334 - 0x141348
void entry_00141334_0x141334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141334_0x141334");
#endif

    switch (ctx->pc) {
        case 0x141340u: goto label_141340;
        default: break;
    }

    ctx->pc = 0x141334u;

    // 0x141334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141338: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x141338u;
    SET_GPR_U32(ctx, 31, 0x141340u);
    ctx->pc = 0x14133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141338u;
    // 0x14133c: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x141338u, 0x141340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141340u;
label_141340:
    // 0x141340: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x141340u;
    {
        const bool branch_taken_0x141340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141340u;
        // 0x141344: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141340) {
            ctx->pc = 0x14146Cu;
            return;
        }
    }
    ctx->pc = 0x141348u;
}
