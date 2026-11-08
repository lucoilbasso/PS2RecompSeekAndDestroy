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

// Function: entry_001cdb30
// Address: 0x1cdb30 - 0x1cdb48
void entry_001cdb30_0x1cdb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdb30_0x1cdb30");
#endif

    ctx->pc = 0x1cdb30u;

    // 0x1cdb30: 0x5220006  bltzl       $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDB30u;
    {
        const bool branch_taken_0x1cdb30 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x1cdb30) {
            ctx->pc = 0x1CDB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB30u;
            // 0x1cdb34: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB4Cu;
            return;
        }
    }
    ctx->pc = 0x1CDB38u;
    // 0x1cdb38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdb3c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1cdb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cdb40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDB40u;
    {
        const bool branch_taken_0x1cdb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB40u;
        // 0x1cdb44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb40) {
            ctx->pc = 0x1CDB5Cu;
            return;
        }
    }
    ctx->pc = 0x1CDB48u;
}
