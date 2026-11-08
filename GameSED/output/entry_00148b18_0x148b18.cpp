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

// Function: entry_00148b18
// Address: 0x148b18 - 0x148b28
void entry_00148b18_0x148b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148b18_0x148b18");
#endif

    ctx->pc = 0x148b18u;

    // 0x148b18: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x148b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148b1c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x148b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x148b20: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x148B20u;
    {
        const bool branch_taken_0x148b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B20u;
        // 0x148b24: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b20) {
            ctx->pc = 0x148AF0u;
            return;
        }
    }
    ctx->pc = 0x148B28u;
}
