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

// Function: entry_0014be28
// Address: 0x14be28 - 0x14be48
void entry_0014be28_0x14be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014be28_0x14be28");
#endif

    ctx->pc = 0x14be28u;

    // 0x14be28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14be2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14be2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14be30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BE30u;
    {
        const bool branch_taken_0x14be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14be30) {
            ctx->pc = 0x14BE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BE30u;
            // 0x14be34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BE48u;
            return;
        }
    }
    ctx->pc = 0x14BE38u;
    // 0x14be38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14be3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14BE3Cu;
    {
        const bool branch_taken_0x14be3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE3Cu;
        // 0x14be40: 0xa4e3023a  sh          $v1, 0x23A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be3c) {
            ctx->pc = 0x14BE6Cu;
            return;
        }
    }
    ctx->pc = 0x14BE44u;
    // 0x14be44: 0x0  nop
    ctx->pc = 0x14be44u;
    // NOP
    ctx->pc = 0x14be48u;
}
