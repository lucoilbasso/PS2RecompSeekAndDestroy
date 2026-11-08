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

// Function: entry_001db084
// Address: 0x1db084 - 0x1db0b4
void entry_001db084_0x1db084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db084_0x1db084");
#endif

    ctx->pc = 0x1db084u;

label_1db084:
    // 0x1db084: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_1db088:
    if (ctx->pc == 0x1DB088u) {
        ctx->pc = 0x1DB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB084u;
        // 0x1db088: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB08Cu;
        goto label_1db08c;
    }
    ctx->pc = 0x1DB084u;
    {
        const bool branch_taken_0x1db084 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB084u;
        // 0x1db088: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db084) {
            ctx->pc = 0x1DB0B4u;
            return;
        }
    }
    ctx->pc = 0x1DB08Cu;
label_1db08c:
    // 0x1db08c: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_1db090:
    // 0x1db090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db094:
    // 0x1db094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1db098:
    // 0x1db098: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1db098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1db09c:
    // 0x1db09c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1db09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1db0a0:
    // 0x1db0a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1db0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1db0a4:
    // 0x1db0a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db0a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db0a8:
    // 0x1db0a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db0ac:
    // 0x1db0ac: 0x60f809  jalr        $v1
label_1db0b0:
    if (ctx->pc == 0x1DB0B0u) {
        ctx->pc = 0x1DB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0ACu;
        // 0x1db0b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0B4u;
        goto label_fallthrough_0x1db0ac;
    }
    ctx->pc = 0x1DB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB0B4u);
        ctx->pc = 0x1DB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0ACu;
        // 0x1db0b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB0ACu, 0x1DB0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1db0ac:
    ctx->pc = 0x1DB0B4u;
}
