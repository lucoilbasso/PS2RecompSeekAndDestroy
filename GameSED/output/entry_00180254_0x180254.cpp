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

// Function: entry_00180254
// Address: 0x180254 - 0x180268
void entry_00180254_0x180254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180254_0x180254");
#endif

    ctx->pc = 0x180254u;

    // 0x180254: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x180258: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x18025c: 0x325102a  slt         $v0, $t9, $a1
    ctx->pc = 0x18025cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x180260: 0x1440ff4f  bnez        $v0, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x180260u;
    {
        const bool branch_taken_0x180260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180260u;
        // 0x180264: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180260) {
            ctx->pc = 0x17FFA0u;
            return;
        }
    }
    ctx->pc = 0x180268u;
}
