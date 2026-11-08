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

// Function: entry_001b83e4
// Address: 0x1b83e4 - 0x1b83f8
void entry_001b83e4_0x1b83e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b83e4_0x1b83e4");
#endif

    ctx->pc = 0x1b83e4u;

    // 0x1b83e4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b83e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b83e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B83E8u;
    {
        const bool branch_taken_0x1b83e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83E8u;
        // 0x1b83ec: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83e8) {
            ctx->pc = 0x1B8420u;
            return;
        }
    }
    ctx->pc = 0x1B83F0u;
    // 0x1b83f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b83f4: 0x0  nop
    ctx->pc = 0x1b83f4u;
    // NOP
    ctx->pc = 0x1b83f8u;
}
