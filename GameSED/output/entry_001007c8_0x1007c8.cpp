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

// Function: entry_001007c8
// Address: 0x1007c8 - 0x1007d8
void entry_001007c8_0x1007c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007c8_0x1007c8");
#endif

    switch (ctx->pc) {
        case 0x1007d4u: goto label_1007d4;
        default: break;
    }

    ctx->pc = 0x1007c8u;

    // 0x1007c8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1007c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1007cc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1007CCu;
    SET_GPR_U32(ctx, 31, 0x1007D4u);
    ctx->pc = 0x1007D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007CCu;
    // 0x1007d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1007CCu, 0x1007D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1007D4u;
label_1007d4:
    // 0x1007d4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->pc = 0x1007d8u;
}
