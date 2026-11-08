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

// Function: entry_0015a780
// Address: 0x15a780 - 0x15a7a4
void entry_0015a780_0x15a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a780_0x15a780");
#endif

    ctx->pc = 0x15a780u;

label_15a780:
    // 0x15a780: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15a784:
    // 0x15a784: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a788:
    if (ctx->pc == 0x15A788u) {
        ctx->pc = 0x15A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A784u;
        // 0x15a788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A78Cu;
        goto label_15a78c;
    }
    ctx->pc = 0x15A784u;
    {
        const bool branch_taken_0x15a784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A784u;
        // 0x15a788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a784) {
            ctx->pc = 0x15A7A4u;
            return;
        }
    }
    ctx->pc = 0x15A78Cu;
label_15a78c:
    // 0x15a78c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a790:
    // 0x15a790: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a794:
    // 0x15a794: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a798:
    // 0x15a798: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a79c:
    // 0x15a79c: 0x60f809  jalr        $v1
label_15a7a0:
    if (ctx->pc == 0x15A7A0u) {
        ctx->pc = 0x15A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A79Cu;
        // 0x15a7a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7A4u;
        goto label_fallthrough_0x15a79c;
    }
    ctx->pc = 0x15A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A7A4u);
        ctx->pc = 0x15A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A79Cu;
        // 0x15a7a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A79Cu, 0x15A7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a79c:
    ctx->pc = 0x15A7A4u;
}
