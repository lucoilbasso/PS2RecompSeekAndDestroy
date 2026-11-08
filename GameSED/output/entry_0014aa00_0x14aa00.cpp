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

// Function: entry_0014aa00
// Address: 0x14aa00 - 0x14aa20
void entry_0014aa00_0x14aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa00_0x14aa00");
#endif

    ctx->pc = 0x14aa00u;

label_14aa00:
    // 0x14aa00: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14aa04:
    if (ctx->pc == 0x14AA04u) {
        ctx->pc = 0x14AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA00u;
        // 0x14aa04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA08u;
        goto label_14aa08;
    }
    ctx->pc = 0x14AA00u;
    {
        const bool branch_taken_0x14aa00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA00u;
        // 0x14aa04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa00) {
            ctx->pc = 0x14AA20u;
            return;
        }
    }
    ctx->pc = 0x14AA08u;
label_14aa08:
    // 0x14aa08: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14aa0c:
    // 0x14aa0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14aa10:
    // 0x14aa10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14aa14:
    // 0x14aa14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14aa18:
    // 0x14aa18: 0x60f809  jalr        $v1
label_14aa1c:
    if (ctx->pc == 0x14AA1Cu) {
        ctx->pc = 0x14AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA18u;
        // 0x14aa1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA20u;
        goto label_fallthrough_0x14aa18;
    }
    ctx->pc = 0x14AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14AA20u);
        ctx->pc = 0x14AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA18u;
        // 0x14aa1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA18u, 0x14AA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14aa18:
    ctx->pc = 0x14AA20u;
}
