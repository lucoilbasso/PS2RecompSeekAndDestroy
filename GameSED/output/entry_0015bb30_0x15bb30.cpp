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

// Function: entry_0015bb30
// Address: 0x15bb30 - 0x15bb54
void entry_0015bb30_0x15bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb30_0x15bb30");
#endif

    ctx->pc = 0x15bb30u;

label_15bb30:
    // 0x15bb30: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15bb34:
    // 0x15bb34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bb38:
    if (ctx->pc == 0x15BB38u) {
        ctx->pc = 0x15BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB34u;
        // 0x15bb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB3Cu;
        goto label_15bb3c;
    }
    ctx->pc = 0x15BB34u;
    {
        const bool branch_taken_0x15bb34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB34u;
        // 0x15bb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb34) {
            ctx->pc = 0x15BB54u;
            return;
        }
    }
    ctx->pc = 0x15BB3Cu;
label_15bb3c:
    // 0x15bb3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb40:
    // 0x15bb40: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb44:
    // 0x15bb44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb48:
    // 0x15bb48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb4c:
    // 0x15bb4c: 0x60f809  jalr        $v1
label_15bb50:
    if (ctx->pc == 0x15BB50u) {
        ctx->pc = 0x15BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB4Cu;
        // 0x15bb50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB54u;
        goto label_fallthrough_0x15bb4c;
    }
    ctx->pc = 0x15BB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB54u);
        ctx->pc = 0x15BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB4Cu;
        // 0x15bb50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB4Cu, 0x15BB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15bb4c:
    ctx->pc = 0x15BB54u;
}
