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

// Function: entry_00159e1c
// Address: 0x159e1c - 0x159e28
void entry_00159e1c_0x159e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159e1c_0x159e1c");
#endif

    ctx->pc = 0x159e1cu;

    // 0x159e1c: 0x8d020260  lw          $v0, 0x260($t0)
    ctx->pc = 0x159e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 608)));
    // 0x159e20: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159E20u;
    {
        const bool branch_taken_0x159e20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x159E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E20u;
        // 0x159e24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e20) {
            ctx->pc = 0x159E34u;
            return;
        }
    }
    ctx->pc = 0x159E28u;
}
