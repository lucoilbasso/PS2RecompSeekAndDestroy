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

// Function: entry_001c9574
// Address: 0x1c9574 - 0x1c9580
void entry_001c9574_0x1c9574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9574_0x1c9574");
#endif

    ctx->pc = 0x1c9574u;

    // 0x1c9574: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1c9574u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c9578: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C9578u;
    {
        const bool branch_taken_0x1c9578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9578u;
        // 0x1c957c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9578) {
            ctx->pc = 0x1C96E0u;
            return;
        }
    }
    ctx->pc = 0x1C9580u;
}
