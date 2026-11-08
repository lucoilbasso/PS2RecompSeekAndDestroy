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

// Function: entry_001bddcc
// Address: 0x1bddcc - 0x1bdde4
void entry_001bddcc_0x1bddcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bddcc_0x1bddcc");
#endif

    switch (ctx->pc) {
        case 0x1bddd4u: goto label_1bddd4;
        default: break;
    }

    ctx->pc = 0x1bddccu;

    // 0x1bddcc: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDDCCu;
    SET_GPR_U32(ctx, 31, 0x1BDDD4u);
    ctx->pc = 0x1BDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDCCu;
    // 0x1bddd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDDCCu, 0x1BDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDD4u;
label_1bddd4:
    // 0x1bddd4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bddd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bddd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdddc: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1BDDDCu;
    SET_GPR_U32(ctx, 31, 0x1BDDE4u);
    ctx->pc = 0x1BDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDDCu;
    // 0x1bdde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1BDDDCu, 0x1BDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE4u;
}
