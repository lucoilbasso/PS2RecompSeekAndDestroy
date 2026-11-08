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

// Function: entry_0019df48
// Address: 0x19df48 - 0x19df58
void entry_0019df48_0x19df48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df48_0x19df48");
#endif

    ctx->pc = 0x19df48u;

    // 0x19df48: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19DF48u;
    {
        const bool branch_taken_0x19df48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF48u;
        // 0x19df4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df48) {
            ctx->pc = 0x19DF68u;
            return;
        }
    }
    ctx->pc = 0x19DF50u;
    // 0x19df50: 0x70a618e8  pminw       $v1, $a1, $a2
    ctx->pc = 0x19df50u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x19df54: 0x32800  sll         $a1, $v1, 0
    ctx->pc = 0x19df54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x19df58u;
}
