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

// Function: entry_0011d0a0
// Address: 0x11d0a0 - 0x11d0b8
void entry_0011d0a0_0x11d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0a0_0x11d0a0");
#endif

    ctx->pc = 0x11d0a0u;

    // 0x11d0a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x11d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x11d0a4: 0xc22804  sllv        $a1, $v0, $a2
    ctx->pc = 0x11d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d0a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11d0ac: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D0ACu;
    {
        const bool branch_taken_0x11d0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x11D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0ACu;
        // 0x11d0b0: 0x28c40003  slti        $a0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0ac) {
            ctx->pc = 0x11D0B8u;
            return;
        }
    }
    ctx->pc = 0x11D0B4u;
    // 0x11d0b4: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x11d0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    ctx->pc = 0x11d0b8u;
}
