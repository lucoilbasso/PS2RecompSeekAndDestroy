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

// Function: entry_001d7248
// Address: 0x1d7248 - 0x1d725c
void entry_001d7248_0x1d7248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7248_0x1d7248");
#endif

    ctx->pc = 0x1d7248u;

    // 0x1d7248: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d724c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d724cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d7250: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d7250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7254: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D7254u;
    {
        const bool branch_taken_0x1d7254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7254u;
        // 0x1d7258: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7254) {
            ctx->pc = 0x1D7210u;
            return;
        }
    }
    ctx->pc = 0x1D725Cu;
}
