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

// Function: entry_0013b058
// Address: 0x13b058 - 0x13b068
void entry_0013b058_0x13b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b058_0x13b058");
#endif

    ctx->pc = 0x13b058u;

    // 0x13b058: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B058u;
    {
        const bool branch_taken_0x13b058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b058) {
            ctx->pc = 0x13B05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B058u;
            // 0x13b05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B06Cu;
            return;
        }
    }
    ctx->pc = 0x13B060u;
    // 0x13b060: 0xc0684a0  jal         func_1A1280
    ctx->pc = 0x13B060u;
    SET_GPR_U32(ctx, 31, 0x13B068u);
    ctx->pc = 0x13B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B060u;
    // 0x13b064: 0x26240204  addiu       $a0, $s1, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1280u, 0x13B060u, 0x13B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B068u;
}
