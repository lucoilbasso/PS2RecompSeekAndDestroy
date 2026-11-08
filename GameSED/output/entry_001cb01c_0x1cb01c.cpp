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

// Function: entry_001cb01c
// Address: 0x1cb01c - 0x1cb030
void entry_001cb01c_0x1cb01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb01c_0x1cb01c");
#endif

    ctx->pc = 0x1cb01cu;

    // 0x1cb01c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cb020: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1cb020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb024: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb028: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB028u;
    {
        const bool branch_taken_0x1cb028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB028u;
        // 0x1cb02c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb028) {
            ctx->pc = 0x1CB008u;
            return;
        }
    }
    ctx->pc = 0x1CB030u;
}
