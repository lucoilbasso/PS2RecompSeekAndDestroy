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

// Function: entry_0019cc44
// Address: 0x19cc44 - 0x19cc50
void entry_0019cc44_0x19cc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc44_0x19cc44");
#endif

    ctx->pc = 0x19cc44u;

    // 0x19cc44: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CC44u;
    {
        const bool branch_taken_0x19cc44 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC44u;
        // 0x19cc48: 0x10e1026  xor         $v0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc44) {
            ctx->pc = 0x19CC50u;
            return;
        }
    }
    ctx->pc = 0x19CC4Cu;
    // 0x19cc4c: 0x2600b  movn        $t4, $zero, $v0
    ctx->pc = 0x19cc4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
    ctx->pc = 0x19cc50u;
}
