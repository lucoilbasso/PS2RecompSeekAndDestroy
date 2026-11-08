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

// Function: entry_00188918
// Address: 0x188918 - 0x188938
void entry_00188918_0x188918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188918_0x188918");
#endif

    ctx->pc = 0x188918u;

label_188918:
    // 0x188918: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x188918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18891c:
    // 0x18891c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x18891cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_188920:
    // 0x188920: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188924:
    // 0x188924: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x188924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_188928:
    // 0x188928: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_18892c:
    // 0x18892c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188930:
    // 0x188930: 0x60f809  jalr        $v1
label_188934:
    if (ctx->pc == 0x188934u) {
        ctx->pc = 0x188934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188930u;
        // 0x188934: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188938u;
        goto label_fallthrough_0x188930;
    }
    ctx->pc = 0x188930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188938u);
        ctx->pc = 0x188934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188930u;
        // 0x188934: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188930u, 0x188938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x188930:
    ctx->pc = 0x188938u;
}
