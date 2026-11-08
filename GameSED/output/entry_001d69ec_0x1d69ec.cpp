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

// Function: entry_001d69ec
// Address: 0x1d69ec - 0x1d6a00
void entry_001d69ec_0x1d69ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d69ec_0x1d69ec");
#endif

    ctx->pc = 0x1d69ecu;

    // 0x1d69ec: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D69ECu;
    {
        const bool branch_taken_0x1d69ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d69ec) {
            ctx->pc = 0x1D69F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D69ECu;
            // 0x1d69f0: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6A78u;
            return;
        }
    }
    ctx->pc = 0x1D69F4u;
    // 0x1d69f4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d69f8: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D69F8u;
    {
        const bool branch_taken_0x1d69f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69F8u;
        // 0x1d69fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69f8) {
            ctx->pc = 0x1D6A68u;
            return;
        }
    }
    ctx->pc = 0x1D6A00u;
}
