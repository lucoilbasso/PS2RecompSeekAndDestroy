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

// Function: entry_001d6958
// Address: 0x1d6958 - 0x1d6968
void entry_001d6958_0x1d6958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6958_0x1d6958");
#endif

    ctx->pc = 0x1d6958u;

    // 0x1d6958: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1d6958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1d695c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d695cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6960: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D6960u;
    {
        const bool branch_taken_0x1d6960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6960u;
        // 0x1d6964: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6960) {
            ctx->pc = 0x1D6920u;
            return;
        }
    }
    ctx->pc = 0x1D6968u;
}
