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

// Function: entry_001762dc
// Address: 0x1762dc - 0x1762e4
void entry_001762dc_0x1762dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001762dc_0x1762dc");
#endif

    ctx->pc = 0x1762dcu;

    // 0x1762dc: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1762DCu;
    SET_GPR_U32(ctx, 31, 0x1762E4u);
    ctx->pc = 0x1762E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762DCu;
    // 0x1762e0: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1762DCu, 0x1762E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762E4u;
}
