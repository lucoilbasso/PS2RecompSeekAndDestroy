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

// Function: entry_0018f148
// Address: 0x18f148 - 0x18f158
void entry_0018f148_0x18f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f148_0x18f148");
#endif

    ctx->pc = 0x18f148u;

    // 0x18f148: 0x2482dc9f  addiu       $v0, $a0, -0x2361
    ctx->pc = 0x18f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958239));
    // 0x18f14c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x18f14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x18f150: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F150u;
    {
        const bool branch_taken_0x18f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f150) {
            ctx->pc = 0x18F154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F150u;
            // 0x18f154: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F170u;
            return;
        }
    }
    ctx->pc = 0x18F158u;
}
