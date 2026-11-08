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

// Function: caseD_a
// Address: 0x111730 - 0x111750
void caseD_a_0x111730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x111730");
#endif

    switch (ctx->pc) {
        case 0x11173cu: goto label_11173c;
        case 0x111748u: goto label_111748;
        default: break;
    }

    ctx->pc = 0x111730u;

    // 0x111730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111734: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111734u;
    SET_GPR_U32(ctx, 31, 0x11173Cu);
    ctx->pc = 0x111738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111734u;
    // 0x111738: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111734u, 0x11173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11173Cu;
label_11173c:
    // 0x11173c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x11173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x111740: 0xc04e2a0  jal         func_138A80
    ctx->pc = 0x111740u;
    SET_GPR_U32(ctx, 31, 0x111748u);
    ctx->pc = 0x111744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111740u;
    // 0x111744: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138A80u, 0x111740u, 0x111748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111748u;
label_111748:
    // 0x111748: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x111748u;
    {
        const bool branch_taken_0x111748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111748u;
        // 0x11174c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111748) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111750u;
}
