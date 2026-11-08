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

// Function: entry_001d6c08
// Address: 0x1d6c08 - 0x1d6c18
void entry_001d6c08_0x1d6c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6c08_0x1d6c08");
#endif

    ctx->pc = 0x1d6c08u;

    // 0x1d6c08: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1d6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1d6c0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d6c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6c10: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D6C10u;
    {
        const bool branch_taken_0x1d6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C10u;
        // 0x1d6c14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c10) {
            ctx->pc = 0x1D6BD0u;
            return;
        }
    }
    ctx->pc = 0x1D6C18u;
}
