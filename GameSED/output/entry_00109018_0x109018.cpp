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

// Function: entry_00109018
// Address: 0x109018 - 0x109030
void entry_00109018_0x109018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109018_0x109018");
#endif

    switch (ctx->pc) {
        case 0x109028u: goto label_109028;
        default: break;
    }

    ctx->pc = 0x109018u;

    // 0x109018: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10901c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x10901cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109020: 0xc042170  jal         func_1085C0
    ctx->pc = 0x109020u;
    SET_GPR_U32(ctx, 31, 0x109028u);
    ctx->pc = 0x109024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109020u;
    // 0x109024: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x109020u, 0x109028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109028u;
label_109028:
    // 0x109028: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109028u;
    SET_GPR_U32(ctx, 31, 0x109030u);
    ctx->pc = 0x10902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109028u;
    // 0x10902c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109028u, 0x109030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109030u;
}
