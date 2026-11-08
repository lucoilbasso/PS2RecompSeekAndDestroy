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

// Function: entry_00112a58
// Address: 0x112a58 - 0x112a68
void entry_00112a58_0x112a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a58_0x112a58");
#endif

    ctx->pc = 0x112a58u;

    // 0x112a58: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x112a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x112a5c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x112a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x112a60: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112A60u;
    SET_GPR_U32(ctx, 31, 0x112A68u);
    ctx->pc = 0x112A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A60u;
    // 0x112a64: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112A60u, 0x112A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A68u;
}
