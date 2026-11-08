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

// Function: entry_0015e5a8
// Address: 0x15e5a8 - 0x15e5cc
void entry_0015e5a8_0x15e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e5a8_0x15e5a8");
#endif

    ctx->pc = 0x15e5a8u;

label_15e5a8:
    // 0x15e5a8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e5ac:
    // 0x15e5ac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e5b0:
    if (ctx->pc == 0x15E5B0u) {
        ctx->pc = 0x15E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5ACu;
        // 0x15e5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5B4u;
        goto label_15e5b4;
    }
    ctx->pc = 0x15E5ACu;
    {
        const bool branch_taken_0x15e5ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5ACu;
        // 0x15e5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5ac) {
            ctx->pc = 0x15E5CCu;
            return;
        }
    }
    ctx->pc = 0x15E5B4u;
label_15e5b4:
    // 0x15e5b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e5b8:
    // 0x15e5b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e5bc:
    // 0x15e5bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e5c0:
    // 0x15e5c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e5c4:
    // 0x15e5c4: 0x60f809  jalr        $v1
label_15e5c8:
    if (ctx->pc == 0x15E5C8u) {
        ctx->pc = 0x15E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5C4u;
        // 0x15e5c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5CCu;
        goto label_fallthrough_0x15e5c4;
    }
    ctx->pc = 0x15E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E5CCu);
        ctx->pc = 0x15E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5C4u;
        // 0x15e5c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5C4u, 0x15E5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e5c4:
    ctx->pc = 0x15E5CCu;
}
