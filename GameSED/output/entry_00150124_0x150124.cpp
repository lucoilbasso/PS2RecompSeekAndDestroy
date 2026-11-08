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

// Function: entry_00150124
// Address: 0x150124 - 0x150150
void entry_00150124_0x150124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150124_0x150124");
#endif

    ctx->pc = 0x150124u;

    // 0x150124: 0x8e030840  lw          $v1, 0x840($s0)
    ctx->pc = 0x150124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
    // 0x150128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15012c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15012Cu;
    {
        const bool branch_taken_0x15012c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15012Cu;
        // 0x150130: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15012c) {
            ctx->pc = 0x150170u;
            return;
        }
    }
    ctx->pc = 0x150134u;
    // 0x150134: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x150134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x150138: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x150138u;
    {
        const bool branch_taken_0x150138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150138) {
            ctx->pc = 0x15013Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150138u;
            // 0x15013c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150150u;
            return;
        }
    }
    ctx->pc = 0x150140u;
    // 0x150140: 0x4600028  bltz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x150140u;
    {
        const bool branch_taken_0x150140 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x150140) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x150148u;
    // 0x150148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150148u;
    {
        const bool branch_taken_0x150148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150148) {
            ctx->pc = 0x150160u;
            return;
        }
    }
    ctx->pc = 0x150150u;
}
