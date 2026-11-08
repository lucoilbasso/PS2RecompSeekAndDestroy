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

// Function: entry_0014fa10
// Address: 0x14fa10 - 0x14fa20
void entry_0014fa10_0x14fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa10_0x14fa10");
#endif

    switch (ctx->pc) {
        case 0x14fa18u: goto label_14fa18;
        default: break;
    }

    ctx->pc = 0x14fa10u;

    // 0x14fa10: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x14FA10u;
    SET_GPR_U32(ctx, 31, 0x14FA18u);
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x14FA10u, 0x14FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA18u;
label_14fa18:
    // 0x14fa18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA18u;
    {
        const bool branch_taken_0x14fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA18u;
        // 0x14fa1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa18) {
            ctx->pc = 0x14FA2Cu;
            return;
        }
    }
    ctx->pc = 0x14FA20u;
}
