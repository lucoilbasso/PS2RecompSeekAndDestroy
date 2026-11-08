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

// Function: caseD_16
// Address: 0x164340 - 0x164348
void caseD_16_0x164340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x164340");
#endif

    ctx->pc = 0x164340u;

    // 0x164340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164340u;
    {
        const bool branch_taken_0x164340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164340u;
        // 0x164344: 0x24911a14  addiu       $s1, $a0, 0x1A14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164340) {
            ctx->pc = 0x16434Cu;
            return;
        }
    }
    ctx->pc = 0x164348u;
}
