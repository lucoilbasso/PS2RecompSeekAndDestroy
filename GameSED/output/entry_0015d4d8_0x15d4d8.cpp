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

// Function: entry_0015d4d8
// Address: 0x15d4d8 - 0x15d4fc
void entry_0015d4d8_0x15d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d4d8_0x15d4d8");
#endif

    ctx->pc = 0x15d4d8u;

label_15d4d8:
    // 0x15d4d8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d4dc:
    // 0x15d4dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_15d4e0:
    if (ctx->pc == 0x15D4E0u) {
        ctx->pc = 0x15D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4DCu;
        // 0x15d4e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4E4u;
        goto label_15d4e4;
    }
    ctx->pc = 0x15D4DCu;
    {
        const bool branch_taken_0x15d4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4dc) {
            ctx->pc = 0x15D4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D4DCu;
            // 0x15d4e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D504u;
            return;
        }
    }
    ctx->pc = 0x15D4E4u;
label_15d4e4:
    // 0x15d4e4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d4e8:
    // 0x15d4e8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d4ec:
    // 0x15d4ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d4f0:
    // 0x15d4f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d4f4:
    // 0x15d4f4: 0x60f809  jalr        $v1
label_15d4f8:
    if (ctx->pc == 0x15D4F8u) {
        ctx->pc = 0x15D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4F4u;
        // 0x15d4f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4FCu;
        goto label_fallthrough_0x15d4f4;
    }
    ctx->pc = 0x15D4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D4FCu);
        ctx->pc = 0x15D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4F4u;
        // 0x15d4f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4F4u, 0x15D4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15d4f4:
    ctx->pc = 0x15D4FCu;
}
