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

// Function: entry_0015bb54
// Address: 0x15bb54 - 0x15bb78
void entry_0015bb54_0x15bb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb54_0x15bb54");
#endif

    ctx->pc = 0x15bb54u;

label_15bb54:
    // 0x15bb54: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bb58:
    // 0x15bb58: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bb5c:
    if (ctx->pc == 0x15BB5Cu) {
        ctx->pc = 0x15BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB58u;
        // 0x15bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB60u;
        goto label_15bb60;
    }
    ctx->pc = 0x15BB58u;
    {
        const bool branch_taken_0x15bb58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB58u;
        // 0x15bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb58) {
            ctx->pc = 0x15BB78u;
            return;
        }
    }
    ctx->pc = 0x15BB60u;
label_15bb60:
    // 0x15bb60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb64:
    // 0x15bb64: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb68:
    // 0x15bb68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb6c:
    // 0x15bb6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb70:
    // 0x15bb70: 0x60f809  jalr        $v1
label_15bb74:
    if (ctx->pc == 0x15BB74u) {
        ctx->pc = 0x15BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB70u;
        // 0x15bb74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB78u;
        goto label_fallthrough_0x15bb70;
    }
    ctx->pc = 0x15BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB78u);
        ctx->pc = 0x15BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB70u;
        // 0x15bb74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB70u, 0x15BB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15bb70:
    ctx->pc = 0x15BB78u;
}
