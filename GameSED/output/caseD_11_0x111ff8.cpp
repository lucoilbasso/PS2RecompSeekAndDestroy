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

// Function: caseD_11
// Address: 0x111ff8 - 0x112020
void caseD_11_0x111ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x111ff8");
#endif

    switch (ctx->pc) {
        case 0x112000u: goto label_112000;
        default: break;
    }

    ctx->pc = 0x111ff8u;

    // 0x111ff8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111FF8u;
    SET_GPR_U32(ctx, 31, 0x112000u);
    ctx->pc = 0x111FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FF8u;
    // 0x111ffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111FF8u, 0x112000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112000u;
label_112000:
    // 0x112000: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x112000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x112004: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x112004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x112008: 0x2421ff30  addiu       $at, $at, -0xD0
    ctx->pc = 0x112008u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294967088));
    // 0x11200c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x11200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x112010: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x112010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x112014: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x112014u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x112018: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x112018u;
    {
        const bool branch_taken_0x112018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112018u;
        // 0x11201c: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112018) {
            ctx->pc = 0x112128u;
            return;
        }
    }
    ctx->pc = 0x112020u;
}
