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

// Function: entry_0014cf68
// Address: 0x14cf68 - 0x14cf80
void entry_0014cf68_0x14cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cf68_0x14cf68");
#endif

    ctx->pc = 0x14cf68u;

label_14cf68:
    // 0x14cf68: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x14cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_14cf6c:
    // 0x14cf6c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x14cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_14cf70:
    // 0x14cf70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14cf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14cf74:
    // 0x14cf74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14cf78:
    // 0x14cf78: 0x60f809  jalr        $v1
label_14cf7c:
    if (ctx->pc == 0x14CF7Cu) {
        ctx->pc = 0x14CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF78u;
        // 0x14cf7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF80u;
        goto label_fallthrough_0x14cf78;
    }
    ctx->pc = 0x14CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CF80u);
        ctx->pc = 0x14CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF78u;
        // 0x14cf7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF78u, 0x14CF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14cf78:
    ctx->pc = 0x14CF80u;
}
