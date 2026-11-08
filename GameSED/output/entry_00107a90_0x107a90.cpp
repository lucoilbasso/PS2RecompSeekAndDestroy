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

// Function: entry_00107a90
// Address: 0x107a90 - 0x107aa0
void entry_00107a90_0x107a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a90_0x107a90");
#endif

    ctx->pc = 0x107a90u;

    // 0x107a90: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x107a90u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x107a94: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x107A94u;
    {
        const bool branch_taken_0x107a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A94u;
        // 0x107a98: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a94) {
            ctx->pc = 0x107B34u;
            return;
        }
    }
    ctx->pc = 0x107A9Cu;
    // 0x107a9c: 0x0  nop
    ctx->pc = 0x107a9cu;
    // NOP
    ctx->pc = 0x107aa0u;
}
