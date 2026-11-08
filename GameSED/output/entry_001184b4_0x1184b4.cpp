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

// Function: entry_001184b4
// Address: 0x1184b4 - 0x1184bc
void entry_001184b4_0x1184b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001184b4_0x1184b4");
#endif

    ctx->pc = 0x1184b4u;

    // 0x1184b4: 0xc046144  jal         func_118510
    ctx->pc = 0x1184B4u;
    SET_GPR_U32(ctx, 31, 0x1184BCu);
    ctx->pc = 0x1184B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184B4u;
    // 0x1184b8: 0xa6110c30  sh          $s1, 0xC30($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 3120), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x1184B4u, 0x1184BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184BCu;
}
