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

// Function: entry_00107ac0
// Address: 0x107ac0 - 0x107ad0
void entry_00107ac0_0x107ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ac0_0x107ac0");
#endif

    ctx->pc = 0x107ac0u;

    // 0x107ac0: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x107ac0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x107ac4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x107AC4u;
    {
        const bool branch_taken_0x107ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AC4u;
        // 0x107ac8: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ac4) {
            ctx->pc = 0x107B34u;
            return;
        }
    }
    ctx->pc = 0x107ACCu;
    // 0x107acc: 0x0  nop
    ctx->pc = 0x107accu;
    // NOP
    ctx->pc = 0x107ad0u;
}
