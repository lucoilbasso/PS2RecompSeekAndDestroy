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

// Function: entry_0011b974
// Address: 0x11b974 - 0x11b980
void entry_0011b974_0x11b974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b974_0x11b974");
#endif

    switch (ctx->pc) {
        case 0x11b97cu: goto label_11b97c;
        default: break;
    }

    ctx->pc = 0x11b974u;

    // 0x11b974: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B974u;
    SET_GPR_U32(ctx, 31, 0x11B97Cu);
    ctx->pc = 0x11B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B974u;
    // 0x11b978: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B974u, 0x11B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B97Cu;
label_11b97c:
    // 0x11b97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11b980u;
}
