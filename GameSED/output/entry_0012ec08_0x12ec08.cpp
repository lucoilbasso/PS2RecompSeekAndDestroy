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

// Function: entry_0012ec08
// Address: 0x12ec08 - 0x12ec18
void entry_0012ec08_0x12ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec08_0x12ec08");
#endif

    ctx->pc = 0x12ec08u;

    // 0x12ec08: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12EC08u;
    {
        const bool branch_taken_0x12ec08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ec08) {
            ctx->pc = 0x12EC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC08u;
            // 0x12ec0c: 0x8e250140  lw          $a1, 0x140($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC58u;
            return;
        }
    }
    ctx->pc = 0x12EC10u;
    // 0x12ec10: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12EC10u;
    {
        const bool branch_taken_0x12ec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC10u;
        // 0x12ec14: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec10) {
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC18u;
}
