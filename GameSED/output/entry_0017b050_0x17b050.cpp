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

// Function: entry_0017b050
// Address: 0x17b050 - 0x17b070
void entry_0017b050_0x17b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b050_0x17b050");
#endif

    switch (ctx->pc) {
        case 0x17b064u: goto label_17b064;
        default: break;
    }

    ctx->pc = 0x17b050u;

    // 0x17b050: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b054: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B054u;
    {
        const bool branch_taken_0x17b054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B054u;
        // 0x17b058: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b054) {
            ctx->pc = 0x17B070u;
            return;
        }
    }
    ctx->pc = 0x17B05Cu;
    // 0x17b05c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B05Cu;
    SET_GPR_U32(ctx, 31, 0x17B064u);
    ctx->pc = 0x17B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B05Cu;
    // 0x17b060: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B05Cu, 0x17B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B064u;
label_17b064:
    // 0x17b064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B064u;
    {
        const bool branch_taken_0x17b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B064u;
        // 0x17b068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b064) {
            ctx->pc = 0x17B084u;
            return;
        }
    }
    ctx->pc = 0x17B06Cu;
    // 0x17b06c: 0x0  nop
    ctx->pc = 0x17b06cu;
    // NOP
    ctx->pc = 0x17b070u;
}
