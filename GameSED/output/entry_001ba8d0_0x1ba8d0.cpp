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

// Function: entry_001ba8d0
// Address: 0x1ba8d0 - 0x1ba8e0
void entry_001ba8d0_0x1ba8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba8d0_0x1ba8d0");
#endif

    switch (ctx->pc) {
        case 0x1ba8dcu: goto label_1ba8dc;
        default: break;
    }

    ctx->pc = 0x1ba8d0u;

    // 0x1ba8d0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1ba8d4: 0xc06c694  jal         func_1B1A50
    ctx->pc = 0x1BA8D4u;
    SET_GPR_U32(ctx, 31, 0x1BA8DCu);
    ctx->pc = 0x1BA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8D4u;
    // 0x1ba8d8: 0x2484dac8  addiu       $a0, $a0, -0x2538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A50u, 0x1BA8D4u, 0x1BA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8DCu;
label_1ba8dc:
    // 0x1ba8dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ba8e0u;
}
