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

// Function: entry_00160410
// Address: 0x160410 - 0x160434
void entry_00160410_0x160410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160410_0x160410");
#endif

    ctx->pc = 0x160410u;

label_160410:
    // 0x160410: 0x8e060f38  lw          $a2, 0xF38($s0)
    ctx->pc = 0x160410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3896)));
label_160414:
    // 0x160414: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160418:
    if (ctx->pc == 0x160418u) {
        ctx->pc = 0x160418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160414u;
        // 0x160418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16041Cu;
        goto label_16041c;
    }
    ctx->pc = 0x160414u;
    {
        const bool branch_taken_0x160414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160414u;
        // 0x160418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160414) {
            ctx->pc = 0x160434u;
            return;
        }
    }
    ctx->pc = 0x16041Cu;
label_16041c:
    // 0x16041c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160420:
    // 0x160420: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160424:
    // 0x160424: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160428:
    // 0x160428: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16042c:
    // 0x16042c: 0x60f809  jalr        $v1
label_160430:
    if (ctx->pc == 0x160430u) {
        ctx->pc = 0x160430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16042Cu;
        // 0x160430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160434u;
        goto label_fallthrough_0x16042c;
    }
    ctx->pc = 0x16042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160434u);
        ctx->pc = 0x160430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16042Cu;
        // 0x160430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16042Cu, 0x160434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16042c:
    ctx->pc = 0x160434u;
}
