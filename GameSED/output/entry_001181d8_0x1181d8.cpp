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

// Function: entry_001181d8
// Address: 0x1181d8 - 0x1181f0
void entry_001181d8_0x1181d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001181d8_0x1181d8");
#endif

    ctx->pc = 0x1181d8u;

    // 0x1181d8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1181d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1181dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1181e0: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x1181e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x1181e4: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1181E4u;
    {
        const bool branch_taken_0x1181e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1181E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181E4u;
        // 0x1181e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181e4) {
            ctx->pc = 0x1182ACu;
            return;
        }
    }
    ctx->pc = 0x1181ECu;
    // 0x1181ec: 0x0  nop
    ctx->pc = 0x1181ecu;
    // NOP
    ctx->pc = 0x1181f0u;
}
