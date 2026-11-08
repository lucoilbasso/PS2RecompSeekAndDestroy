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

// Function: entry_0014a98c
// Address: 0x14a98c - 0x14a9b4
void entry_0014a98c_0x14a98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a98c_0x14a98c");
#endif

    switch (ctx->pc) {
        case 0x14a9b0u: goto label_14a9b0;
        default: break;
    }

    ctx->pc = 0x14a98cu;

label_14a98c:
    // 0x14a98c: 0x8e4601c8  lw          $a2, 0x1C8($s2)
    ctx->pc = 0x14a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_14a990:
    // 0x14a990: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_14a994:
    if (ctx->pc == 0x14A994u) {
        ctx->pc = 0x14A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A990u;
        // 0x14a994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A998u;
        goto label_14a998;
    }
    ctx->pc = 0x14A990u;
    {
        const bool branch_taken_0x14a990 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A990u;
        // 0x14a994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a990) {
            ctx->pc = 0x14A9B4u;
            return;
        }
    }
    ctx->pc = 0x14A998u;
label_14a998:
    // 0x14a998: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14a99c:
    // 0x14a99c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14a9a0:
    // 0x14a9a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14a9a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14a9a4:
    // 0x14a9a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a9a8:
    // 0x14a9a8: 0x60f809  jalr        $v1
label_14a9ac:
    if (ctx->pc == 0x14A9ACu) {
        ctx->pc = 0x14A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A8u;
        // 0x14a9ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9B0u;
        goto label_14a9b0;
    }
    ctx->pc = 0x14A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A9B0u);
        ctx->pc = 0x14A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A8u;
        // 0x14a9ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A9A8u, 0x14A9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A9B0u;
label_14a9b0:
    // 0x14a9b0: 0xae4001c8  sw          $zero, 0x1C8($s2)
    ctx->pc = 0x14a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 0));
    ctx->pc = 0x14a9b4u;
}
