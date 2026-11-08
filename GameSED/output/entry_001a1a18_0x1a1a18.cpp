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

// Function: entry_001a1a18
// Address: 0x1a1a18 - 0x1a1a28
void entry_001a1a18_0x1a1a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a18_0x1a1a18");
#endif

    switch (ctx->pc) {
        case 0x1a1a20u: goto label_1a1a20;
        default: break;
    }

    ctx->pc = 0x1a1a18u;

    // 0x1a1a18: 0xc06bca8  jal         func_1AF2A0
    ctx->pc = 0x1A1A18u;
    SET_GPR_U32(ctx, 31, 0x1A1A20u);
    ctx->pc = 0x1AF2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2A0u, 0x1A1A18u, 0x1A1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A20u;
label_1a1a20:
    // 0x1a1a20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1A20u;
    {
        const bool branch_taken_0x1a1a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A20u;
        // 0x1a1a24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a20) {
            ctx->pc = 0x1A1A68u;
            return;
        }
    }
    ctx->pc = 0x1A1A28u;
}
