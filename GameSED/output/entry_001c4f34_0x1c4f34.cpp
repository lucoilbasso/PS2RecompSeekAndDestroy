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

// Function: entry_001c4f34
// Address: 0x1c4f34 - 0x1c4f54
void entry_001c4f34_0x1c4f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f34_0x1c4f34");
#endif

    switch (ctx->pc) {
        case 0x1c4f48u: goto label_1c4f48;
        default: break;
    }

    ctx->pc = 0x1c4f34u;

    // 0x1c4f34: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x1c4f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
    // 0x1c4f38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F38u;
    {
        const bool branch_taken_0x1c4f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F38u;
        // 0x1c4f3c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f38) {
            ctx->pc = 0x1C4F54u;
            return;
        }
    }
    ctx->pc = 0x1C4F40u;
    // 0x1c4f40: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1C4F40u;
    SET_GPR_U32(ctx, 31, 0x1C4F48u);
    ctx->pc = 0x1C4F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F40u;
    // 0x1c4f44: 0x2484b798  addiu       $a0, $a0, -0x4868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1C4F40u, 0x1C4F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F48u;
label_1c4f48:
    // 0x1c4f48: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1c4f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1c4f4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C4F4Cu;
    {
        const bool branch_taken_0x1c4f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F4Cu;
        // 0x1c4f50: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f4c) {
            ctx->pc = 0x1C4F7Cu;
            return;
        }
    }
    ctx->pc = 0x1C4F54u;
}
