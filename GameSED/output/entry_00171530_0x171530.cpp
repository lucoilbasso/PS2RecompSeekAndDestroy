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

// Function: entry_00171530
// Address: 0x171530 - 0x171550
void entry_00171530_0x171530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171530_0x171530");
#endif

    switch (ctx->pc) {
        case 0x17153cu: goto label_17153c;
        case 0x17154cu: goto label_17154c;
        default: break;
    }

    ctx->pc = 0x171530u;

    // 0x171530: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x171530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171534: 0xc05c560  jal         func_171580
    ctx->pc = 0x171534u;
    SET_GPR_U32(ctx, 31, 0x17153Cu);
    ctx->pc = 0x171538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171534u;
    // 0x171538: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x171534u, 0x17153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17153Cu;
label_17153c:
    // 0x17153c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17153cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171540: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x171544: 0xc05c560  jal         func_171580
    ctx->pc = 0x171544u;
    SET_GPR_U32(ctx, 31, 0x17154Cu);
    ctx->pc = 0x171548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171544u;
    // 0x171548: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x171544u, 0x17154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17154Cu;
label_17154c:
    // 0x17154c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x17154cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171550u;
}
