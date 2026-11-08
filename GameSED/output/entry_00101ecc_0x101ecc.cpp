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

// Function: entry_00101ecc
// Address: 0x101ecc - 0x101ee0
void entry_00101ecc_0x101ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ecc_0x101ecc");
#endif

    ctx->pc = 0x101eccu;

    // 0x101ecc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x101ed0: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x101ED0u;
    {
        const bool branch_taken_0x101ed0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ED0u;
        // 0x101ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ed0) {
            ctx->pc = 0x101F88u;
            return;
        }
    }
    ctx->pc = 0x101ED8u;
    // 0x101ed8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x101ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x101edc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x101edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101ee0u;
}
