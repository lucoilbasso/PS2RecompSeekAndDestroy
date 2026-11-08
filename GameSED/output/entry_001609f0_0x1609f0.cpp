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

// Function: entry_001609f0
// Address: 0x1609f0 - 0x160a08
void entry_001609f0_0x1609f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001609f0_0x1609f0");
#endif

    ctx->pc = 0x1609f0u;

    // 0x1609f0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1609f4: 0x2463a290  addiu       $v1, $v1, -0x5D70
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943376));
    // 0x1609f8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1609f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x20A294u));
    // 0x1609fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1609fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x160a00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160A00u;
    {
        const bool branch_taken_0x160a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A00u;
        // 0x160a04: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a00) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x160A08u;
}
