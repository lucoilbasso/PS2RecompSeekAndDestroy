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

// Function: entry_0017fb28
// Address: 0x17fb28 - 0x17fb34
void entry_0017fb28_0x17fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fb28_0x17fb28");
#endif

    switch (ctx->pc) {
        case 0x17fb30u: goto label_17fb30;
        default: break;
    }

    ctx->pc = 0x17fb28u;

    // 0x17fb28: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x17FB28u;
    SET_GPR_U32(ctx, 31, 0x17FB30u);
    ctx->pc = 0x17FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB28u;
    // 0x17fb2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x17FB28u, 0x17FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB30u;
label_17fb30:
    // 0x17fb30: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x17fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x17fb34u;
}
