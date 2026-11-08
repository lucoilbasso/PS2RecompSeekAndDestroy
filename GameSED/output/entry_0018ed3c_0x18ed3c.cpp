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

// Function: entry_0018ed3c
// Address: 0x18ed3c - 0x18ed44
void entry_0018ed3c_0x18ed3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed3c_0x18ed3c");
#endif

    ctx->pc = 0x18ed3cu;

    // 0x18ed3c: 0xc06343e  jal         func_18D0F8
    ctx->pc = 0x18ED3Cu;
    SET_GPR_U32(ctx, 31, 0x18ED44u);
    ctx->pc = 0x18ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED3Cu;
    // 0x18ed40: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0F8u, 0x18ED3Cu, 0x18ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED44u;
}
