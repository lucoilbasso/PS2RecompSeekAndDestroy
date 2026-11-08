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

// Function: entry_001a95ec
// Address: 0x1a95ec - 0x1a95f8
void entry_001a95ec_0x1a95ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a95ec_0x1a95ec");
#endif

    ctx->pc = 0x1a95ecu;

    // 0x1a95ec: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1a95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a95f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A95F0u;
    {
        const bool branch_taken_0x1a95f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a95f0) {
            ctx->pc = 0x1A95F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A95F0u;
            // 0x1a95f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9608u;
            return;
        }
    }
    ctx->pc = 0x1A95F8u;
}
