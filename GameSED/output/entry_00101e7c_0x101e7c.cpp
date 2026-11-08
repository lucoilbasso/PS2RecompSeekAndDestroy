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

// Function: entry_00101e7c
// Address: 0x101e7c - 0x101e8c
void entry_00101e7c_0x101e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e7c_0x101e7c");
#endif

    switch (ctx->pc) {
        case 0x101e88u: goto label_101e88;
        default: break;
    }

    ctx->pc = 0x101e7cu;

    // 0x101e7c: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x101e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x101e80: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x101E80u;
    SET_GPR_U32(ctx, 31, 0x101E88u);
    ctx->pc = 0x101E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E80u;
    // 0x101e84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x101E80u, 0x101E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E88u;
label_101e88:
    // 0x101e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101e8cu;
}
