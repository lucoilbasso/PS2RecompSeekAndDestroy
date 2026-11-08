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

// Function: entry_0010dc88
// Address: 0x10dc88 - 0x10dc98
void entry_0010dc88_0x10dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc88_0x10dc88");
#endif

    switch (ctx->pc) {
        case 0x10dc90u: goto label_10dc90;
        default: break;
    }

    ctx->pc = 0x10dc88u;

    // 0x10dc88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DC88u;
    SET_GPR_U32(ctx, 31, 0x10DC90u);
    ctx->pc = 0x10DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC88u;
    // 0x10dc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DC88u, 0x10DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC90u;
label_10dc90:
    // 0x10dc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10DC90u;
    {
        const bool branch_taken_0x10dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC90u;
        // 0x10dc94: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc90) {
            ctx->pc = 0x10DC9Cu;
            return;
        }
    }
    ctx->pc = 0x10DC98u;
}
