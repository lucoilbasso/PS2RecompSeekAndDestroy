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

// Function: entry_00153a10
// Address: 0x153a10 - 0x153a2c
void entry_00153a10_0x153a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153a10_0x153a10");
#endif

    ctx->pc = 0x153a10u;

    // 0x153a10: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x153a14: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x153a18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x153a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x153a1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153A1Cu;
    {
        const bool branch_taken_0x153a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153a1c) {
            ctx->pc = 0x153A2Cu;
            return;
        }
    }
    ctx->pc = 0x153A24u;
    // 0x153a24: 0xc054368  jal         func_150DA0
    ctx->pc = 0x153A24u;
    SET_GPR_U32(ctx, 31, 0x153A2Cu);
    ctx->pc = 0x153A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A24u;
    // 0x153a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150DA0u, 0x153A24u, 0x153A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A2Cu;
}
