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

// Function: entry_0012ecc4
// Address: 0x12ecc4 - 0x12ecd8
void entry_0012ecc4_0x12ecc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ecc4_0x12ecc4");
#endif

    ctx->pc = 0x12ecc4u;

    // 0x12ecc4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ECC4u;
    {
        const bool branch_taken_0x12ecc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecc4) {
            ctx->pc = 0x12ECC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ECC4u;
            // 0x12ecc8: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECD8u;
            return;
        }
    }
    ctx->pc = 0x12ECCCu;
    // 0x12eccc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x12ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x12ecd0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x12ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x12ecd4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->pc = 0x12ecd8u;
}
