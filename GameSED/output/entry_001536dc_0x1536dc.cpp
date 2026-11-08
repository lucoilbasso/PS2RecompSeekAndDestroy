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

// Function: entry_001536dc
// Address: 0x1536dc - 0x1536e4
void entry_001536dc_0x1536dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001536dc_0x1536dc");
#endif

    ctx->pc = 0x1536dcu;

    // 0x1536dc: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1536DCu;
    SET_GPR_U32(ctx, 31, 0x1536E4u);
    ctx->pc = 0x1536E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536DCu;
    // 0x1536e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1536DCu, 0x1536E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536E4u;
}
