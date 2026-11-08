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

// Function: entry_001aada8
// Address: 0x1aada8 - 0x1aadb4
void entry_001aada8_0x1aada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aada8_0x1aada8");
#endif

    switch (ctx->pc) {
        case 0x1aadb0u: goto label_1aadb0;
        default: break;
    }

    ctx->pc = 0x1aada8u;

    // 0x1aada8: 0xc06aff2  jal         func_1ABFC8
    ctx->pc = 0x1AADA8u;
    SET_GPR_U32(ctx, 31, 0x1AADB0u);
    ctx->pc = 0x1AADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADA8u;
    // 0x1aadac: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABFC8u, 0x1AADA8u, 0x1AADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADB0u;
label_1aadb0:
    // 0x1aadb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aadb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1aadb4u;
}
