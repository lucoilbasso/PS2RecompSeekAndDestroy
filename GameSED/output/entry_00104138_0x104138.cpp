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

// Function: entry_00104138
// Address: 0x104138 - 0x104154
void entry_00104138_0x104138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104138_0x104138");
#endif

    ctx->pc = 0x104138u;

    // 0x104138: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x104138u;
    {
        const bool branch_taken_0x104138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104138u;
        // 0x10413c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104138) {
            ctx->pc = 0x104154u;
            return;
        }
    }
    ctx->pc = 0x104140u;
    // 0x104140: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104144: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x104144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10414c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10414Cu;
    SET_GPR_U32(ctx, 31, 0x104154u);
    ctx->pc = 0x104150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10414Cu;
    // 0x104150: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10414Cu, 0x104154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104154u;
}
