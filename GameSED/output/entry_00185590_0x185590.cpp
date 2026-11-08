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

// Function: entry_00185590
// Address: 0x185590 - 0x1855a0
void entry_00185590_0x185590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185590_0x185590");
#endif

    switch (ctx->pc) {
        case 0x185598u: goto label_185598;
        default: break;
    }

    ctx->pc = 0x185590u;

    // 0x185590: 0xc061422  jal         func_185088
    ctx->pc = 0x185590u;
    SET_GPR_U32(ctx, 31, 0x185598u);
    ctx->pc = 0x185594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185590u;
    // 0x185594: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x185590u, 0x185598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185598u;
label_185598:
    // 0x185598: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x185598u;
    {
        const bool branch_taken_0x185598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185598) {
            ctx->pc = 0x1855E8u;
            return;
        }
    }
    ctx->pc = 0x1855A0u;
}
