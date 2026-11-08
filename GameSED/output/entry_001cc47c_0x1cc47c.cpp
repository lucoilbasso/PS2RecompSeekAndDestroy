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

// Function: entry_001cc47c
// Address: 0x1cc47c - 0x1cc48c
void entry_001cc47c_0x1cc47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc47c_0x1cc47c");
#endif

    ctx->pc = 0x1cc47cu;

    // 0x1cc47c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1cc47cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1cc480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc484: 0x5642ffa2  bnel        $s2, $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x1CC484u;
    {
        const bool branch_taken_0x1cc484 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc484) {
            ctx->pc = 0x1CC488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC484u;
            // 0x1cc488: 0x8e690008  lw          $t1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC310u;
            return;
        }
    }
    ctx->pc = 0x1CC48Cu;
}
