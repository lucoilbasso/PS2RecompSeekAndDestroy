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

// Function: entry_001d55d4
// Address: 0x1d55d4 - 0x1d55e8
void entry_001d55d4_0x1d55d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d55d4_0x1d55d4");
#endif

    ctx->pc = 0x1d55d4u;

    // 0x1d55d4: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d55d8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D55D8u;
    {
        const bool branch_taken_0x1d55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d55d8) {
            ctx->pc = 0x1D55DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D55D8u;
            // 0x1d55dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5610u;
            return;
        }
    }
    ctx->pc = 0x1D55E0u;
    // 0x1d55e0: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x1d55e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1d55e4: 0x0  nop
    ctx->pc = 0x1d55e4u;
    // NOP
    ctx->pc = 0x1d55e8u;
}
