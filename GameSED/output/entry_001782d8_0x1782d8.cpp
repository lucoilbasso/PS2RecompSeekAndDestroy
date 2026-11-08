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

// Function: entry_001782d8
// Address: 0x1782d8 - 0x178304
void entry_001782d8_0x1782d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001782d8_0x1782d8");
#endif

    switch (ctx->pc) {
        case 0x1782e0u: goto label_1782e0;
        default: break;
    }

    ctx->pc = 0x1782d8u;

    // 0x1782d8: 0xc06ecd2  jal         func_1BB348
    ctx->pc = 0x1782D8u;
    SET_GPR_U32(ctx, 31, 0x1782E0u);
    ctx->pc = 0x1BB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB348u, 0x1782D8u, 0x1782E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782E0u;
label_1782e0:
    // 0x1782e0: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1782E0u;
    {
        const bool branch_taken_0x1782e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1782E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782E0u;
        // 0x1782e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782e0) {
            ctx->pc = 0x178308u;
            return;
        }
    }
    ctx->pc = 0x1782E8u;
    // 0x1782e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1782ec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1782ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1782f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1782F0u;
    {
        const bool branch_taken_0x1782f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1782F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782F0u;
        // 0x1782f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782f0) {
            ctx->pc = 0x178304u;
            return;
        }
    }
    ctx->pc = 0x1782F8u;
    // 0x1782f8: 0x26c579d0  addiu       $a1, $s6, 0x79D0
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 31184));
    // 0x1782fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1782FCu;
    SET_GPR_U32(ctx, 31, 0x178304u);
    ctx->pc = 0x178300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782FCu;
    // 0x178300: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1782FCu, 0x178304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178304u;
}
