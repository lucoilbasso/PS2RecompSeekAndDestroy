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

// Function: entry_001859ec
// Address: 0x1859ec - 0x185a00
void entry_001859ec_0x1859ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001859ec_0x1859ec");
#endif

    ctx->pc = 0x1859ecu;

    // 0x1859ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1859ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1859f0: 0x50530006  beql        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1859F0u;
    {
        const bool branch_taken_0x1859f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1859f0) {
            ctx->pc = 0x1859F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1859F0u;
            // 0x1859f4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A0Cu;
            return;
        }
    }
    ctx->pc = 0x1859F8u;
    // 0x1859f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1859F8u;
    {
        const bool branch_taken_0x1859f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859F8u;
        // 0x1859fc: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859f8) {
            ctx->pc = 0x185A20u;
            return;
        }
    }
    ctx->pc = 0x185A00u;
}
