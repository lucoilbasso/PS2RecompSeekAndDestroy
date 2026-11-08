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

// Function: entry_001b12fc
// Address: 0x1b12fc - 0x1b130c
void entry_001b12fc_0x1b12fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b12fc_0x1b12fc");
#endif

    switch (ctx->pc) {
        case 0x1b1304u: goto label_1b1304;
        default: break;
    }

    ctx->pc = 0x1b12fcu;

    // 0x1b12fc: 0xc06c4ac  jal         func_1B12B0
    ctx->pc = 0x1B12FCu;
    SET_GPR_U32(ctx, 31, 0x1B1304u);
    ctx->pc = 0x1B12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12B0u, 0x1B12FCu, 0x1B1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1304u;
label_1b1304:
    // 0x1b1304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1304u;
    {
        const bool branch_taken_0x1b1304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1304u;
        // 0x1b1308: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1304) {
            ctx->pc = 0x1B1318u;
            return;
        }
    }
    ctx->pc = 0x1B130Cu;
}
