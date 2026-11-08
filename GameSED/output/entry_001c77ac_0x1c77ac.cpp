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

// Function: entry_001c77ac
// Address: 0x1c77ac - 0x1c77c0
void entry_001c77ac_0x1c77ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c77ac_0x1c77ac");
#endif

    ctx->pc = 0x1c77acu;

    // 0x1c77ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c77acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c77b0: 0xfc540000  sd          $s4, 0x0($v0)
    ctx->pc = 0x1c77b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 20));
    // 0x1c77b4: 0x641ffd8  bgez        $s2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C77B4u;
    {
        const bool branch_taken_0x1c77b4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B4u;
        // 0x1c77b8: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77b4) {
            ctx->pc = 0x1C7718u;
            return;
        }
    }
    ctx->pc = 0x1C77BCu;
    // 0x1c77bc: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x1c77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    ctx->pc = 0x1c77c0u;
}
