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

// Function: entry_0015a388
// Address: 0x15a388 - 0x15a3ac
void entry_0015a388_0x15a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a388_0x15a388");
#endif

    ctx->pc = 0x15a388u;

label_15a388:
    // 0x15a388: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15a38c:
    // 0x15a38c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a390:
    if (ctx->pc == 0x15A390u) {
        ctx->pc = 0x15A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A38Cu;
        // 0x15a390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A394u;
        goto label_15a394;
    }
    ctx->pc = 0x15A38Cu;
    {
        const bool branch_taken_0x15a38c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A38Cu;
        // 0x15a390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a38c) {
            ctx->pc = 0x15A3ACu;
            return;
        }
    }
    ctx->pc = 0x15A394u;
label_15a394:
    // 0x15a394: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a398:
    // 0x15a398: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a39c:
    // 0x15a39c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a3a0:
    // 0x15a3a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a3a4:
    // 0x15a3a4: 0x60f809  jalr        $v1
label_15a3a8:
    if (ctx->pc == 0x15A3A8u) {
        ctx->pc = 0x15A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3A4u;
        // 0x15a3a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3ACu;
        goto label_fallthrough_0x15a3a4;
    }
    ctx->pc = 0x15A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A3ACu);
        ctx->pc = 0x15A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3A4u;
        // 0x15a3a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A3A4u, 0x15A3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a3a4:
    ctx->pc = 0x15A3ACu;
}
