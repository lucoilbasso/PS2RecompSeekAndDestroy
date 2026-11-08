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

// Function: entry_00155ff8
// Address: 0x155ff8 - 0x156000
void entry_00155ff8_0x155ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ff8_0x155ff8");
#endif

    ctx->pc = 0x155ff8u;

    // 0x155ff8: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x155FF8u;
    SET_GPR_U32(ctx, 31, 0x156000u);
    ctx->pc = 0x155FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FF8u;
    // 0x155ffc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x155FF8u, 0x156000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156000u;
}
