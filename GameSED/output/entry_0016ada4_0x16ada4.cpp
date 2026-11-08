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

// Function: entry_0016ada4
// Address: 0x16ada4 - 0x16adb4
void entry_0016ada4_0x16ada4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ada4_0x16ada4");
#endif

    ctx->pc = 0x16ada4u;

    // 0x16ada4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16ADA4u;
    {
        const bool branch_taken_0x16ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADA4u;
        // 0x16ada8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ada4) {
            ctx->pc = 0x16ADC4u;
            return;
        }
    }
    ctx->pc = 0x16ADACu;
    // 0x16adac: 0xc04c6c6  jal         func_131B18
    ctx->pc = 0x16ADACu;
    SET_GPR_U32(ctx, 31, 0x16ADB4u);
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x16ADACu, 0x16ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADB4u;
}
