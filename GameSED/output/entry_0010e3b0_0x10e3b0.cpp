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

// Function: entry_0010e3b0
// Address: 0x10e3b0 - 0x10e3c0
void entry_0010e3b0_0x10e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e3b0_0x10e3b0");
#endif

    ctx->pc = 0x10e3b0u;

    // 0x10e3b0: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x10e3b0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x10e3b4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x10E3B4u;
    {
        const bool branch_taken_0x10e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3B4u;
        // 0x10e3b8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3b4) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E3BCu;
    // 0x10e3bc: 0x0  nop
    ctx->pc = 0x10e3bcu;
    // NOP
    ctx->pc = 0x10e3c0u;
}
