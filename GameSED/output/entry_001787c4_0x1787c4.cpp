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

// Function: entry_001787c4
// Address: 0x1787c4 - 0x1787d0
void entry_001787c4_0x1787c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001787c4_0x1787c4");
#endif

    ctx->pc = 0x1787c4u;

    // 0x1787c4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1787c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1787C8u;
    SET_GPR_U32(ctx, 31, 0x1787D0u);
    ctx->pc = 0x1787CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787C8u;
    // 0x1787cc: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1787C8u, 0x1787D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787D0u;
}
