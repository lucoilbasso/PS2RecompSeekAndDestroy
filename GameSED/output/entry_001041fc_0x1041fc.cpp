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

// Function: entry_001041fc
// Address: 0x1041fc - 0x104218
void entry_001041fc_0x1041fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001041fc_0x1041fc");
#endif

    ctx->pc = 0x1041fcu;

    // 0x1041fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1041FCu;
    {
        const bool branch_taken_0x1041fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041FCu;
        // 0x104200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041fc) {
            ctx->pc = 0x104218u;
            return;
        }
    }
    ctx->pc = 0x104204u;
    // 0x104204: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104208: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x104208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10420c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10420cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104210: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104210u;
    SET_GPR_U32(ctx, 31, 0x104218u);
    ctx->pc = 0x104214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104210u;
    // 0x104214: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104210u, 0x104218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104218u;
}
