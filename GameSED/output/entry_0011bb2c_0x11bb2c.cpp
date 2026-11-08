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

// Function: entry_0011bb2c
// Address: 0x11bb2c - 0x11bb54
void entry_0011bb2c_0x11bb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb2c_0x11bb2c");
#endif

    switch (ctx->pc) {
        case 0x11bb50u: goto label_11bb50;
        default: break;
    }

    ctx->pc = 0x11bb2cu;

label_11bb2c:
    // 0x11bb2c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_11bb30:
    if (ctx->pc == 0x11BB30u) {
        ctx->pc = 0x11BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB2Cu;
        // 0x11bb30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB34u;
        goto label_11bb34;
    }
    ctx->pc = 0x11BB2Cu;
    {
        const bool branch_taken_0x11bb2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB2Cu;
        // 0x11bb30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb2c) {
            ctx->pc = 0x11BB54u;
            return;
        }
    }
    ctx->pc = 0x11BB34u;
label_11bb34:
    // 0x11bb34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11bb38:
    // 0x11bb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bb3c:
    // 0x11bb3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11bb40:
    // 0x11bb40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11bb40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11bb44:
    // 0x11bb44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11bb48:
    // 0x11bb48: 0x60f809  jalr        $v1
label_11bb4c:
    if (ctx->pc == 0x11BB4Cu) {
        ctx->pc = 0x11BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB48u;
        // 0x11bb4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB50u;
        goto label_11bb50;
    }
    ctx->pc = 0x11BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BB50u);
        ctx->pc = 0x11BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB48u;
        // 0x11bb4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB48u, 0x11BB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BB50u;
label_11bb50:
    // 0x11bb50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x11bb54u;
}
