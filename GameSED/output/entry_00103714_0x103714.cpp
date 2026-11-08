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

// Function: entry_00103714
// Address: 0x103714 - 0x103734
void entry_00103714_0x103714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103714_0x103714");
#endif

    ctx->pc = 0x103714u;

label_103714:
    // 0x103714: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_103718:
    if (ctx->pc == 0x103718u) {
        ctx->pc = 0x103718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103714u;
        // 0x103718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10371Cu;
        goto label_10371c;
    }
    ctx->pc = 0x103714u;
    {
        const bool branch_taken_0x103714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x103718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103714u;
        // 0x103718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103714) {
            ctx->pc = 0x103734u;
            return;
        }
    }
    ctx->pc = 0x10371Cu;
label_10371c:
    // 0x10371c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_103720:
    // 0x103720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x103720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_103724:
    // 0x103724: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x103724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_103728:
    // 0x103728: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x103728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10372c:
    // 0x10372c: 0x60f809  jalr        $v1
label_103730:
    if (ctx->pc == 0x103730u) {
        ctx->pc = 0x103730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10372Cu;
        // 0x103730: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103734u;
        goto label_fallthrough_0x10372c;
    }
    ctx->pc = 0x10372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103734u);
        ctx->pc = 0x103730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10372Cu;
        // 0x103730: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10372Cu, 0x103734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10372c:
    ctx->pc = 0x103734u;
}
