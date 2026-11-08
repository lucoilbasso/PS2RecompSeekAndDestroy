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

// Function: entry_001bc940
// Address: 0x1bc940 - 0x1bc94c
void entry_001bc940_0x1bc940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc940_0x1bc940");
#endif

    ctx->pc = 0x1bc940u;

    // 0x1bc940: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC940u;
    {
        const bool branch_taken_0x1bc940 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1bc940) {
            ctx->pc = 0x1BC944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC940u;
            // 0x1bc944: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            return;
        }
    }
    ctx->pc = 0x1BC948u;
    // 0x1bc948: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x1bc948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    ctx->pc = 0x1bc94cu;
}
