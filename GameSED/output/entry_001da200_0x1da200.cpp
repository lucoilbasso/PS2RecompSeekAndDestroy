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

// Function: entry_001da200
// Address: 0x1da200 - 0x1da224
void entry_001da200_0x1da200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da200_0x1da200");
#endif

    ctx->pc = 0x1da200u;

label_1da200:
    // 0x1da200: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1da204:
    // 0x1da204: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da208:
    if (ctx->pc == 0x1DA208u) {
        ctx->pc = 0x1DA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA204u;
        // 0x1da208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA20Cu;
        goto label_1da20c;
    }
    ctx->pc = 0x1DA204u;
    {
        const bool branch_taken_0x1da204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA204u;
        // 0x1da208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da204) {
            ctx->pc = 0x1DA224u;
            return;
        }
    }
    ctx->pc = 0x1DA20Cu;
label_1da20c:
    // 0x1da20c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da210:
    // 0x1da210: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da214:
    // 0x1da214: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da218:
    // 0x1da218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da21c:
    // 0x1da21c: 0x60f809  jalr        $v1
label_1da220:
    if (ctx->pc == 0x1DA220u) {
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA224u;
        goto label_fallthrough_0x1da21c;
    }
    ctx->pc = 0x1DA21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA224u);
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA21Cu, 0x1DA224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da21c:
    ctx->pc = 0x1DA224u;
}
