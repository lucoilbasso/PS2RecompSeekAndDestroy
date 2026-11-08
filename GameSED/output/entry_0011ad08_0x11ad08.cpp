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

// Function: entry_0011ad08
// Address: 0x11ad08 - 0x11ad2c
void entry_0011ad08_0x11ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad08_0x11ad08");
#endif

    ctx->pc = 0x11ad08u;

label_11ad08:
    // 0x11ad08: 0x8f868978  lw          $a2, -0x7688($gp)
    ctx->pc = 0x11ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11ad0c:
    // 0x11ad0c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_11ad10:
    if (ctx->pc == 0x11AD10u) {
        ctx->pc = 0x11AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD0Cu;
        // 0x11ad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD14u;
        goto label_11ad14;
    }
    ctx->pc = 0x11AD0Cu;
    {
        const bool branch_taken_0x11ad0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD0Cu;
        // 0x11ad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad0c) {
            ctx->pc = 0x11AD2Cu;
            return;
        }
    }
    ctx->pc = 0x11AD14u;
label_11ad14:
    // 0x11ad14: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11ad18:
    // 0x11ad18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11ad1c:
    // 0x11ad1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11ad1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11ad20:
    // 0x11ad20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11ad24:
    // 0x11ad24: 0x60f809  jalr        $v1
label_11ad28:
    if (ctx->pc == 0x11AD28u) {
        ctx->pc = 0x11AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD24u;
        // 0x11ad28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AD2Cu;
        goto label_fallthrough_0x11ad24;
    }
    ctx->pc = 0x11AD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AD2Cu);
        ctx->pc = 0x11AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD24u;
        // 0x11ad28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD24u, 0x11AD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11ad24:
    ctx->pc = 0x11AD2Cu;
}
