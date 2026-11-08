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

// Function: entry_001c5e18
// Address: 0x1c5e18 - 0x1c5e20
void entry_001c5e18_0x1c5e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5e18_0x1c5e18");
#endif

    ctx->pc = 0x1c5e18u;

    // 0x1c5e18: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C5E18u;
    SET_GPR_U32(ctx, 31, 0x1C5E20u);
    ctx->pc = 0x1C5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E18u;
    // 0x1c5e1c: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C5E18u, 0x1C5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E20u;
}
