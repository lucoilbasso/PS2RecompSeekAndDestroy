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

// Function: entry_001a14f0
// Address: 0x1a14f0 - 0x1a1500
void entry_001a14f0_0x1a14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a14f0_0x1a14f0");
#endif

    ctx->pc = 0x1a14f0u;

    // 0x1a14f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a14f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a14f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A14F8u;
    {
        const bool branch_taken_0x1a14f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14f8) {
            ctx->pc = 0x1A14FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A14F8u;
            // 0x1a14fc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A14E8u;
            return;
        }
    }
    ctx->pc = 0x1A1500u;
}
