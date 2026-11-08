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

// Function: entry_0010e440
// Address: 0x10e440 - 0x10e450
void entry_0010e440_0x10e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e440_0x10e440");
#endif

    ctx->pc = 0x10e440u;

    // 0x10e440: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x10e440u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10e444: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10E444u;
    {
        const bool branch_taken_0x10e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E444u;
        // 0x10e448: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e444) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E44Cu;
    // 0x10e44c: 0x0  nop
    ctx->pc = 0x10e44cu;
    // NOP
    ctx->pc = 0x10e450u;
}
