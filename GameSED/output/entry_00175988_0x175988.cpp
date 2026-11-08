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

// Function: entry_00175988
// Address: 0x175988 - 0x175998
void entry_00175988_0x175988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175988_0x175988");
#endif

    ctx->pc = 0x175988u;

    // 0x175988: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x175988u;
    {
        const bool branch_taken_0x175988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175988u;
        // 0x17598c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175988) {
            ctx->pc = 0x1759E4u;
            return;
        }
    }
    ctx->pc = 0x175990u;
    // 0x175990: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x175990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x175994: 0x0  nop
    ctx->pc = 0x175994u;
    // NOP
    ctx->pc = 0x175998u;
}
