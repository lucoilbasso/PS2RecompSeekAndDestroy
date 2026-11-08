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

// Function: entry_00178db8
// Address: 0x178db8 - 0x178dc0
void entry_00178db8_0x178db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178db8_0x178db8");
#endif

    ctx->pc = 0x178db8u;

    // 0x178db8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x178DB8u;
    SET_GPR_U32(ctx, 31, 0x178DC0u);
    ctx->pc = 0x178DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DB8u;
    // 0x178dbc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178DB8u, 0x178DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DC0u;
}
