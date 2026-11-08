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

// Function: caseD_5
// Address: 0x110d98 - 0x110da8
void caseD_5_0x110d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x110d98");
#endif

    ctx->pc = 0x110d98u;

    // 0x110d98: 0x8e303630  lw          $s0, 0x3630($s1)
    ctx->pc = 0x110d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13872)));
    // 0x110d9c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x110D9Cu;
    {
        const bool branch_taken_0x110d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D9Cu;
        // 0x110da0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d9c) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110DA4u;
    // 0x110da4: 0x0  nop
    ctx->pc = 0x110da4u;
    // NOP
    ctx->pc = 0x110da8u;
}
