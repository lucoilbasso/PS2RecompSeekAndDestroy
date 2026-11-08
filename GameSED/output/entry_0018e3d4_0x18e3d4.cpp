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

// Function: entry_0018e3d4
// Address: 0x18e3d4 - 0x18e3e0
void entry_0018e3d4_0x18e3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e3d4_0x18e3d4");
#endif

    ctx->pc = 0x18e3d4u;

    // 0x18e3d4: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x18e3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18e3d8: 0xc063930  jal         func_18E4C0
    ctx->pc = 0x18E3D8u;
    SET_GPR_U32(ctx, 31, 0x18E3E0u);
    ctx->pc = 0x18E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3D8u;
    // 0x18e3dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E4C0u, 0x18E3D8u, 0x18E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3E0u;
}
