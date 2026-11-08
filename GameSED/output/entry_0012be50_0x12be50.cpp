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

// Function: entry_0012be50
// Address: 0x12be50 - 0x12be80
void entry_0012be50_0x12be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be50_0x12be50");
#endif

    switch (ctx->pc) {
        case 0x12be58u: goto label_12be58;
        case 0x12be78u: goto label_12be78;
        default: break;
    }

    ctx->pc = 0x12be50u;

label_12be50:
    // 0x12be50: 0xc048f2a  jal         func_123CA8
label_12be54:
    if (ctx->pc == 0x12BE54u) {
        ctx->pc = 0x12BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE50u;
        // 0x12be54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE58u;
        goto label_12be58;
    }
    ctx->pc = 0x12BE50u;
    SET_GPR_U32(ctx, 31, 0x12BE58u);
    ctx->pc = 0x12BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE50u;
    // 0x12be54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CA8u, 0x12BE50u, 0x12BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE58u;
label_12be58:
    // 0x12be58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_12be5c:
    if (ctx->pc == 0x12BE5Cu) {
        ctx->pc = 0x12BE60u;
        goto label_12be60;
    }
    ctx->pc = 0x12BE58u;
    {
        const bool branch_taken_0x12be58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12be58) {
            ctx->pc = 0x12BE80u;
            return;
        }
    }
    ctx->pc = 0x12BE60u;
label_12be60:
    // 0x12be60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12be64:
    // 0x12be64: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x12be64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_12be68:
    // 0x12be68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12be6c:
    // 0x12be6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12be70:
    // 0x12be70: 0x60f809  jalr        $v1
label_12be74:
    if (ctx->pc == 0x12BE74u) {
        ctx->pc = 0x12BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE70u;
        // 0x12be74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE78u;
        goto label_12be78;
    }
    ctx->pc = 0x12BE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12BE78u);
        ctx->pc = 0x12BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE70u;
        // 0x12be74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BE70u, 0x12BE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12BE78u;
label_12be78:
    // 0x12be78: 0x10000009  b           . + 4 + (0x9 << 2)
label_12be7c:
    if (ctx->pc == 0x12BE7Cu) {
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE80u;
        goto label_fallthrough_0x12be78;
    }
    ctx->pc = 0x12BE78u;
    {
        const bool branch_taken_0x12be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be78) {
            ctx->pc = 0x12BEA0u;
            return;
        }
    }
label_fallthrough_0x12be78:
    ctx->pc = 0x12BE80u;
}
