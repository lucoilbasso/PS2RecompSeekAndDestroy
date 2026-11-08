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

// Function: entry_0012d028
// Address: 0x12d028 - 0x12d050
void entry_0012d028_0x12d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d028_0x12d028");
#endif

    switch (ctx->pc) {
        case 0x12d044u: goto label_12d044;
        default: break;
    }

    ctx->pc = 0x12d028u;

    // 0x12d028: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x12d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x12d02c: 0x8ea50158  lw          $a1, 0x158($s5)
    ctx->pc = 0x12d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 344)));
    // 0x12d030: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d034: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12d034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x12d038: 0x24845e30  addiu       $a0, $a0, 0x5E30
    ctx->pc = 0x12d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24112));
    // 0x12d03c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12D03Cu;
    SET_GPR_U32(ctx, 31, 0x12D044u);
    ctx->pc = 0x12D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D03Cu;
    // 0x12d040: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12D03Cu, 0x12D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D044u;
label_12d044:
    // 0x12d044: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x12D044u;
    {
        const bool branch_taken_0x12d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D044u;
        // 0x12d048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d044) {
            ctx->pc = 0x12D17Cu;
            return;
        }
    }
    ctx->pc = 0x12D04Cu;
    // 0x12d04c: 0x0  nop
    ctx->pc = 0x12d04cu;
    // NOP
    ctx->pc = 0x12d050u;
}
