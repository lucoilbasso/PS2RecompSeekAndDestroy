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

// Function: entry_0011ace4
// Address: 0x11ace4 - 0x11ad08
void entry_0011ace4_0x11ace4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ace4_0x11ace4");
#endif

    ctx->pc = 0x11ace4u;

label_11ace4:
    // 0x11ace4: 0x8f868974  lw          $a2, -0x768C($gp)
    ctx->pc = 0x11ace4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11ace8:
    // 0x11ace8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_11acec:
    if (ctx->pc == 0x11ACECu) {
        ctx->pc = 0x11ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACE8u;
        // 0x11acec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACF0u;
        goto label_11acf0;
    }
    ctx->pc = 0x11ACE8u;
    {
        const bool branch_taken_0x11ace8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACE8u;
        // 0x11acec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ace8) {
            ctx->pc = 0x11AD08u;
            return;
        }
    }
    ctx->pc = 0x11ACF0u;
label_11acf0:
    // 0x11acf0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11acf4:
    // 0x11acf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11acf8:
    // 0x11acf8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11acf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11acfc:
    // 0x11acfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11ad00:
    // 0x11ad00: 0x60f809  jalr        $v1
label_11ad04:
    if (ctx->pc == 0x11AD04u) {
        ctx->pc = 0x11AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD00u;
        // 0x11ad04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD08u;
        goto label_fallthrough_0x11ad00;
    }
    ctx->pc = 0x11AD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AD08u);
        ctx->pc = 0x11AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD00u;
        // 0x11ad04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD00u, 0x11AD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11ad00:
    ctx->pc = 0x11AD08u;
}
