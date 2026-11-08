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

// Function: entry_00143ddc
// Address: 0x143ddc - 0x143de4
void entry_00143ddc_0x143ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ddc_0x143ddc");
#endif

    ctx->pc = 0x143ddcu;

    // 0x143ddc: 0xc0523be  jal         func_148EF8
    ctx->pc = 0x143DDCu;
    SET_GPR_U32(ctx, 31, 0x143DE4u);
    ctx->pc = 0x143DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DDCu;
    // 0x143de0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148EF8u, 0x143DDCu, 0x143DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DE4u;
}
