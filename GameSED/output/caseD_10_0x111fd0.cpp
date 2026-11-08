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

// Function: caseD_10
// Address: 0x111fd0 - 0x111ff8
void caseD_10_0x111fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x111fd0");
#endif

    switch (ctx->pc) {
        case 0x111fd8u: goto label_111fd8;
        default: break;
    }

    ctx->pc = 0x111fd0u;

    // 0x111fd0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111FD0u;
    SET_GPR_U32(ctx, 31, 0x111FD8u);
    ctx->pc = 0x111FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FD0u;
    // 0x111fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111FD0u, 0x111FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FD8u;
label_111fd8:
    // 0x111fd8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x111fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x111fdc: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x111fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x111fe0: 0x2421ff30  addiu       $at, $at, -0xD0
    ctx->pc = 0x111fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294967088));
    // 0x111fe4: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x111fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x111fe8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x111fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111fec: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x111fecu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x111ff0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x111FF0u;
    {
        const bool branch_taken_0x111ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FF0u;
        // 0x111ff4: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ff0) {
            ctx->pc = 0x112128u;
            return;
        }
    }
    ctx->pc = 0x111FF8u;
}
