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

// Function: caseD_14
// Address: 0x164330 - 0x164338
void caseD_14_0x164330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x164330");
#endif

    ctx->pc = 0x164330u;

    // 0x164330: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164330u;
    {
        const bool branch_taken_0x164330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164330u;
        // 0x164334: 0x249119fc  addiu       $s1, $a0, 0x19FC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164330) {
            ctx->pc = 0x16434Cu;
            return;
        }
    }
    ctx->pc = 0x164338u;
}
