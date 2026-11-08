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

// Function: entry_0019ab24
// Address: 0x19ab24 - 0x19ab38
void entry_0019ab24_0x19ab24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab24_0x19ab24");
#endif

    ctx->pc = 0x19ab24u;

    // 0x19ab24: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x19AB24u;
    {
        const bool branch_taken_0x19ab24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB24u;
        // 0x19ab28: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab24) {
            ctx->pc = 0x19AB98u;
            return;
        }
    }
    ctx->pc = 0x19AB2Cu;
    // 0x19ab2c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19AB2Cu;
    {
        const bool branch_taken_0x19ab2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB2Cu;
        // 0x19ab30: 0x66102a  slt         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab2c) {
            ctx->pc = 0x19AB9Cu;
            return;
        }
    }
    ctx->pc = 0x19AB34u;
    // 0x19ab34: 0x0  nop
    ctx->pc = 0x19ab34u;
    // NOP
    ctx->pc = 0x19ab38u;
}
