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

// Function: entry_001d6ac8
// Address: 0x1d6ac8 - 0x1d6aec
void entry_001d6ac8_0x1d6ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6ac8_0x1d6ac8");
#endif

    ctx->pc = 0x1d6ac8u;

label_1d6ac8:
    // 0x1d6ac8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d6ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d6acc:
    // 0x1d6acc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d6ad0:
    if (ctx->pc == 0x1D6AD0u) {
        ctx->pc = 0x1D6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ACCu;
        // 0x1d6ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AD4u;
        goto label_1d6ad4;
    }
    ctx->pc = 0x1D6ACCu;
    {
        const bool branch_taken_0x1d6acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ACCu;
        // 0x1d6ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6acc) {
            ctx->pc = 0x1D6AECu;
            return;
        }
    }
    ctx->pc = 0x1D6AD4u;
label_1d6ad4:
    // 0x1d6ad4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6ad8:
    // 0x1d6ad8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6adc:
    // 0x1d6adc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6ae0:
    // 0x1d6ae0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6ae4:
    // 0x1d6ae4: 0x60f809  jalr        $v1
label_1d6ae8:
    if (ctx->pc == 0x1D6AE8u) {
        ctx->pc = 0x1D6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AE4u;
        // 0x1d6ae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AECu;
        goto label_fallthrough_0x1d6ae4;
    }
    ctx->pc = 0x1D6AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6AECu);
        ctx->pc = 0x1D6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AE4u;
        // 0x1d6ae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AE4u, 0x1D6AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d6ae4:
    ctx->pc = 0x1D6AECu;
}
