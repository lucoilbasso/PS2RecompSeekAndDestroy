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

// Function: entry_00163d98
// Address: 0x163d98 - 0x163db0
void entry_00163d98_0x163d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163d98_0x163d98");
#endif

    ctx->pc = 0x163d98u;

    // 0x163d98: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x163d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163d9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163D9Cu;
    {
        const bool branch_taken_0x163d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D9Cu;
        // 0x163da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d9c) {
            ctx->pc = 0x163DB0u;
            return;
        }
    }
    ctx->pc = 0x163DA4u;
    // 0x163da4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x163da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x163da8: 0xc0618da  jal         func_186368
    ctx->pc = 0x163DA8u;
    SET_GPR_U32(ctx, 31, 0x163DB0u);
    ctx->pc = 0x163DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163DA8u;
    // 0x163dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163DA8u, 0x163DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DB0u;
}
