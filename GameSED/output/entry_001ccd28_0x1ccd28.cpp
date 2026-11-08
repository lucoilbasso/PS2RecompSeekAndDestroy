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

// Function: entry_001ccd28
// Address: 0x1ccd28 - 0x1ccd40
void entry_001ccd28_0x1ccd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd28_0x1ccd28");
#endif

    ctx->pc = 0x1ccd28u;

label_1ccd28:
    // 0x1ccd28: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ccd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ccd2c:
    // 0x1ccd2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ccd30:
    if (ctx->pc == 0x1CCD30u) {
        ctx->pc = 0x1CCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD2Cu;
        // 0x1ccd30: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD34u;
        goto label_1ccd34;
    }
    ctx->pc = 0x1CCD2Cu;
    {
        const bool branch_taken_0x1ccd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD2Cu;
        // 0x1ccd30: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd2c) {
            ctx->pc = 0x1CCD40u;
            return;
        }
    }
    ctx->pc = 0x1CCD34u;
label_1ccd34:
    // 0x1ccd34: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1ccd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ccd38:
    // 0x1ccd38: 0x60f809  jalr        $v1
label_1ccd3c:
    if (ctx->pc == 0x1CCD3Cu) {
        ctx->pc = 0x1CCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD38u;
        // 0x1ccd3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD40u;
        goto label_fallthrough_0x1ccd38;
    }
    ctx->pc = 0x1CCD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCD40u);
        ctx->pc = 0x1CCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD38u;
        // 0x1ccd3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD38u, 0x1CCD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ccd38:
    ctx->pc = 0x1CCD40u;
}
