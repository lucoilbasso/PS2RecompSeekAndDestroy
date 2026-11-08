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

// Function: entry_00196150
// Address: 0x196150 - 0x196170
void entry_00196150_0x196150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196150_0x196150");
#endif

    ctx->pc = 0x196150u;

    // 0x196150: 0x54460011  bnel        $v0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x196150u;
    {
        const bool branch_taken_0x196150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x196150) {
            ctx->pc = 0x196154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196150u;
            // 0x196154: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196198u;
            return;
        }
    }
    ctx->pc = 0x196158u;
    // 0x196158: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196158u;
    {
        const bool branch_taken_0x196158 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x19615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196158u;
        // 0x19615c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196158) {
            ctx->pc = 0x196170u;
            return;
        }
    }
    ctx->pc = 0x196160u;
    // 0x196160: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x196160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x196164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196164u;
    {
        const bool branch_taken_0x196164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196164u;
        // 0x196168: 0xaca201b0  sw          $v0, 0x1B0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196164) {
            ctx->pc = 0x196178u;
            return;
        }
    }
    ctx->pc = 0x19616Cu;
    // 0x19616c: 0x0  nop
    ctx->pc = 0x19616cu;
    // NOP
    ctx->pc = 0x196170u;
}
