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

// Function: entry_0019cc18
// Address: 0x19cc18 - 0x19cc28
void entry_0019cc18_0x19cc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc18_0x19cc18");
#endif

    ctx->pc = 0x19cc18u;

    // 0x19cc18: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x19cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x19cc1c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x19cc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19cc20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC20u;
    {
        const bool branch_taken_0x19cc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC20u;
        // 0x19cc24: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc20) {
            ctx->pc = 0x19CC44u;
            return;
        }
    }
    ctx->pc = 0x19CC28u;
}
