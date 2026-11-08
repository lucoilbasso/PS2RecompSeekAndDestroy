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

// Function: entry_0017b6ec
// Address: 0x17b6ec - 0x17b6f8
void entry_0017b6ec_0x17b6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b6ec_0x17b6ec");
#endif

    ctx->pc = 0x17b6ecu;

    // 0x17b6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6f0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17B6F0u;
    SET_GPR_U32(ctx, 31, 0x17B6F8u);
    ctx->pc = 0x17B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6F0u;
    // 0x17b6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17B6F0u, 0x17B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6F8u;
}
