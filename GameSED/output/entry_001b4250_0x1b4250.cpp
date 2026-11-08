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

// Function: entry_001b4250
// Address: 0x1b4250 - 0x1b4278
void entry_001b4250_0x1b4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4250_0x1b4250");
#endif

    switch (ctx->pc) {
        case 0x1b4260u: goto label_1b4260;
        case 0x1b4270u: goto label_1b4270;
        default: break;
    }

    ctx->pc = 0x1b4250u;

    // 0x1b4250: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b4250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4254: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1b4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1b4258: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4258u;
    SET_GPR_U32(ctx, 31, 0x1B4260u);
    ctx->pc = 0x1B425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4258u;
    // 0x1b425c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4258u, 0x1B4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4260u;
label_1b4260:
    // 0x1b4260: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4260u;
    {
        const bool branch_taken_0x1b4260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4260) {
            ctx->pc = 0x1B4278u;
            return;
        }
    }
    ctx->pc = 0x1B4268u;
    // 0x1b4268: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4268u;
    SET_GPR_U32(ctx, 31, 0x1B4270u);
    ctx->pc = 0x1B426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4268u;
    // 0x1b426c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4268u, 0x1B4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4270u;
label_1b4270:
    // 0x1b4270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4270u;
    {
        const bool branch_taken_0x1b4270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4270u;
        // 0x1b4274: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4270) {
            ctx->pc = 0x1B4298u;
            return;
        }
    }
    ctx->pc = 0x1B4278u;
}
