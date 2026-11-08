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

// Function: entry_00154a18
// Address: 0x154a18 - 0x154a34
void entry_00154a18_0x154a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154a18_0x154a18");
#endif

    ctx->pc = 0x154a18u;

    // 0x154a18: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x154a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x154a1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154a20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x154A20u;
    {
        const bool branch_taken_0x154a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A20u;
        // 0x154a24: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a20) {
            ctx->pc = 0x154A34u;
            return;
        }
    }
    ctx->pc = 0x154A28u;
    // 0x154a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a2c: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x154A2Cu;
    SET_GPR_U32(ctx, 31, 0x154A34u);
    ctx->pc = 0x154A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A2Cu;
    // 0x154a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154A2Cu, 0x154A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A34u;
}
