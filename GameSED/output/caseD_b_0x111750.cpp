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

// Function: caseD_b
// Address: 0x111750 - 0x111778
void caseD_b_0x111750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x111750");
#endif

    switch (ctx->pc) {
        case 0x111758u: goto label_111758;
        case 0x11176cu: goto label_11176c;
        default: break;
    }

    ctx->pc = 0x111750u;

    // 0x111750: 0xc0533f0  jal         func_14CFC0
    ctx->pc = 0x111750u;
    SET_GPR_U32(ctx, 31, 0x111758u);
    ctx->pc = 0x111754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111750u;
    // 0x111754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CFC0u, 0x111750u, 0x111758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111758u;
label_111758:
    // 0x111758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111758u;
    {
        const bool branch_taken_0x111758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111758u;
        // 0x11175c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111758) {
            ctx->pc = 0x111778u;
            return;
        }
    }
    ctx->pc = 0x111760u;
    // 0x111760: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111764: 0xc066a3a  jal         func_19A8E8
    ctx->pc = 0x111764u;
    SET_GPR_U32(ctx, 31, 0x11176Cu);
    ctx->pc = 0x111768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111764u;
    // 0x111768: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A8E8u, 0x111764u, 0x11176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11176Cu;
label_11176c:
    // 0x11176c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11176Cu;
    {
        const bool branch_taken_0x11176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11176Cu;
        // 0x111770: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11176c) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111774u;
    // 0x111774: 0x0  nop
    ctx->pc = 0x111774u;
    // NOP
    ctx->pc = 0x111778u;
}
