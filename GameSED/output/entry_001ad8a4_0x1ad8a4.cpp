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

// Function: entry_001ad8a4
// Address: 0x1ad8a4 - 0x1ad8b4
void entry_001ad8a4_0x1ad8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad8a4_0x1ad8a4");
#endif

    switch (ctx->pc) {
        case 0x1ad8acu: goto label_1ad8ac;
        default: break;
    }

    ctx->pc = 0x1ad8a4u;

    // 0x1ad8a4: 0xc06b820  jal         func_1AE080
    ctx->pc = 0x1AD8A4u;
    SET_GPR_U32(ctx, 31, 0x1AD8ACu);
    ctx->pc = 0x1AD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8A4u;
    // 0x1ad8a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE080u, 0x1AD8A4u, 0x1AD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8ACu;
label_1ad8ac:
    // 0x1ad8ac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AD8ACu;
    {
        const bool branch_taken_0x1ad8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8ACu;
        // 0x1ad8b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8ac) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD8B4u;
}
