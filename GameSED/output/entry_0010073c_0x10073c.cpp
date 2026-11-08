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

// Function: entry_0010073c
// Address: 0x10073c - 0x10074c
void entry_0010073c_0x10073c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010073c_0x10073c");
#endif

    switch (ctx->pc) {
        case 0x100748u: goto label_100748;
        default: break;
    }

    ctx->pc = 0x10073cu;

    // 0x10073c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x10073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x100740: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100740u;
    SET_GPR_U32(ctx, 31, 0x100748u);
    ctx->pc = 0x100744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100740u;
    // 0x100744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100740u, 0x100748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100748u;
label_100748:
    // 0x100748: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x100748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x10074cu;
}
