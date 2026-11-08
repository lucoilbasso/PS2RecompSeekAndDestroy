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

// Function: entry_001997a8
// Address: 0x1997a8 - 0x1997b4
void entry_001997a8_0x1997a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001997a8_0x1997a8");
#endif

    ctx->pc = 0x1997a8u;

    // 0x1997a8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1997ac: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1997ACu;
    SET_GPR_U32(ctx, 31, 0x1997B4u);
    ctx->pc = 0x1997B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997ACu;
    // 0x1997b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1997ACu, 0x1997B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997B4u;
}
