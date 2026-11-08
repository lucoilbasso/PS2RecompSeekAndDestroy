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

// Function: entry_0019ace4
// Address: 0x19ace4 - 0x19acf8
void entry_0019ace4_0x19ace4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ace4_0x19ace4");
#endif

    ctx->pc = 0x19ace4u;

    // 0x19ace4: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x19ACE4u;
    {
        const bool branch_taken_0x19ace4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACE4u;
        // 0x19ace8: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ace4) {
            ctx->pc = 0x19AD60u;
            return;
        }
    }
    ctx->pc = 0x19ACECu;
    // 0x19acec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19ACECu;
    {
        const bool branch_taken_0x19acec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACECu;
        // 0x19acf0: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acec) {
            ctx->pc = 0x19AD64u;
            return;
        }
    }
    ctx->pc = 0x19ACF4u;
    // 0x19acf4: 0x0  nop
    ctx->pc = 0x19acf4u;
    // NOP
    ctx->pc = 0x19acf8u;
}
