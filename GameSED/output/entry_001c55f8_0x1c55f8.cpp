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

// Function: entry_001c55f8
// Address: 0x1c55f8 - 0x1c5600
void entry_001c55f8_0x1c55f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c55f8_0x1c55f8");
#endif

    ctx->pc = 0x1c55f8u;

    // 0x1c55f8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C55F8u;
    SET_GPR_U32(ctx, 31, 0x1C5600u);
    ctx->pc = 0x1C55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55F8u;
    // 0x1c55fc: 0x8ec4ddfc  lw          $a0, -0x2204($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C55F8u, 0x1C5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5600u;
}
