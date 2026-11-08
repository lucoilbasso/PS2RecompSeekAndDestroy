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

// Function: entry_001ca4fc
// Address: 0x1ca4fc - 0x1ca508
void entry_001ca4fc_0x1ca4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca4fc_0x1ca4fc");
#endif

    switch (ctx->pc) {
        case 0x1ca504u: goto label_1ca504;
        default: break;
    }

    ctx->pc = 0x1ca4fcu;

    // 0x1ca4fc: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1CA4FCu;
    SET_GPR_U32(ctx, 31, 0x1CA504u);
    ctx->pc = 0x1CA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4FCu;
    // 0x1ca500: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1CA4FCu, 0x1CA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA504u;
label_1ca504:
    // 0x1ca504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ca508u;
}
