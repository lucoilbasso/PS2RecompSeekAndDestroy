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

// Function: entry_00101d18
// Address: 0x101d18 - 0x101d30
void entry_00101d18_0x101d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101d18_0x101d18");
#endif

    ctx->pc = 0x101d18u;

    // 0x101d18: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x101D18u;
    {
        const bool branch_taken_0x101d18 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x101D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D18u;
        // 0x101d1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d18) {
            ctx->pc = 0x101D30u;
            return;
        }
    }
    ctx->pc = 0x101D20u;
    // 0x101d20: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x101d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101d24: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x101d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101d28: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101D28u;
    {
        const bool branch_taken_0x101d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101d28) {
            ctx->pc = 0x101D34u;
            return;
        }
    }
    ctx->pc = 0x101D30u;
}
