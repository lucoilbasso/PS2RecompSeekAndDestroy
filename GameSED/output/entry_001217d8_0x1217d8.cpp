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

// Function: entry_001217d8
// Address: 0x1217d8 - 0x1217f8
void entry_001217d8_0x1217d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001217d8_0x1217d8");
#endif

    switch (ctx->pc) {
        case 0x1217e4u: goto label_1217e4;
        case 0x1217f4u: goto label_1217f4;
        default: break;
    }

    ctx->pc = 0x1217d8u;

    // 0x1217d8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1217d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1217dc: 0xc04844a  jal         func_121128
    ctx->pc = 0x1217DCu;
    SET_GPR_U32(ctx, 31, 0x1217E4u);
    ctx->pc = 0x1217E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217DCu;
    // 0x1217e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1217DCu, 0x1217E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217E4u;
label_1217e4:
    // 0x1217e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1217e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217e8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1217e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1217ec: 0xc04844a  jal         func_121128
    ctx->pc = 0x1217ECu;
    SET_GPR_U32(ctx, 31, 0x1217F4u);
    ctx->pc = 0x1217F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217ECu;
    // 0x1217f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1217ECu, 0x1217F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217F4u;
label_1217f4:
    // 0x1217f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1217f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1217f8u;
}
