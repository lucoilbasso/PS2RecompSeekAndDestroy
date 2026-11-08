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

// Function: caseD_1c
// Address: 0x110fe8 - 0x111000
void caseD_1c_0x110fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x110fe8");
#endif

    ctx->pc = 0x110fe8u;

    // 0x110fe8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x110fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x110fec: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x110fecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x110ff0: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x110ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110ff4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x110FF4u;
    {
        const bool branch_taken_0x110ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FF4u;
        // 0x110ff8: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ff4) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110FFCu;
    // 0x110ffc: 0x0  nop
    ctx->pc = 0x110ffcu;
    // NOP
    ctx->pc = 0x111000u;
}
