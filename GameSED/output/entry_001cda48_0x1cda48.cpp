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

// Function: entry_001cda48
// Address: 0x1cda48 - 0x1cda58
void entry_001cda48_0x1cda48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cda48_0x1cda48");
#endif

    ctx->pc = 0x1cda48u;

    // 0x1cda48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cda4c: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x1cda4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x1cda50: 0xc0735f4  jal         func_1CD7D0
    ctx->pc = 0x1CDA50u;
    SET_GPR_U32(ctx, 31, 0x1CDA58u);
    ctx->pc = 0x1CDA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA50u;
    // 0x1cda54: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD7D0u, 0x1CDA50u, 0x1CDA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA58u;
}
