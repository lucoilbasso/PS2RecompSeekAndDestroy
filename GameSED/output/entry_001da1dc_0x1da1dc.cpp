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

// Function: entry_001da1dc
// Address: 0x1da1dc - 0x1da200
void entry_001da1dc_0x1da1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da1dc_0x1da1dc");
#endif

    ctx->pc = 0x1da1dcu;

label_1da1dc:
    // 0x1da1dc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1da1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1da1e0:
    // 0x1da1e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da1e4:
    if (ctx->pc == 0x1DA1E4u) {
        ctx->pc = 0x1DA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1E0u;
        // 0x1da1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1E8u;
        goto label_1da1e8;
    }
    ctx->pc = 0x1DA1E0u;
    {
        const bool branch_taken_0x1da1e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1E0u;
        // 0x1da1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1e0) {
            ctx->pc = 0x1DA200u;
            return;
        }
    }
    ctx->pc = 0x1DA1E8u;
label_1da1e8:
    // 0x1da1e8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da1ec:
    // 0x1da1ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da1f0:
    // 0x1da1f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da1f4:
    // 0x1da1f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da1f8:
    // 0x1da1f8: 0x60f809  jalr        $v1
label_1da1fc:
    if (ctx->pc == 0x1DA1FCu) {
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA200u;
        goto label_fallthrough_0x1da1f8;
    }
    ctx->pc = 0x1DA1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA200u);
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1F8u, 0x1DA200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da1f8:
    ctx->pc = 0x1DA200u;
}
