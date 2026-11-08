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

// Function: entry_00113574
// Address: 0x113574 - 0x113590
void entry_00113574_0x113574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113574_0x113574");
#endif

    switch (ctx->pc) {
        case 0x113580u: goto label_113580;
        case 0x113588u: goto label_113588;
        default: break;
    }

    ctx->pc = 0x113574u;

    // 0x113574: 0x8e240390  lw          $a0, 0x390($s1)
    ctx->pc = 0x113574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
    // 0x113578: 0xc060e88  jal         func_183A20
    ctx->pc = 0x113578u;
    SET_GPR_U32(ctx, 31, 0x113580u);
    ctx->pc = 0x11357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113578u;
    // 0x11357c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x113578u, 0x113580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113580u;
label_113580:
    // 0x113580: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x113580u;
    SET_GPR_U32(ctx, 31, 0x113588u);
    ctx->pc = 0x113584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113580u;
    // 0x113584: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x113580u, 0x113588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113588u;
label_113588:
    // 0x113588: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113588u;
    {
        const bool branch_taken_0x113588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113588u;
        // 0x11358c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113588) {
            ctx->pc = 0x11359Cu;
            return;
        }
    }
    ctx->pc = 0x113590u;
}
