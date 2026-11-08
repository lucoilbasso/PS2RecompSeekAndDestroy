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

// Function: entry_0019fbd8
// Address: 0x19fbd8 - 0x19fbec
void entry_0019fbd8_0x19fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbd8_0x19fbd8");
#endif

    ctx->pc = 0x19fbd8u;

    // 0x19fbd8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FBD8u;
    {
        const bool branch_taken_0x19fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fbd8) {
            ctx->pc = 0x19FBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FBD8u;
            // 0x19fbdc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBF0u;
            return;
        }
    }
    ctx->pc = 0x19FBE0u;
    // 0x19fbe0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x19fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x19fbe4: 0x1044fff0  beq         $v0, $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19FBE4u;
    {
        const bool branch_taken_0x19fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19fbe4) {
            ctx->pc = 0x19FBA8u;
            return;
        }
    }
    ctx->pc = 0x19FBECu;
}
