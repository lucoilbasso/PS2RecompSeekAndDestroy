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

// Function: entry_00142f3c
// Address: 0x142f3c - 0x142f58
void entry_00142f3c_0x142f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142f3c_0x142f3c");
#endif

    ctx->pc = 0x142f3cu;

    // 0x142f3c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142F3Cu;
    {
        const bool branch_taken_0x142f3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x142F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F3Cu;
        // 0x142f40: 0xae300328  sw          $s0, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f3c) {
            ctx->pc = 0x142F58u;
            return;
        }
    }
    ctx->pc = 0x142F44u;
    // 0x142f44: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x142f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x142f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f4c: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x142f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x142f50: 0xc068186  jal         func_1A0618
    ctx->pc = 0x142F50u;
    SET_GPR_U32(ctx, 31, 0x142F58u);
    ctx->pc = 0x142F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F50u;
    // 0x142f54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x142F50u, 0x142F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F58u;
}
