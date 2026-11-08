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

// Function: entry_001954d4
// Address: 0x1954d4 - 0x1954f4
void entry_001954d4_0x1954d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001954d4_0x1954d4");
#endif

    ctx->pc = 0x1954d4u;

    // 0x1954d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1954d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1954d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1954dc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1954dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1954e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1954E0u;
    {
        const bool branch_taken_0x1954e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E0u;
        // 0x1954e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954e0) {
            ctx->pc = 0x195500u;
            return;
        }
    }
    ctx->pc = 0x1954E8u;
    // 0x1954e8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1954e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1954ec: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1954ECu;
    SET_GPR_U32(ctx, 31, 0x1954F4u);
    ctx->pc = 0x1954F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954ECu;
    // 0x1954f0: 0x2484de68  addiu       $a0, $a0, -0x2198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1954ECu, 0x1954F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954F4u;
}
