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

// Function: entry_0017194c
// Address: 0x17194c - 0x171958
void entry_0017194c_0x17194c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017194c_0x17194c");
#endif

    ctx->pc = 0x17194cu;

    // 0x17194c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x17194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x171950: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x171950u;
    {
        const bool branch_taken_0x171950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171950u;
        // 0x171954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171950) {
            ctx->pc = 0x171960u;
            return;
        }
    }
    ctx->pc = 0x171958u;
}
