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

// Function: entry_001ad8c4
// Address: 0x1ad8c4 - 0x1ad8d4
void entry_001ad8c4_0x1ad8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad8c4_0x1ad8c4");
#endif

    switch (ctx->pc) {
        case 0x1ad8ccu: goto label_1ad8cc;
        default: break;
    }

    ctx->pc = 0x1ad8c4u;

    // 0x1ad8c4: 0xc06b81c  jal         func_1AE070
    ctx->pc = 0x1AD8C4u;
    SET_GPR_U32(ctx, 31, 0x1AD8CCu);
    ctx->pc = 0x1AD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8C4u;
    // 0x1ad8c8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE070u, 0x1AD8C4u, 0x1AD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8CCu;
label_1ad8cc:
    // 0x1ad8cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD8CCu;
    {
        const bool branch_taken_0x1ad8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8CCu;
        // 0x1ad8d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8cc) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD8D4u;
}
