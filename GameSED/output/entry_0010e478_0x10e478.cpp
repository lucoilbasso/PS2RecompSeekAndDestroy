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

// Function: entry_0010e478
// Address: 0x10e478 - 0x10e488
void entry_0010e478_0x10e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e478_0x10e478");
#endif

    ctx->pc = 0x10e478u;

    // 0x10e478: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x10e478u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10e47c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10E47Cu;
    {
        const bool branch_taken_0x10e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E47Cu;
        // 0x10e480: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e47c) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E484u;
    // 0x10e484: 0x0  nop
    ctx->pc = 0x10e484u;
    // NOP
    ctx->pc = 0x10e488u;
}
