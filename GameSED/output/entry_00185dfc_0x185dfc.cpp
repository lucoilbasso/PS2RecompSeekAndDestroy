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

// Function: entry_00185dfc
// Address: 0x185dfc - 0x185e10
void entry_00185dfc_0x185dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185dfc_0x185dfc");
#endif

    ctx->pc = 0x185dfcu;

    // 0x185dfc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185e00: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185e04: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x185E04u;
    {
        const bool branch_taken_0x185e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E04u;
        // 0x185e08: 0x24421d98  addiu       $v0, $v0, 0x1D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e04) {
            ctx->pc = 0x185F88u;
            return;
        }
    }
    ctx->pc = 0x185E0Cu;
    // 0x185e0c: 0x0  nop
    ctx->pc = 0x185e0cu;
    // NOP
    ctx->pc = 0x185e10u;
}
