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

// Function: entry_0019c88c
// Address: 0x19c88c - 0x19c8a0
void entry_0019c88c_0x19c88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c88c_0x19c88c");
#endif

    ctx->pc = 0x19c88cu;

    // 0x19c88c: 0x54e30007  bnel        $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C88Cu;
    {
        const bool branch_taken_0x19c88c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c88c) {
            ctx->pc = 0x19C890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C88Cu;
            // 0x19c890: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C8ACu;
            return;
        }
    }
    ctx->pc = 0x19C894u;
    // 0x19c894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19c89c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c89cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19c8a0u;
}
