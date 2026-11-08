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

// Function: entry_001d1050
// Address: 0x1d1050 - 0x1d1060
void entry_001d1050_0x1d1050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1050_0x1d1050");
#endif

    switch (ctx->pc) {
        case 0x1d1058u: goto label_1d1058;
        default: break;
    }

    ctx->pc = 0x1d1050u;

    // 0x1d1050: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1D1050u;
    SET_GPR_U32(ctx, 31, 0x1D1058u);
    ctx->pc = 0x1D1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1050u;
    // 0x1d1054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1D1050u, 0x1D1058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1058u;
label_1d1058:
    // 0x1d1058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d105c: 0x222282d  daddu       $a1, $s1, $v0
    ctx->pc = 0x1d105cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x1d1060u;
}
