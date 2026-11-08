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

// Function: entry_0014b9bc
// Address: 0x14b9bc - 0x14b9dc
void entry_0014b9bc_0x14b9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b9bc_0x14b9bc");
#endif

    switch (ctx->pc) {
        case 0x14b9d4u: goto label_14b9d4;
        default: break;
    }

    ctx->pc = 0x14b9bcu;

    // 0x14b9bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B9BCu;
    {
        const bool branch_taken_0x14b9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9BCu;
        // 0x14b9c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9bc) {
            ctx->pc = 0x14B9DCu;
            return;
        }
    }
    ctx->pc = 0x14B9C4u;
    // 0x14b9c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14b9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x14b9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9cc: 0xc055e0a  jal         func_157828
    ctx->pc = 0x14B9CCu;
    SET_GPR_U32(ctx, 31, 0x14B9D4u);
    ctx->pc = 0x14B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9CCu;
    // 0x14b9d0: 0x24a60140  addiu       $a2, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157828u, 0x14B9CCu, 0x14B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9D4u;
label_14b9d4:
    // 0x14b9d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b9d8: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x14b9d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    ctx->pc = 0x14b9dcu;
}
