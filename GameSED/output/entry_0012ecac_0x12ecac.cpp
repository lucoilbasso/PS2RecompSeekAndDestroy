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

// Function: entry_0012ecac
// Address: 0x12ecac - 0x12ecc4
void entry_0012ecac_0x12ecac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ecac_0x12ecac");
#endif

    ctx->pc = 0x12ecacu;

    // 0x12ecac: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ECACu;
    {
        const bool branch_taken_0x12ecac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecac) {
            ctx->pc = 0x12ECB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ECACu;
            // 0x12ecb0: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12ECB4u;
    // 0x12ecb4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x12ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x12ecb8: 0x5051fff9  beql        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12ECB8u;
    {
        const bool branch_taken_0x12ecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x12ecb8) {
            ctx->pc = 0x12ECBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ECB8u;
            // 0x12ecbc: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECA0u;
            return;
        }
    }
    ctx->pc = 0x12ECC0u;
    // 0x12ecc0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x12ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->pc = 0x12ecc4u;
}
