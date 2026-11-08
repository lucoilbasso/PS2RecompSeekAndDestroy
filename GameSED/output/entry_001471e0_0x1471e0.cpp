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

// Function: entry_001471e0
// Address: 0x1471e0 - 0x147204
void entry_001471e0_0x1471e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001471e0_0x1471e0");
#endif

    switch (ctx->pc) {
        case 0x147200u: goto label_147200;
        default: break;
    }

    ctx->pc = 0x1471e0u;

    // 0x1471e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1471e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1471e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1471e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1471E8u;
    {
        const bool branch_taken_0x1471e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1471ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E8u;
        // 0x1471ec: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471e8) {
            ctx->pc = 0x147204u;
            return;
        }
    }
    ctx->pc = 0x1471F0u;
    // 0x1471f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1471f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1471f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471f8: 0xc051a64  jal         func_146990
    ctx->pc = 0x1471F8u;
    SET_GPR_U32(ctx, 31, 0x147200u);
    ctx->pc = 0x1471FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1471F8u;
    // 0x1471fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x1471F8u, 0x147200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147200u;
label_147200:
    // 0x147200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147204u;
}
