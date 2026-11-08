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

// Function: entry_0015e8ac
// Address: 0x15e8ac - 0x15e8d0
void entry_0015e8ac_0x15e8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e8ac_0x15e8ac");
#endif

    ctx->pc = 0x15e8acu;

label_15e8ac:
    // 0x15e8ac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e8b0:
    // 0x15e8b0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e8b4:
    if (ctx->pc == 0x15E8B4u) {
        ctx->pc = 0x15E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8B0u;
        // 0x15e8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8B8u;
        goto label_15e8b8;
    }
    ctx->pc = 0x15E8B0u;
    {
        const bool branch_taken_0x15e8b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8B0u;
        // 0x15e8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8b0) {
            ctx->pc = 0x15E8D0u;
            return;
        }
    }
    ctx->pc = 0x15E8B8u;
label_15e8b8:
    // 0x15e8b8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e8bc:
    // 0x15e8bc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e8c0:
    // 0x15e8c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e8c4:
    // 0x15e8c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e8c8:
    // 0x15e8c8: 0x60f809  jalr        $v1
label_15e8cc:
    if (ctx->pc == 0x15E8CCu) {
        ctx->pc = 0x15E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8C8u;
        // 0x15e8cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8D0u;
        goto label_fallthrough_0x15e8c8;
    }
    ctx->pc = 0x15E8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E8D0u);
        ctx->pc = 0x15E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8C8u;
        // 0x15e8cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8C8u, 0x15E8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e8c8:
    ctx->pc = 0x15E8D0u;
}
