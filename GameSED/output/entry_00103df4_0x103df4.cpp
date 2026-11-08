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

// Function: entry_00103df4
// Address: 0x103df4 - 0x103e10
void entry_00103df4_0x103df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103df4_0x103df4");
#endif

    ctx->pc = 0x103df4u;

    // 0x103df4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x103DF4u;
    {
        const bool branch_taken_0x103df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DF4u;
        // 0x103df8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103df4) {
            ctx->pc = 0x103E10u;
            return;
        }
    }
    ctx->pc = 0x103DFCu;
    // 0x103dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x103e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x103e04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e08: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x103E08u;
    SET_GPR_U32(ctx, 31, 0x103E10u);
    ctx->pc = 0x103E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E08u;
    // 0x103e0c: 0x24a519c8  addiu       $a1, $a1, 0x19C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x103E08u, 0x103E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E10u;
}
