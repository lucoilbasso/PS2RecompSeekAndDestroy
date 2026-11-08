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

// Function: entry_001225f0
// Address: 0x1225f0 - 0x122610
void entry_001225f0_0x1225f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001225f0_0x1225f0");
#endif

    switch (ctx->pc) {
        case 0x122600u: goto label_122600;
        default: break;
    }

    ctx->pc = 0x1225f0u;

    // 0x1225f0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1225F0u;
    {
        const bool branch_taken_0x1225f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1225F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225F0u;
        // 0x1225f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225f0) {
            ctx->pc = 0x122610u;
            return;
        }
    }
    ctx->pc = 0x1225F8u;
    // 0x1225f8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1225F8u;
    SET_GPR_U32(ctx, 31, 0x122600u);
    ctx->pc = 0x1225FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225F8u;
    // 0x1225fc: 0x26a45c48  addiu       $a0, $s5, 0x5C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1225F8u, 0x122600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122600u;
label_122600:
    // 0x122600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122604: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x122604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122608: 0xc068186  jal         func_1A0618
    ctx->pc = 0x122608u;
    SET_GPR_U32(ctx, 31, 0x122610u);
    ctx->pc = 0x12260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122608u;
    // 0x12260c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x122608u, 0x122610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122610u;
}
