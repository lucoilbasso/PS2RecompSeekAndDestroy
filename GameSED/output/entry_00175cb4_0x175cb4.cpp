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

// Function: entry_00175cb4
// Address: 0x175cb4 - 0x175cc0
void entry_00175cb4_0x175cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175cb4_0x175cb4");
#endif

    ctx->pc = 0x175cb4u;

    // 0x175cb4: 0x25a30001  addiu       $v1, $t5, 0x1
    ctx->pc = 0x175cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x175cb8: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175CB8u;
    {
        const bool branch_taken_0x175cb8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cb8) {
            ctx->pc = 0x175CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175CB8u;
            // 0x175cbc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175CC0u;
            return;
        }
    }
    ctx->pc = 0x175CC0u;
}
