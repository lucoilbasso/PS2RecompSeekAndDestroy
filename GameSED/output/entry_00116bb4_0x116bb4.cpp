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

// Function: entry_00116bb4
// Address: 0x116bb4 - 0x116bc4
void entry_00116bb4_0x116bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116bb4_0x116bb4");
#endif

    ctx->pc = 0x116bb4u;

    // 0x116bb4: 0x2a42006e  slti        $v0, $s2, 0x6E
    ctx->pc = 0x116bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x116bb8: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x116BB8u;
    {
        const bool branch_taken_0x116bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116bb8) {
            ctx->pc = 0x116BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116BB8u;
            // 0x116bbc: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116B60u;
            return;
        }
    }
    ctx->pc = 0x116BC0u;
    // 0x116bc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x116bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x116bc4u;
}
