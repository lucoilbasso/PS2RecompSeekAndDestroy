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

// Function: entry_00170e98
// Address: 0x170e98 - 0x170eb0
void entry_00170e98_0x170e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e98_0x170e98");
#endif

    switch (ctx->pc) {
        case 0x170ea0u: goto label_170ea0;
        default: break;
    }

    ctx->pc = 0x170e98u;

    // 0x170e98: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x170E98u;
    SET_GPR_U32(ctx, 31, 0x170EA0u);
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x170E98u, 0x170EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EA0u;
label_170ea0:
    // 0x170ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ea4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x170ea8: 0xc05c560  jal         func_171580
    ctx->pc = 0x170EA8u;
    SET_GPR_U32(ctx, 31, 0x170EB0u);
    ctx->pc = 0x170EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EA8u;
    // 0x170eac: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x170EA8u, 0x170EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EB0u;
}
