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

// Function: entry_001bb0e0
// Address: 0x1bb0e0 - 0x1bb0fc
void entry_001bb0e0_0x1bb0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb0e0_0x1bb0e0");
#endif

    ctx->pc = 0x1bb0e0u;

    // 0x1bb0e0: 0x8ea2c0b4  lw          $v0, -0x3F4C($s5)
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951092)));
    // 0x1bb0e4: 0x2510d240  addiu       $s0, $t0, -0x2DC0
    ctx->pc = 0x1bb0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955584));
    // 0x1bb0e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1bb0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1bb0ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB0ECu;
    {
        const bool branch_taken_0x1bb0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ECu;
        // 0x1bb0f0: 0xad00d240  sw          $zero, -0x2DC0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294955584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0ec) {
            ctx->pc = 0x1BB0FCu;
            return;
        }
    }
    ctx->pc = 0x1BB0F4u;
    // 0x1bb0f4: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BB0F4u;
    SET_GPR_U32(ctx, 31, 0x1BB0FCu);
    ctx->pc = 0x1BB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0F4u;
    // 0x1bb0f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BB0F4u, 0x1BB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0FCu;
}
