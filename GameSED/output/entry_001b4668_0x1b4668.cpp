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

// Function: entry_001b4668
// Address: 0x1b4668 - 0x1b4678
void entry_001b4668_0x1b4668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4668_0x1b4668");
#endif

    ctx->pc = 0x1b4668u;

    // 0x1b4668: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4668u;
    {
        const bool branch_taken_0x1b4668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4668) {
            ctx->pc = 0x1B4678u;
            return;
        }
    }
    ctx->pc = 0x1B4670u;
    // 0x1b4670: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x1b4670u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4674: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x1b4674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->pc = 0x1b4678u;
}
