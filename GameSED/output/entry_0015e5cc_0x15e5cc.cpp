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

// Function: entry_0015e5cc
// Address: 0x15e5cc - 0x15e5f0
void entry_0015e5cc_0x15e5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e5cc_0x15e5cc");
#endif

    ctx->pc = 0x15e5ccu;

label_15e5cc:
    // 0x15e5cc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e5d0:
    // 0x15e5d0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e5d4:
    if (ctx->pc == 0x15E5D4u) {
        ctx->pc = 0x15E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5D0u;
        // 0x15e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5D8u;
        goto label_15e5d8;
    }
    ctx->pc = 0x15E5D0u;
    {
        const bool branch_taken_0x15e5d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5D0u;
        // 0x15e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5d0) {
            ctx->pc = 0x15E5F0u;
            return;
        }
    }
    ctx->pc = 0x15E5D8u;
label_15e5d8:
    // 0x15e5d8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e5dc:
    // 0x15e5dc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e5e0:
    // 0x15e5e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e5e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e5e4:
    // 0x15e5e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e5e8:
    // 0x15e5e8: 0x60f809  jalr        $v1
label_15e5ec:
    if (ctx->pc == 0x15E5ECu) {
        ctx->pc = 0x15E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5E8u;
        // 0x15e5ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5F0u;
        goto label_fallthrough_0x15e5e8;
    }
    ctx->pc = 0x15E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E5F0u);
        ctx->pc = 0x15E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5E8u;
        // 0x15e5ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5E8u, 0x15E5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e5e8:
    ctx->pc = 0x15E5F0u;
}
