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

// Function: entry_001a4948
// Address: 0x1a4948 - 0x1a4968
void entry_001a4948_0x1a4948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4948_0x1a4948");
#endif

    switch (ctx->pc) {
        case 0x1a4960u: goto label_1a4960;
        default: break;
    }

    ctx->pc = 0x1a4948u;

label_1a4948:
    // 0x1a4948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a494c:
    // 0x1a494c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4950:
    // 0x1a4950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4954:
    if (ctx->pc == 0x1A4954u) {
        ctx->pc = 0x1A4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4950u;
        // 0x1a4954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4958u;
        goto label_1a4958;
    }
    ctx->pc = 0x1A4950u;
    {
        const bool branch_taken_0x1a4950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4950u;
        // 0x1a4954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4950) {
            ctx->pc = 0x1A4968u;
            return;
        }
    }
    ctx->pc = 0x1A4958u;
label_1a4958:
    // 0x1a4958: 0x40f809  jalr        $v0
label_1a495c:
    if (ctx->pc == 0x1A495Cu) {
        ctx->pc = 0x1A4960u;
        goto label_1a4960;
    }
    ctx->pc = 0x1A4958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4960u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4958u, 0x1A4960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4960u;
label_1a4960:
    // 0x1a4960: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4964:
    if (ctx->pc == 0x1A4964u) {
        ctx->pc = 0x1A4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4960u;
        // 0x1a4964: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4968u;
        goto label_fallthrough_0x1a4960;
    }
    ctx->pc = 0x1A4960u;
    {
        const bool branch_taken_0x1a4960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4960u;
        // 0x1a4964: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4960) {
            ctx->pc = 0x1A4980u;
            return;
        }
    }
label_fallthrough_0x1a4960:
    ctx->pc = 0x1A4968u;
}
