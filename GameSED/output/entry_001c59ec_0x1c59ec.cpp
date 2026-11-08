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

// Function: entry_001c59ec
// Address: 0x1c59ec - 0x1c5a00
void entry_001c59ec_0x1c59ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c59ec_0x1c59ec");
#endif

    ctx->pc = 0x1c59ecu;

    // 0x1c59ec: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C59ECu;
    {
        const bool branch_taken_0x1c59ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59ECu;
        // 0x1c59f0: 0x2623eec0  addiu       $v1, $s1, -0x1140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59ec) {
            ctx->pc = 0x1C5A00u;
            return;
        }
    }
    ctx->pc = 0x1C59F4u;
    // 0x1c59f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c59f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C59F8u;
    {
        const bool branch_taken_0x1c59f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59F8u;
        // 0x1c59fc: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59f8) {
            ctx->pc = 0x1C5A08u;
            return;
        }
    }
    ctx->pc = 0x1C5A00u;
}
