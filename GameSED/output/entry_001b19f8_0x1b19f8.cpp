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

// Function: entry_001b19f8
// Address: 0x1b19f8 - 0x1b1a08
void entry_001b19f8_0x1b19f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b19f8_0x1b19f8");
#endif

    switch (ctx->pc) {
        case 0x1b1a00u: goto label_1b1a00;
        default: break;
    }

    ctx->pc = 0x1b19f8u;

    // 0x1b19f8: 0xc06c4a4  jal         func_1B1290
    ctx->pc = 0x1B19F8u;
    SET_GPR_U32(ctx, 31, 0x1B1A00u);
    ctx->pc = 0x1B19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19F8u;
    // 0x1b19fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B19F8u, 0x1B1A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A00u;
label_1b1a00:
    // 0x1b1a00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1A00u;
    {
        const bool branch_taken_0x1b1a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A00u;
        // 0x1b1a04: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a00) {
            ctx->pc = 0x1B1A1Cu;
            return;
        }
    }
    ctx->pc = 0x1B1A08u;
}
