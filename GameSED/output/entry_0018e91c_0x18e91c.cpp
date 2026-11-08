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

// Function: entry_0018e91c
// Address: 0x18e91c - 0x18e934
void entry_0018e91c_0x18e91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e91c_0x18e91c");
#endif

    switch (ctx->pc) {
        case 0x18e930u: goto label_18e930;
        default: break;
    }

    ctx->pc = 0x18e91cu;

    // 0x18e91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E920u;
    {
        const bool branch_taken_0x18e920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E920u;
        // 0x18e924: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e920) {
            ctx->pc = 0x18E934u;
            return;
        }
    }
    ctx->pc = 0x18E928u;
    // 0x18e928: 0xc063c46  jal         func_18F118
    ctx->pc = 0x18E928u;
    SET_GPR_U32(ctx, 31, 0x18E930u);
    ctx->pc = 0x18F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F118u, 0x18E928u, 0x18E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E930u;
label_18e930:
    // 0x18e930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18e930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18e934u;
}
