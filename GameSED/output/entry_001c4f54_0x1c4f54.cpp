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

// Function: entry_001c4f54
// Address: 0x1c4f54 - 0x1c4f78
void entry_001c4f54_0x1c4f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f54_0x1c4f54");
#endif

    switch (ctx->pc) {
        case 0x1c4f6cu: goto label_1c4f6c;
        default: break;
    }

    ctx->pc = 0x1c4f54u;

    // 0x1c4f54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c4f58: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x1c4f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
    // 0x1c4f5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F5Cu;
    {
        const bool branch_taken_0x1c4f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F5Cu;
        // 0x1c4f60: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f5c) {
            ctx->pc = 0x1C4F78u;
            return;
        }
    }
    ctx->pc = 0x1C4F64u;
    // 0x1c4f64: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1C4F64u;
    SET_GPR_U32(ctx, 31, 0x1C4F6Cu);
    ctx->pc = 0x1C4F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F64u;
    // 0x1c4f68: 0x2484b7c0  addiu       $a0, $a0, -0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1C4F64u, 0x1C4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F6Cu;
label_1c4f6c:
    // 0x1c4f6c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1c4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1c4f70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4F70u;
    {
        const bool branch_taken_0x1c4f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F70u;
        // 0x1c4f74: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f70) {
            ctx->pc = 0x1C4F7Cu;
            return;
        }
    }
    ctx->pc = 0x1C4F78u;
}
