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

// Function: entry_0017c7f0
// Address: 0x17c7f0 - 0x17c810
void entry_0017c7f0_0x17c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c7f0_0x17c7f0");
#endif

    ctx->pc = 0x17c7f0u;

label_17c7f0:
    // 0x17c7f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_17c7f4:
    if (ctx->pc == 0x17C7F4u) {
        ctx->pc = 0x17C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7F0u;
        // 0x17c7f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7F8u;
        goto label_17c7f8;
    }
    ctx->pc = 0x17C7F0u;
    {
        const bool branch_taken_0x17c7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7F0u;
        // 0x17c7f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7f0) {
            ctx->pc = 0x17C810u;
            return;
        }
    }
    ctx->pc = 0x17C7F8u;
label_17c7f8:
    // 0x17c7f8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_17c7fc:
    // 0x17c7fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17c800:
    // 0x17c800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_17c804:
    // 0x17c804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17c808:
    // 0x17c808: 0x60f809  jalr        $v1
label_17c80c:
    if (ctx->pc == 0x17C80Cu) {
        ctx->pc = 0x17C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C808u;
        // 0x17c80c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C810u;
        goto label_fallthrough_0x17c808;
    }
    ctx->pc = 0x17C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C810u);
        ctx->pc = 0x17C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C808u;
        // 0x17c80c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C808u, 0x17C810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17c808:
    ctx->pc = 0x17C810u;
}
