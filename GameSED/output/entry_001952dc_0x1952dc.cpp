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

// Function: entry_001952dc
// Address: 0x1952dc - 0x1952fc
void entry_001952dc_0x1952dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001952dc_0x1952dc");
#endif

    ctx->pc = 0x1952dcu;

    // 0x1952dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1952dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1952e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1952e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1952e4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1952e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1952e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1952E8u;
    {
        const bool branch_taken_0x1952e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1952ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952E8u;
        // 0x1952ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952e8) {
            ctx->pc = 0x195308u;
            return;
        }
    }
    ctx->pc = 0x1952F0u;
    // 0x1952f0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1952f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1952f4: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1952F4u;
    SET_GPR_U32(ctx, 31, 0x1952FCu);
    ctx->pc = 0x1952F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952F4u;
    // 0x1952f8: 0x2484de38  addiu       $a0, $a0, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1952F4u, 0x1952FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952FCu;
}
