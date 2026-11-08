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

// Function: caseD_f
// Address: 0x1351e8 - 0x1351fc
void caseD_f_0x1351e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1351e8");
#endif

    switch (ctx->pc) {
        case 0x1351f0u: goto label_1351f0;
        default: break;
    }

    ctx->pc = 0x1351e8u;

    // 0x1351e8: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1351E8u;
    SET_GPR_U32(ctx, 31, 0x1351F0u);
    ctx->pc = 0x1351ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351E8u;
    // 0x1351ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1351E8u, 0x1351F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351F0u;
label_1351f0:
    // 0x1351f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1351f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351f4: 0xc05562c  jal         func_1558B0
    ctx->pc = 0x1351F4u;
    SET_GPR_U32(ctx, 31, 0x1351FCu);
    ctx->pc = 0x1351F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351F4u;
    // 0x1351f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1558B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558B0u, 0x1351F4u, 0x1351FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351FCu;
}
