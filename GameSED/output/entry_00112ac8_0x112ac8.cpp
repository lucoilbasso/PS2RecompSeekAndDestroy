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

// Function: entry_00112ac8
// Address: 0x112ac8 - 0x112ad8
void entry_00112ac8_0x112ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ac8_0x112ac8");
#endif

    ctx->pc = 0x112ac8u;

    // 0x112ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112acc: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0
    ctx->pc = 0x112accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    // 0x112ad0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112AD0u;
    SET_GPR_U32(ctx, 31, 0x112AD8u);
    ctx->pc = 0x112AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AD0u;
    // 0x112ad4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112AD0u, 0x112AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AD8u;
}
