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

// Function: entry_00113ba0
// Address: 0x113ba0 - 0x113bb8
void entry_00113ba0_0x113ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ba0_0x113ba0");
#endif

    ctx->pc = 0x113ba0u;

    // 0x113ba0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x113ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113ba4: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x113BA4u;
    {
        const bool branch_taken_0x113ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x113BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BA4u;
        // 0x113ba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ba4) {
            ctx->pc = 0x113BB8u;
            return;
        }
    }
    ctx->pc = 0x113BACu;
    // 0x113bac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x113BACu;
    {
        const bool branch_taken_0x113bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BACu;
        // 0x113bb0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bac) {
            ctx->pc = 0x113BE4u;
            return;
        }
    }
    ctx->pc = 0x113BB4u;
    // 0x113bb4: 0x0  nop
    ctx->pc = 0x113bb4u;
    // NOP
    ctx->pc = 0x113bb8u;
}
