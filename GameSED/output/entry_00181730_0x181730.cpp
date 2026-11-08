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

// Function: entry_00181730
// Address: 0x181730 - 0x181740
void entry_00181730_0x181730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181730_0x181730");
#endif

    ctx->pc = 0x181730u;

    // 0x181730: 0x1072000e  beq         $v1, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x181730u;
    {
        const bool branch_taken_0x181730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0x751021  addu        $v0, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181730) {
            ctx->pc = 0x18176Cu;
            return;
        }
    }
    ctx->pc = 0x181738u;
    // 0x181738: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x181738u;
    {
        const bool branch_taken_0x181738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181738u;
        // 0x18173c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181738) {
            ctx->pc = 0x18176Cu;
            return;
        }
    }
    ctx->pc = 0x181740u;
}
