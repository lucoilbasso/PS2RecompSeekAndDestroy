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

// Function: entry_001be4ec
// Address: 0x1be4ec - 0x1be500
void entry_001be4ec_0x1be4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be4ec_0x1be4ec");
#endif

    ctx->pc = 0x1be4ecu;

    // 0x1be4ec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1be4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4f4: 0x24c6dc40  addiu       $a2, $a2, -0x23C0
    ctx->pc = 0x1be4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958144));
    // 0x1be4f8: 0xc06fa2a  jal         func_1BE8A8
    ctx->pc = 0x1BE4F8u;
    SET_GPR_U32(ctx, 31, 0x1BE500u);
    ctx->pc = 0x1BE4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4F8u;
    // 0x1be4fc: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A8u, 0x1BE4F8u, 0x1BE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE500u;
}
