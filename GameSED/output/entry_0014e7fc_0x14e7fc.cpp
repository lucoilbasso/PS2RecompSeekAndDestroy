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

// Function: entry_0014e7fc
// Address: 0x14e7fc - 0x14e820
void entry_0014e7fc_0x14e7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e7fc_0x14e7fc");
#endif

    ctx->pc = 0x14e7fcu;

label_14e7fc:
    // 0x14e7fc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e800:
    // 0x14e800: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e804:
    if (ctx->pc == 0x14E804u) {
        ctx->pc = 0x14E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E800u;
        // 0x14e804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E808u;
        goto label_14e808;
    }
    ctx->pc = 0x14E800u;
    {
        const bool branch_taken_0x14e800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E800u;
        // 0x14e804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e800) {
            ctx->pc = 0x14E820u;
            return;
        }
    }
    ctx->pc = 0x14E808u;
label_14e808:
    // 0x14e808: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e80c:
    // 0x14e80c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e810:
    // 0x14e810: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e814:
    // 0x14e814: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e818:
    // 0x14e818: 0x60f809  jalr        $v1
label_14e81c:
    if (ctx->pc == 0x14E81Cu) {
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E818u;
        // 0x14e81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E820u;
        goto label_fallthrough_0x14e818;
    }
    ctx->pc = 0x14E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E820u);
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E818u;
        // 0x14e81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E818u, 0x14E820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14e818:
    ctx->pc = 0x14E820u;
}
