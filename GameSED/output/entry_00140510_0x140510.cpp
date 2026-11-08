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

// Function: entry_00140510
// Address: 0x140510 - 0x140528
void entry_00140510_0x140510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140510_0x140510");
#endif

    switch (ctx->pc) {
        case 0x140524u: goto label_140524;
        default: break;
    }

    ctx->pc = 0x140510u;

label_140510:
    // 0x140510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_140514:
    if (ctx->pc == 0x140514u) {
        ctx->pc = 0x140514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140510u;
        // 0x140514: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140518u;
        goto label_140518;
    }
    ctx->pc = 0x140510u;
    {
        const bool branch_taken_0x140510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140510u;
        // 0x140514: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140510) {
            ctx->pc = 0x140528u;
            return;
        }
    }
    ctx->pc = 0x140518u;
label_140518:
    // 0x140518: 0x8e450198  lw          $a1, 0x198($s2)
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_14051c:
    // 0x14051c: 0x40f809  jalr        $v0
label_140520:
    if (ctx->pc == 0x140520u) {
        ctx->pc = 0x140520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14051Cu;
        // 0x140520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140524u;
        goto label_140524;
    }
    ctx->pc = 0x14051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140524u);
        ctx->pc = 0x140520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14051Cu;
        // 0x140520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14051Cu, 0x140524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140524u;
label_140524:
    // 0x140524: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->pc = 0x140528u;
}
