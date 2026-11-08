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

// Function: entry_0015cdbc
// Address: 0x15cdbc - 0x15cde0
void entry_0015cdbc_0x15cdbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cdbc_0x15cdbc");
#endif

    ctx->pc = 0x15cdbcu;

label_15cdbc:
    // 0x15cdbc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15cdc0:
    // 0x15cdc0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cdc4:
    if (ctx->pc == 0x15CDC4u) {
        ctx->pc = 0x15CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC0u;
        // 0x15cdc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDC8u;
        goto label_15cdc8;
    }
    ctx->pc = 0x15CDC0u;
    {
        const bool branch_taken_0x15cdc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC0u;
        // 0x15cdc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdc0) {
            ctx->pc = 0x15CDE0u;
            return;
        }
    }
    ctx->pc = 0x15CDC8u;
label_15cdc8:
    // 0x15cdc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cdcc:
    // 0x15cdcc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cdd0:
    // 0x15cdd0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cdd4:
    // 0x15cdd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cdd8:
    // 0x15cdd8: 0x60f809  jalr        $v1
label_15cddc:
    if (ctx->pc == 0x15CDDCu) {
        ctx->pc = 0x15CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD8u;
        // 0x15cddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDE0u;
        goto label_fallthrough_0x15cdd8;
    }
    ctx->pc = 0x15CDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CDE0u);
        ctx->pc = 0x15CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD8u;
        // 0x15cddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDD8u, 0x15CDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cdd8:
    ctx->pc = 0x15CDE0u;
}
