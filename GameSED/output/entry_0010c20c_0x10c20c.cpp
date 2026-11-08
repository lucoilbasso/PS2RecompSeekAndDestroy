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

// Function: entry_0010c20c
// Address: 0x10c20c - 0x10c21c
void entry_0010c20c_0x10c20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c20c_0x10c20c");
#endif

    ctx->pc = 0x10c20cu;

    // 0x10c20c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x10c20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10c210: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10C210u;
    {
        const bool branch_taken_0x10c210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C210u;
        // 0x10c214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c210) {
            ctx->pc = 0x10C200u;
            return;
        }
    }
    ctx->pc = 0x10C218u;
    // 0x10c218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10c21cu;
}
