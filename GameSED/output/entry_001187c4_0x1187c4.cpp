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

// Function: entry_001187c4
// Address: 0x1187c4 - 0x1187dc
void entry_001187c4_0x1187c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001187c4_0x1187c4");
#endif

    ctx->pc = 0x1187c4u;

    // 0x1187c4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1187c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1187c8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1187c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1187cc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1187ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1187d0: 0x24a542e8  addiu       $a1, $a1, 0x42E8
    ctx->pc = 0x1187d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17128));
    // 0x1187d4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1187D4u;
    SET_GPR_U32(ctx, 31, 0x1187DCu);
    ctx->pc = 0x1187D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187D4u;
    // 0x1187d8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1187D4u, 0x1187DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187DCu;
}
