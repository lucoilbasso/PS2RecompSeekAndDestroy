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

// Function: entry_00143160
// Address: 0x143160 - 0x143180
void entry_00143160_0x143160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143160_0x143160");
#endif

    ctx->pc = 0x143160u;

    // 0x143160: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x143164: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x143164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x143168: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x143168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14316c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x14316Cu;
    {
        const bool branch_taken_0x14316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14316Cu;
        // 0x143170: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14316c) {
            ctx->pc = 0x1430F8u;
            return;
        }
    }
    ctx->pc = 0x143174u;
    // 0x143174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143174u;
    {
        const bool branch_taken_0x143174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143174u;
        // 0x143178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143174) {
            ctx->pc = 0x143198u;
            return;
        }
    }
    ctx->pc = 0x14317Cu;
    // 0x14317c: 0x0  nop
    ctx->pc = 0x14317cu;
    // NOP
    ctx->pc = 0x143180u;
}
