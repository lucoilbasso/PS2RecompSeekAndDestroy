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

// Function: entry_001b9e9c
// Address: 0x1b9e9c - 0x1b9ebc
void entry_001b9e9c_0x1b9e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9e9c_0x1b9e9c");
#endif

    ctx->pc = 0x1b9e9cu;

label_1b9e9c:
    // 0x1b9e9c: 0x8e23d680  lw          $v1, -0x2980($s1)
    ctx->pc = 0x1b9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956672)));
label_1b9ea0:
    // 0x1b9ea0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b9ea4:
    if (ctx->pc == 0x1B9EA4u) {
        ctx->pc = 0x1B9EA8u;
        goto label_1b9ea8;
    }
    ctx->pc = 0x1B9EA0u;
    {
        const bool branch_taken_0x1b9ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ea0) {
            ctx->pc = 0x1B9EBCu;
            return;
        }
    }
    ctx->pc = 0x1B9EA8u;
label_1b9ea8:
    // 0x1b9ea8: 0x8e02c0d8  lw          $v0, -0x3F28($s0)
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
label_1b9eac:
    // 0x1b9eac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b9eb0:
    if (ctx->pc == 0x1B9EB0u) {
        ctx->pc = 0x1B9EB4u;
        goto label_1b9eb4;
    }
    ctx->pc = 0x1B9EACu;
    {
        const bool branch_taken_0x1b9eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9eac) {
            ctx->pc = 0x1B9EBCu;
            return;
        }
    }
    ctx->pc = 0x1B9EB4u;
label_1b9eb4:
    // 0x1b9eb4: 0x60f809  jalr        $v1
label_1b9eb8:
    if (ctx->pc == 0x1B9EB8u) {
        ctx->pc = 0x1B9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EB4u;
        // 0x1b9eb8: 0x8e04c0d8  lw          $a0, -0x3F28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EBCu;
        goto label_fallthrough_0x1b9eb4;
    }
    ctx->pc = 0x1B9EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9EBCu);
        ctx->pc = 0x1B9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EB4u;
        // 0x1b9eb8: 0x8e04c0d8  lw          $a0, -0x3F28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9EB4u, 0x1B9EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b9eb4:
    ctx->pc = 0x1B9EBCu;
}
