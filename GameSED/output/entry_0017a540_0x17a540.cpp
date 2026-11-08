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

// Function: entry_0017a540
// Address: 0x17a540 - 0x17a548
void entry_0017a540_0x17a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a540_0x17a540");
#endif

    ctx->pc = 0x17a540u;

    // 0x17a540: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17A540u;
    SET_GPR_U32(ctx, 31, 0x17A548u);
    ctx->pc = 0x17A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A540u;
    // 0x17a544: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17A540u, 0x17A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A548u;
}
