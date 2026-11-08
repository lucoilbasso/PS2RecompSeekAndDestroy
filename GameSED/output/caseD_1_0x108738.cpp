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

// Function: caseD_1
// Address: 0x108738 - 0x108758
void caseD_1_0x108738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x108738");
#endif

    switch (ctx->pc) {
        case 0x108750u: goto label_108750;
        default: break;
    }

    ctx->pc = 0x108738u;

    // 0x108738: 0x12800271  beqz        $s4, . + 4 + (0x271 << 2)
    ctx->pc = 0x108738u;
    {
        const bool branch_taken_0x108738 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108738u;
        // 0x10873c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108738) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x108740u;
    // 0x108740: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x108740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108748: 0xc068866  jal         func_1A2198
    ctx->pc = 0x108748u;
    SET_GPR_U32(ctx, 31, 0x108750u);
    ctx->pc = 0x10874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108748u;
    // 0x10874c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x108748u, 0x108750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108750u;
label_108750:
    // 0x108750: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x108750u;
    {
        const bool branch_taken_0x108750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108750u;
        // 0x108754: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108750) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108758u;
}
