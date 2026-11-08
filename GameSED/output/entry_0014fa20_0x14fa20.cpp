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

// Function: entry_0014fa20
// Address: 0x14fa20 - 0x14fa2c
void entry_0014fa20_0x14fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa20_0x14fa20");
#endif

    switch (ctx->pc) {
        case 0x14fa28u: goto label_14fa28;
        default: break;
    }

    ctx->pc = 0x14fa20u;

    // 0x14fa20: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x14FA20u;
    SET_GPR_U32(ctx, 31, 0x14FA28u);
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x14FA20u, 0x14FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA28u;
label_14fa28:
    // 0x14fa28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14fa2cu;
}
