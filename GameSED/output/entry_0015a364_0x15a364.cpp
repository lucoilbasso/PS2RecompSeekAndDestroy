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

// Function: entry_0015a364
// Address: 0x15a364 - 0x15a388
void entry_0015a364_0x15a364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a364_0x15a364");
#endif

    ctx->pc = 0x15a364u;

label_15a364:
    // 0x15a364: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15a364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15a368:
    // 0x15a368: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a36c:
    if (ctx->pc == 0x15A36Cu) {
        ctx->pc = 0x15A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A368u;
        // 0x15a36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A370u;
        goto label_15a370;
    }
    ctx->pc = 0x15A368u;
    {
        const bool branch_taken_0x15a368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A368u;
        // 0x15a36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a368) {
            ctx->pc = 0x15A388u;
            return;
        }
    }
    ctx->pc = 0x15A370u;
label_15a370:
    // 0x15a370: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a374:
    // 0x15a374: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a378:
    // 0x15a378: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a37c:
    // 0x15a37c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a380:
    // 0x15a380: 0x60f809  jalr        $v1
label_15a384:
    if (ctx->pc == 0x15A384u) {
        ctx->pc = 0x15A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A380u;
        // 0x15a384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A388u;
        goto label_fallthrough_0x15a380;
    }
    ctx->pc = 0x15A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A388u);
        ctx->pc = 0x15A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A380u;
        // 0x15a384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A380u, 0x15A388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a380:
    ctx->pc = 0x15A388u;
}
