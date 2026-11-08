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

// Function: entry_0016abf0
// Address: 0x16abf0 - 0x16ac00
void entry_0016abf0_0x16abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016abf0_0x16abf0");
#endif

    ctx->pc = 0x16abf0u;

    // 0x16abf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16abf4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16ABF4u;
    {
        const bool branch_taken_0x16abf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abf4) {
            ctx->pc = 0x16ABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ABF4u;
            // 0x16abf8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC20u;
            return;
        }
    }
    ctx->pc = 0x16ABFCu;
    // 0x16abfc: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x16abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    ctx->pc = 0x16ac00u;
}
