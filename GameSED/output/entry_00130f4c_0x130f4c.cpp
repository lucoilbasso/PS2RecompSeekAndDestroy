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

// Function: entry_00130f4c
// Address: 0x130f4c - 0x130f60
void entry_00130f4c_0x130f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f4c_0x130f4c");
#endif

    ctx->pc = 0x130f4cu;

    // 0x130f4c: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x130F4Cu;
    {
        const bool branch_taken_0x130f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f4c) {
            ctx->pc = 0x130F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F4Cu;
            // 0x130f50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130F54u;
    // 0x130f54: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x130f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x130f58: 0x5050ffc5  beql        $v0, $s0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x130F58u;
    {
        const bool branch_taken_0x130f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x130f58) {
            ctx->pc = 0x130F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F58u;
            // 0x130f5c: 0x8cc20024  lw          $v0, 0x24($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130E70u;
            return;
        }
    }
    ctx->pc = 0x130F60u;
}
