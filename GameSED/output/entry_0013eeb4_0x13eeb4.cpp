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

// Function: entry_0013eeb4
// Address: 0x13eeb4 - 0x13eec8
void entry_0013eeb4_0x13eeb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eeb4_0x13eeb4");
#endif

    ctx->pc = 0x13eeb4u;

    // 0x13eeb4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x13eeb8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x13eebc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13EEBCu;
    {
        const bool branch_taken_0x13eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEBCu;
        // 0x13eec0: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eebc) {
            ctx->pc = 0x13EEE4u;
            return;
        }
    }
    ctx->pc = 0x13EEC4u;
    // 0x13eec4: 0x0  nop
    ctx->pc = 0x13eec4u;
    // NOP
    ctx->pc = 0x13eec8u;
}
