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

// Function: entry_0018f0a0
// Address: 0x18f0a0 - 0x18f0b4
void entry_0018f0a0_0x18f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f0a0_0x18f0a0");
#endif

    ctx->pc = 0x18f0a0u;

    // 0x18f0a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18f0a4: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x18f0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18f0a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F0A8u;
    {
        const bool branch_taken_0x18f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0A8u;
        // 0x18f0ac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0a8) {
            ctx->pc = 0x18F0D0u;
            return;
        }
    }
    ctx->pc = 0x18F0B0u;
    // 0x18f0b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x18f0b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x18f0b4u;
}
