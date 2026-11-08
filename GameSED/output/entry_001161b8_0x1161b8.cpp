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

// Function: entry_001161b8
// Address: 0x1161b8 - 0x1161d4
void entry_001161b8_0x1161b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001161b8_0x1161b8");
#endif

    switch (ctx->pc) {
        case 0x1161d0u: goto label_1161d0;
        default: break;
    }

    ctx->pc = 0x1161b8u;

    // 0x1161b8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1161B8u;
    {
        const bool branch_taken_0x1161b8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1161BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B8u;
        // 0x1161bc: 0x2a12006e  slti        $s2, $s0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b8) {
            ctx->pc = 0x1161D4u;
            return;
        }
    }
    ctx->pc = 0x1161C0u;
    // 0x1161c0: 0x2664f1d0  addiu       $a0, $s3, -0xE30
    ctx->pc = 0x1161c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x1161c4: 0x27c542f8  addiu       $a1, $fp, 0x42F8
    ctx->pc = 0x1161c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 17144));
    // 0x1161c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1161C8u;
    SET_GPR_U32(ctx, 31, 0x1161D0u);
    ctx->pc = 0x1161CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161C8u;
    // 0x1161cc: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1161C8u, 0x1161D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161D0u;
label_1161d0:
    // 0x1161d0: 0x2a12006e  slti        $s2, $s0, 0x6E
    ctx->pc = 0x1161d0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    ctx->pc = 0x1161d4u;
}
