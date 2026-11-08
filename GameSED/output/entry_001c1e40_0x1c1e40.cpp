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

// Function: entry_001c1e40
// Address: 0x1c1e40 - 0x1c1e5c
void entry_001c1e40_0x1c1e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e40_0x1c1e40");
#endif

    switch (ctx->pc) {
        case 0x1c1e58u: goto label_1c1e58;
        default: break;
    }

    ctx->pc = 0x1c1e40u;

    // 0x1c1e40: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c1e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e44: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1e48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1E48u;
    {
        const bool branch_taken_0x1c1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E48u;
        // 0x1c1e4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e48) {
            ctx->pc = 0x1C1E5Cu;
            return;
        }
    }
    ctx->pc = 0x1C1E50u;
    // 0x1c1e50: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1E50u;
    SET_GPR_U32(ctx, 31, 0x1C1E58u);
    ctx->pc = 0x1C1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E50u;
    // 0x1c1e54: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1E50u, 0x1C1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E58u;
label_1c1e58:
    // 0x1c1e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1e5cu;
}
