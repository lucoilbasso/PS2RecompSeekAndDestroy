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

// Function: entry_00114da0
// Address: 0x114da0 - 0x114db8
void entry_00114da0_0x114da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114da0_0x114da0");
#endif

    ctx->pc = 0x114da0u;

    // 0x114da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114da4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114da8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114DA8u;
    {
        const bool branch_taken_0x114da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x114DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DA8u;
        // 0x114dac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114da8) {
            ctx->pc = 0x114DB8u;
            return;
        }
    }
    ctx->pc = 0x114DB0u;
    // 0x114db0: 0x1623000a  bne         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x114DB0u;
    {
        const bool branch_taken_0x114db0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x114db0) {
            ctx->pc = 0x114DDCu;
            return;
        }
    }
    ctx->pc = 0x114DB8u;
}
