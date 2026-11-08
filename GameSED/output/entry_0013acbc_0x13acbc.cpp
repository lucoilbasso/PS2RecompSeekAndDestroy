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

// Function: entry_0013acbc
// Address: 0x13acbc - 0x13acd4
void entry_0013acbc_0x13acbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013acbc_0x13acbc");
#endif

    ctx->pc = 0x13acbcu;

    // 0x13acbc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13ACBCu;
    {
        const bool branch_taken_0x13acbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13acbc) {
            ctx->pc = 0x13ACC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ACBCu;
            // 0x13acc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ACE8u;
            return;
        }
    }
    ctx->pc = 0x13ACC4u;
    // 0x13acc4: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x13acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13acc8: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x13acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13accc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x13acccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13acd0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x13acd4u;
}
