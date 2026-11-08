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

// Function: entry_001092b4
// Address: 0x1092b4 - 0x1092c4
void entry_001092b4_0x1092b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092b4_0x1092b4");
#endif

    ctx->pc = 0x1092b4u;

    // 0x1092b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1092b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1092b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092bc: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x1092BCu;
    SET_GPR_U32(ctx, 31, 0x1092C4u);
    ctx->pc = 0x1092C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092BCu;
    // 0x1092c0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x1092BCu, 0x1092C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092C4u;
}
