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

// Function: entry_001571f4
// Address: 0x1571f4 - 0x157204
void entry_001571f4_0x1571f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001571f4_0x1571f4");
#endif

    ctx->pc = 0x1571f4u;

    // 0x1571f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1571f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1571f8: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1571f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1571fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1571FCu;
    SET_GPR_U32(ctx, 31, 0x157204u);
    ctx->pc = 0x157200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571FCu;
    // 0x157200: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1571FCu, 0x157204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157204u;
}
