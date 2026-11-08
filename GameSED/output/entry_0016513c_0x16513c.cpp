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

// Function: entry_0016513c
// Address: 0x16513c - 0x165148
void entry_0016513c_0x16513c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016513c_0x16513c");
#endif

    ctx->pc = 0x16513cu;

    // 0x16513c: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x16513cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x165140: 0x5440ff9b  bnel        $v0, $zero, . + 4 + (-0x65 << 2)
    ctx->pc = 0x165140u;
    {
        const bool branch_taken_0x165140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165140) {
            ctx->pc = 0x165144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165140u;
            // 0x165144: 0x8e0401b4  lw          $a0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164FB0u;
            return;
        }
    }
    ctx->pc = 0x165148u;
}
