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

// Function: entry_0014e7b4
// Address: 0x14e7b4 - 0x14e7d8
void entry_0014e7b4_0x14e7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e7b4_0x14e7b4");
#endif

    ctx->pc = 0x14e7b4u;

label_14e7b4:
    // 0x14e7b4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e7b8:
    // 0x14e7b8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e7bc:
    if (ctx->pc == 0x14E7BCu) {
        ctx->pc = 0x14E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B8u;
        // 0x14e7bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7C0u;
        goto label_14e7c0;
    }
    ctx->pc = 0x14E7B8u;
    {
        const bool branch_taken_0x14e7b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B8u;
        // 0x14e7bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7b8) {
            ctx->pc = 0x14E7D8u;
            return;
        }
    }
    ctx->pc = 0x14E7C0u;
label_14e7c0:
    // 0x14e7c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e7c4:
    // 0x14e7c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e7c8:
    // 0x14e7c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e7cc:
    // 0x14e7cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e7d0:
    // 0x14e7d0: 0x60f809  jalr        $v1
label_14e7d4:
    if (ctx->pc == 0x14E7D4u) {
        ctx->pc = 0x14E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D0u;
        // 0x14e7d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7D8u;
        goto label_fallthrough_0x14e7d0;
    }
    ctx->pc = 0x14E7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E7D8u);
        ctx->pc = 0x14E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D0u;
        // 0x14e7d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7D0u, 0x14E7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14e7d0:
    ctx->pc = 0x14E7D8u;
}
