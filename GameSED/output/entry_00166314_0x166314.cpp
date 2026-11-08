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

// Function: entry_00166314
// Address: 0x166314 - 0x166330
void entry_00166314_0x166314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166314_0x166314");
#endif

    ctx->pc = 0x166314u;

    // 0x166314: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x166314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166318: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x166318u;
    {
        const bool branch_taken_0x166318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166318u;
        // 0x16631c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166318) {
            ctx->pc = 0x166364u;
            return;
        }
    }
    ctx->pc = 0x166320u;
    // 0x166320: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x166320u;
    {
        const bool branch_taken_0x166320 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166320u;
        // 0x166324: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166320) {
            ctx->pc = 0x166364u;
            return;
        }
    }
    ctx->pc = 0x166328u;
    // 0x166328: 0x265011e4  addiu       $s0, $s2, 0x11E4
    ctx->pc = 0x166328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x16632c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x166330u;
}
