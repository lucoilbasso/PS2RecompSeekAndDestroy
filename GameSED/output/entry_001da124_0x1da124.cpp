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

// Function: entry_001da124
// Address: 0x1da124 - 0x1da148
void entry_001da124_0x1da124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da124_0x1da124");
#endif

    ctx->pc = 0x1da124u;

label_1da124:
    // 0x1da124: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1da124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1da128:
    // 0x1da128: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da12c:
    if (ctx->pc == 0x1DA12Cu) {
        ctx->pc = 0x1DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA128u;
        // 0x1da12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA130u;
        goto label_1da130;
    }
    ctx->pc = 0x1DA128u;
    {
        const bool branch_taken_0x1da128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA128u;
        // 0x1da12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da128) {
            ctx->pc = 0x1DA148u;
            return;
        }
    }
    ctx->pc = 0x1DA130u;
label_1da130:
    // 0x1da130: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da134:
    // 0x1da134: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da138:
    // 0x1da138: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da13c:
    // 0x1da13c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da140:
    // 0x1da140: 0x60f809  jalr        $v1
label_1da144:
    if (ctx->pc == 0x1DA144u) {
        ctx->pc = 0x1DA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA140u;
        // 0x1da144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA148u;
        goto label_fallthrough_0x1da140;
    }
    ctx->pc = 0x1DA140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA148u);
        ctx->pc = 0x1DA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA140u;
        // 0x1da144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA140u, 0x1DA148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da140:
    ctx->pc = 0x1DA148u;
}
