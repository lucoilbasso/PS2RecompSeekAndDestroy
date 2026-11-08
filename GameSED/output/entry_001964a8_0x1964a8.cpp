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

// Function: entry_001964a8
// Address: 0x1964a8 - 0x1964c0
void entry_001964a8_0x1964a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001964a8_0x1964a8");
#endif

    ctx->pc = 0x1964a8u;

label_1964a8:
    // 0x1964a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1964a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1964ac:
    // 0x1964ac: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1964acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1964b0:
    // 0x1964b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1964b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1964b4:
    // 0x1964b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1964b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1964b8:
    // 0x1964b8: 0x60f809  jalr        $v1
label_1964bc:
    if (ctx->pc == 0x1964BCu) {
        ctx->pc = 0x1964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B8u;
        // 0x1964bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964C0u;
        goto label_fallthrough_0x1964b8;
    }
    ctx->pc = 0x1964B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1964C0u);
        ctx->pc = 0x1964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B8u;
        // 0x1964bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1964B8u, 0x1964C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1964b8:
    ctx->pc = 0x1964C0u;
}
