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

// Function: entry_00176158
// Address: 0x176158 - 0x176160
void entry_00176158_0x176158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176158_0x176158");
#endif

    ctx->pc = 0x176158u;

    // 0x176158: 0xc05d85e  jal         func_176178
    ctx->pc = 0x176158u;
    SET_GPR_U32(ctx, 31, 0x176160u);
    ctx->pc = 0x17615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176158u;
    // 0x17615c: 0x2484d650  addiu       $a0, $a0, -0x29B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176178u, 0x176158u, 0x176160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176160u;
}
