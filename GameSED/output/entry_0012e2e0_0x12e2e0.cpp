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

// Function: entry_0012e2e0
// Address: 0x12e2e0 - 0x12e2f8
void entry_0012e2e0_0x12e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e2e0_0x12e2e0");
#endif

    switch (ctx->pc) {
        case 0x12e2e8u: goto label_12e2e8;
        default: break;
    }

    ctx->pc = 0x12e2e0u;

    // 0x12e2e0: 0xc04c852  jal         func_132148
    ctx->pc = 0x12E2E0u;
    SET_GPR_U32(ctx, 31, 0x12E2E8u);
    ctx->pc = 0x12E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2E0u;
    // 0x12e2e4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132148u, 0x12E2E0u, 0x12E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2E8u;
label_12e2e8:
    // 0x12e2e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12e2ec: 0x1255fff4  beq         $s2, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x12E2ECu;
    {
        const bool branch_taken_0x12e2ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x12E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2ECu;
        // 0x12e2f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2ec) {
            ctx->pc = 0x12E2C0u;
            return;
        }
    }
    ctx->pc = 0x12E2F4u;
    // 0x12e2f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12e2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x12e2f8u;
}
