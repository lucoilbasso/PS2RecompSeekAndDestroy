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

// Function: entry_001d9fd4
// Address: 0x1d9fd4 - 0x1d9ff8
void entry_001d9fd4_0x1d9fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9fd4_0x1d9fd4");
#endif

    ctx->pc = 0x1d9fd4u;

label_1d9fd4:
    // 0x1d9fd4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1d9fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d9fd8:
    // 0x1d9fd8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9fdc:
    if (ctx->pc == 0x1D9FDCu) {
        ctx->pc = 0x1D9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FD8u;
        // 0x1d9fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FE0u;
        goto label_1d9fe0;
    }
    ctx->pc = 0x1D9FD8u;
    {
        const bool branch_taken_0x1d9fd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FD8u;
        // 0x1d9fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fd8) {
            ctx->pc = 0x1D9FF8u;
            return;
        }
    }
    ctx->pc = 0x1D9FE0u;
label_1d9fe0:
    // 0x1d9fe0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9fe4:
    // 0x1d9fe4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9fe8:
    // 0x1d9fe8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9fec:
    // 0x1d9fec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9ff0:
    // 0x1d9ff0: 0x60f809  jalr        $v1
label_1d9ff4:
    if (ctx->pc == 0x1D9FF4u) {
        ctx->pc = 0x1D9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FF0u;
        // 0x1d9ff4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FF8u;
        goto label_fallthrough_0x1d9ff0;
    }
    ctx->pc = 0x1D9FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9FF8u);
        ctx->pc = 0x1D9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FF0u;
        // 0x1d9ff4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FF0u, 0x1D9FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d9ff0:
    ctx->pc = 0x1D9FF8u;
}
