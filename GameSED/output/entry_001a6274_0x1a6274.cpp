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

// Function: entry_001a6274
// Address: 0x1a6274 - 0x1a6288
void entry_001a6274_0x1a6274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6274_0x1a6274");
#endif

    switch (ctx->pc) {
        case 0x1a627cu: goto label_1a627c;
        default: break;
    }

    ctx->pc = 0x1a6274u;

    // 0x1a6274: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x1A6274u;
    SET_GPR_U32(ctx, 31, 0x1A627Cu);
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x1A6274u, 0x1A627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A627Cu;
label_1a627c:
    // 0x1a627c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A627Cu;
    {
        const bool branch_taken_0x1a627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A627Cu;
        // 0x1a6280: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a627c) {
            ctx->pc = 0x1A631Cu;
            return;
        }
    }
    ctx->pc = 0x1A6284u;
    // 0x1a6284: 0x0  nop
    ctx->pc = 0x1a6284u;
    // NOP
    ctx->pc = 0x1a6288u;
}
