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

// Function: entry_0011af5c
// Address: 0x11af5c - 0x11af64
void entry_0011af5c_0x11af5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011af5c_0x11af5c");
#endif

    ctx->pc = 0x11af5cu;

label_11af5c:
    // 0x11af5c: 0xa0f809  jalr        $a1
label_11af60:
    if (ctx->pc == 0x11AF60u) {
        ctx->pc = 0x11AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF5Cu;
        // 0x11af60: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF64u;
        goto label_fallthrough_0x11af5c;
    }
    ctx->pc = 0x11AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11AF64u);
        ctx->pc = 0x11AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF5Cu;
        // 0x11af60: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF5Cu, 0x11AF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11af5c:
    ctx->pc = 0x11AF64u;
}
