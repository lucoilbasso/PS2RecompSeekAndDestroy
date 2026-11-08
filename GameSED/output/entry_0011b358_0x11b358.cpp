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

// Function: entry_0011b358
// Address: 0x11b358 - 0x11b378
void entry_0011b358_0x11b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b358_0x11b358");
#endif

    ctx->pc = 0x11b358u;

label_11b358:
    // 0x11b358: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x11b358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_11b35c:
    // 0x11b35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b360:
    // 0x11b360: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11b364:
    // 0x11b364: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b368:
    // 0x11b368: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b36c:
    // 0x11b36c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b370:
    // 0x11b370: 0x60f809  jalr        $v1
label_11b374:
    if (ctx->pc == 0x11B374u) {
        ctx->pc = 0x11B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B370u;
        // 0x11b374: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B378u;
        goto label_fallthrough_0x11b370;
    }
    ctx->pc = 0x11B370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B378u);
        ctx->pc = 0x11B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B370u;
        // 0x11b374: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B370u, 0x11B378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11b370:
    ctx->pc = 0x11B378u;
}
