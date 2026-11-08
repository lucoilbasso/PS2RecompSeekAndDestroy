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

// Function: entry_0014f5d4
// Address: 0x14f5d4 - 0x14f5dc
void entry_0014f5d4_0x14f5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f5d4_0x14f5d4");
#endif

    ctx->pc = 0x14f5d4u;

    // 0x14f5d4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x14F5D4u;
    SET_GPR_U32(ctx, 31, 0x14F5DCu);
    ctx->pc = 0x14F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5D4u;
    // 0x14f5d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x14F5D4u, 0x14F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F5DCu;
}
