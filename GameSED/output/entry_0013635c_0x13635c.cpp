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

// Function: entry_0013635c
// Address: 0x13635c - 0x136378
void entry_0013635c_0x13635c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013635c_0x13635c");
#endif

    ctx->pc = 0x13635cu;

label_13635c:
    // 0x13635c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13635cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136360:
    // 0x136360: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x136360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136364:
    // 0x136364: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136368:
    // 0x136368: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13636c:
    // 0x13636c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136370:
    // 0x136370: 0x60f809  jalr        $v1
label_136374:
    if (ctx->pc == 0x136374u) {
        ctx->pc = 0x136374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136370u;
        // 0x136374: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136378u;
        goto label_fallthrough_0x136370;
    }
    ctx->pc = 0x136370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136378u);
        ctx->pc = 0x136374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136370u;
        // 0x136374: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136370u, 0x136378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x136370:
    ctx->pc = 0x136378u;
}
