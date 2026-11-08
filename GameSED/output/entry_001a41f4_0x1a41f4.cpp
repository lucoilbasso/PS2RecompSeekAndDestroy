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

// Function: entry_001a41f4
// Address: 0x1a41f4 - 0x1a4214
void entry_001a41f4_0x1a41f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a41f4_0x1a41f4");
#endif

    switch (ctx->pc) {
        case 0x1a4208u: goto label_1a4208;
        case 0x1a4210u: goto label_1a4210;
        default: break;
    }

    ctx->pc = 0x1a41f4u;

    // 0x1a41f4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1a41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a41f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A41F8u;
    {
        const bool branch_taken_0x1a41f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a41f8) {
            ctx->pc = 0x1A41FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A41F8u;
            // 0x1a41fc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4214u;
            return;
        }
    }
    ctx->pc = 0x1A4200u;
    // 0x1a4200: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A4200u;
    SET_GPR_U32(ctx, 31, 0x1A4208u);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A4200u, 0x1A4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4208u;
label_1a4208:
    // 0x1a4208: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A4208u;
    SET_GPR_U32(ctx, 31, 0x1A4210u);
    ctx->pc = 0x1A420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4208u;
    // 0x1a420c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A4208u, 0x1A4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4210u;
label_1a4210:
    // 0x1a4210: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x1a4214u;
}
