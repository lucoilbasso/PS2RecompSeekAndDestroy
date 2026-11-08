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

// Function: entry_0011b334
// Address: 0x11b334 - 0x11b358
void entry_0011b334_0x11b334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b334_0x11b334");
#endif

    ctx->pc = 0x11b334u;

label_11b334:
    // 0x11b334: 0x8e060098  lw          $a2, 0x98($s0)
    ctx->pc = 0x11b334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_11b338:
    // 0x11b338: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_11b33c:
    if (ctx->pc == 0x11B33Cu) {
        ctx->pc = 0x11B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B338u;
        // 0x11b33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B340u;
        goto label_11b340;
    }
    ctx->pc = 0x11B338u;
    {
        const bool branch_taken_0x11b338 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B338u;
        // 0x11b33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b338) {
            ctx->pc = 0x11B358u;
            return;
        }
    }
    ctx->pc = 0x11B340u;
label_11b340:
    // 0x11b340: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11b344:
    // 0x11b344: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b348:
    // 0x11b348: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b34c:
    // 0x11b34c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b350:
    // 0x11b350: 0x60f809  jalr        $v1
label_11b354:
    if (ctx->pc == 0x11B354u) {
        ctx->pc = 0x11B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B350u;
        // 0x11b354: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B358u;
        goto label_fallthrough_0x11b350;
    }
    ctx->pc = 0x11B350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B358u);
        ctx->pc = 0x11B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B350u;
        // 0x11b354: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B350u, 0x11B358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11b350:
    ctx->pc = 0x11B358u;
}
