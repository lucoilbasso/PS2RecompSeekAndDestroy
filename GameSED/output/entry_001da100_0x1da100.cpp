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

// Function: entry_001da100
// Address: 0x1da100 - 0x1da124
void entry_001da100_0x1da100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da100_0x1da100");
#endif

    ctx->pc = 0x1da100u;

label_1da100:
    // 0x1da100: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1da104:
    // 0x1da104: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da108:
    if (ctx->pc == 0x1DA108u) {
        ctx->pc = 0x1DA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA104u;
        // 0x1da108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA10Cu;
        goto label_1da10c;
    }
    ctx->pc = 0x1DA104u;
    {
        const bool branch_taken_0x1da104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA104u;
        // 0x1da108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da104) {
            ctx->pc = 0x1DA124u;
            return;
        }
    }
    ctx->pc = 0x1DA10Cu;
label_1da10c:
    // 0x1da10c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da110:
    // 0x1da110: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da114:
    // 0x1da114: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da118:
    // 0x1da118: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da11c:
    // 0x1da11c: 0x60f809  jalr        $v1
label_1da120:
    if (ctx->pc == 0x1DA120u) {
        ctx->pc = 0x1DA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA11Cu;
        // 0x1da120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA124u;
        goto label_fallthrough_0x1da11c;
    }
    ctx->pc = 0x1DA11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA124u);
        ctx->pc = 0x1DA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA11Cu;
        // 0x1da120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA11Cu, 0x1DA124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da11c:
    ctx->pc = 0x1DA124u;
}
