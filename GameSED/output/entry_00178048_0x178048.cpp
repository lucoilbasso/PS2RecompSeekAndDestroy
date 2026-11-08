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

// Function: entry_00178048
// Address: 0x178048 - 0x178054
void entry_00178048_0x178048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178048_0x178048");
#endif

    switch (ctx->pc) {
        case 0x178050u: goto label_178050;
        default: break;
    }

    ctx->pc = 0x178048u;

    // 0x178048: 0xc05e1f8  jal         func_1787E0
    ctx->pc = 0x178048u;
    SET_GPR_U32(ctx, 31, 0x178050u);
    ctx->pc = 0x17804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178048u;
    // 0x17804c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1787E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1787E0u, 0x178048u, 0x178050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178050u;
label_178050:
    // 0x178050: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x178050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x178054u;
}
