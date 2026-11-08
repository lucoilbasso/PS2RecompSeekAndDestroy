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

// Function: entry_00131e90
// Address: 0x131e90 - 0x131ea4
void entry_00131e90_0x131e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131e90_0x131e90");
#endif

    ctx->pc = 0x131e90u;

    // 0x131e90: 0x5446000d  bnel        $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x131E90u;
    {
        const bool branch_taken_0x131e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x131e90) {
            ctx->pc = 0x131E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E90u;
            // 0x131e94: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131EC8u;
            return;
        }
    }
    ctx->pc = 0x131E98u;
    // 0x131e98: 0x8ca200e8  lw          $v0, 0xE8($a1)
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x131e9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x131E9Cu;
    {
        const bool branch_taken_0x131e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131e9c) {
            ctx->pc = 0x131EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E9Cu;
            // 0x131ea0: 0xaca200e4  sw          $v0, 0xE4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131EA4u;
            return;
        }
    }
    ctx->pc = 0x131EA4u;
}
