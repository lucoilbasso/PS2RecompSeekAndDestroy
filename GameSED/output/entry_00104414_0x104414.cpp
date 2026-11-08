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

// Function: entry_00104414
// Address: 0x104414 - 0x10441c
void entry_00104414_0x104414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104414_0x104414");
#endif

    ctx->pc = 0x104414u;

    // 0x104414: 0xc04110c  jal         func_104430
    ctx->pc = 0x104414u;
    SET_GPR_U32(ctx, 31, 0x10441Cu);
    ctx->pc = 0x104418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104414u;
    // 0x104418: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x104414u, 0x10441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10441Cu;
}
