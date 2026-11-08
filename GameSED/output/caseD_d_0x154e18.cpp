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

// Function: caseD_d
// Address: 0x154e18 - 0x154e40
void caseD_d_0x154e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x154e18");
#endif

    switch (ctx->pc) {
        case 0x154e20u: goto label_154e20;
        case 0x154e2cu: goto label_154e2c;
        default: break;
    }

    ctx->pc = 0x154e18u;

    // 0x154e18: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154E18u;
    SET_GPR_U32(ctx, 31, 0x154E20u);
    ctx->pc = 0x154E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E18u;
    // 0x154e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154E18u, 0x154E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E20u;
label_154e20:
    // 0x154e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e24: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x154E24u;
    SET_GPR_U32(ctx, 31, 0x154E2Cu);
    ctx->pc = 0x154E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E24u;
    // 0x154e28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x154E24u, 0x154E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E2Cu;
label_154e2c:
    // 0x154e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154E30u;
    {
        const bool branch_taken_0x154e30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x154E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E30u;
        // 0x154e34: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e30) {
            ctx->pc = 0x154E40u;
            return;
        }
    }
    ctx->pc = 0x154E38u;
    // 0x154e38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x154E38u;
    {
        const bool branch_taken_0x154e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E38u;
        // 0x154e3c: 0x8c6401b4  lw          $a0, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e38) {
            ctx->pc = 0x154E80u;
            return;
        }
    }
    ctx->pc = 0x154E40u;
}
