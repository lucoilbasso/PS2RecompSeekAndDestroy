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

// Function: entry_00160950
// Address: 0x160950 - 0x160978
void entry_00160950_0x160950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160950_0x160950");
#endif

    ctx->pc = 0x160950u;

    // 0x160950: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x160950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x160954: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x160958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16095c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x16095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x160960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160960u;
    {
        const bool branch_taken_0x160960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160960u;
        // 0x160964: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160960) {
            ctx->pc = 0x160978u;
            return;
        }
    }
    ctx->pc = 0x160968u;
    // 0x160968: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16096c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16096Cu;
    {
        const bool branch_taken_0x16096c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16096Cu;
        // 0x160970: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16096c) {
            ctx->pc = 0x160978u;
            return;
        }
    }
    ctx->pc = 0x160974u;
    // 0x160974: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160978u;
}
