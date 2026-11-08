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

// Function: entry_0017a378
// Address: 0x17a378 - 0x17a380
void entry_0017a378_0x17a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a378_0x17a378");
#endif

    ctx->pc = 0x17a378u;

    // 0x17a378: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x17A378u;
    SET_GPR_U32(ctx, 31, 0x17A380u);
    ctx->pc = 0x17A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A378u;
    // 0x17a37c: 0x8f848d0c  lw          $a0, -0x72F4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x17A378u, 0x17A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A380u;
}
