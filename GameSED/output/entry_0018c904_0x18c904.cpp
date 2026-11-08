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

// Function: entry_0018c904
// Address: 0x18c904 - 0x18c910
void entry_0018c904_0x18c904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c904_0x18c904");
#endif

    switch (ctx->pc) {
        case 0x18c90cu: goto label_18c90c;
        default: break;
    }

    ctx->pc = 0x18c904u;

    // 0x18c904: 0xc063a2c  jal         func_18E8B0
    ctx->pc = 0x18C904u;
    SET_GPR_U32(ctx, 31, 0x18C90Cu);
    ctx->pc = 0x18C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C904u;
    // 0x18c908: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E8B0u, 0x18C904u, 0x18C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C90Cu;
label_18c90c:
    // 0x18c90c: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x18c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    ctx->pc = 0x18c910u;
}
