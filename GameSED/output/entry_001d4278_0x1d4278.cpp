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

// Function: entry_001d4278
// Address: 0x1d4278 - 0x1d4298
void entry_001d4278_0x1d4278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4278_0x1d4278");
#endif

    ctx->pc = 0x1d4278u;

    // 0x1d4278: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1d4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1d427c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D427Cu;
    {
        const bool branch_taken_0x1d427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d427c) {
            ctx->pc = 0x1D4280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D427Cu;
            // 0x1d4280: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4298u;
            return;
        }
    }
    ctx->pc = 0x1D4284u;
    // 0x1d4284: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d4284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d4288: 0x8c43e1b0  lw          $v1, -0x1E50($v0)
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d428c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1d428cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x1d4290: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1d4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d4294: 0x0  nop
    ctx->pc = 0x1d4294u;
    // NOP
    ctx->pc = 0x1d4298u;
}
