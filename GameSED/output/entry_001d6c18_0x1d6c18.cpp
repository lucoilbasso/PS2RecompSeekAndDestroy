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

// Function: entry_001d6c18
// Address: 0x1d6c18 - 0x1d6c30
void entry_001d6c18_0x1d6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6c18_0x1d6c18");
#endif

    switch (ctx->pc) {
        case 0x1d6c24u: goto label_1d6c24;
        default: break;
    }

    ctx->pc = 0x1d6c18u;

    // 0x1d6c18: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x1d6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1d6c1c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C24u);
    ctx->pc = 0x1D6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C1Cu;
    // 0x1d6c20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6C1Cu, 0x1D6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C24u;
label_1d6c24:
    // 0x1d6c24: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x1d6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x1d6c28: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1d6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x1d6c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d6c30u;
}
