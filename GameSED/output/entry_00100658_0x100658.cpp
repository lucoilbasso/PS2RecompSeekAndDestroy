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

// Function: entry_00100658
// Address: 0x100658 - 0x100668
void entry_00100658_0x100658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100658_0x100658");
#endif

    switch (ctx->pc) {
        case 0x100664u: goto label_100664;
        default: break;
    }

    ctx->pc = 0x100658u;

    // 0x100658: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x100658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10065c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x10065Cu;
    SET_GPR_U32(ctx, 31, 0x100664u);
    ctx->pc = 0x100660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10065Cu;
    // 0x100660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10065Cu, 0x100664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100664u;
label_100664:
    // 0x100664: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x100664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->pc = 0x100668u;
}
