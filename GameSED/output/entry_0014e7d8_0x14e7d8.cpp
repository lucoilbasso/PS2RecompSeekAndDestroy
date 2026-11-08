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

// Function: entry_0014e7d8
// Address: 0x14e7d8 - 0x14e7fc
void entry_0014e7d8_0x14e7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e7d8_0x14e7d8");
#endif

    ctx->pc = 0x14e7d8u;

label_14e7d8:
    // 0x14e7d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x14e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14e7dc:
    // 0x14e7dc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e7e0:
    if (ctx->pc == 0x14E7E0u) {
        ctx->pc = 0x14E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7DCu;
        // 0x14e7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7E4u;
        goto label_14e7e4;
    }
    ctx->pc = 0x14E7DCu;
    {
        const bool branch_taken_0x14e7dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7DCu;
        // 0x14e7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7dc) {
            ctx->pc = 0x14E7FCu;
            return;
        }
    }
    ctx->pc = 0x14E7E4u;
label_14e7e4:
    // 0x14e7e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e7e8:
    // 0x14e7e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e7ec:
    // 0x14e7ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e7f0:
    // 0x14e7f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e7f4:
    // 0x14e7f4: 0x60f809  jalr        $v1
label_14e7f8:
    if (ctx->pc == 0x14E7F8u) {
        ctx->pc = 0x14E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F4u;
        // 0x14e7f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7FCu;
        goto label_fallthrough_0x14e7f4;
    }
    ctx->pc = 0x14E7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E7FCu);
        ctx->pc = 0x14E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F4u;
        // 0x14e7f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7F4u, 0x14E7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14e7f4:
    ctx->pc = 0x14E7FCu;
}
