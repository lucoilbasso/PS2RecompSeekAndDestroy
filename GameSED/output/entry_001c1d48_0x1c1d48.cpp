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

// Function: entry_001c1d48
// Address: 0x1c1d48 - 0x1c1d60
void entry_001c1d48_0x1c1d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1d48_0x1c1d48");
#endif

    ctx->pc = 0x1c1d48u;

    // 0x1c1d48: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1d4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D4Cu;
    {
        const bool branch_taken_0x1c1d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D4Cu;
        // 0x1c1d50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d4c) {
            ctx->pc = 0x1C1D60u;
            return;
        }
    }
    ctx->pc = 0x1C1D54u;
    // 0x1c1d54: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1c1d58: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1D58u;
    SET_GPR_U32(ctx, 31, 0x1C1D60u);
    ctx->pc = 0x1C1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D58u;
    // 0x1c1d5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1D58u, 0x1C1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D60u;
}
