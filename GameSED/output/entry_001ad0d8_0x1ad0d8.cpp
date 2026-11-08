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

// Function: entry_001ad0d8
// Address: 0x1ad0d8 - 0x1ad0f8
void entry_001ad0d8_0x1ad0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad0d8_0x1ad0d8");
#endif

    ctx->pc = 0x1ad0d8u;

label_1ad0d8:
    // 0x1ad0d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1ad0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ad0dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ad0e0: 0x0  nop
    ctx->pc = 0x1ad0e0u;
    // NOP
    // 0x1ad0e4: 0x0  nop
    ctx->pc = 0x1ad0e4u;
    // NOP
    // 0x1ad0e8: 0x0  nop
    ctx->pc = 0x1ad0e8u;
    // NOP
    // 0x1ad0ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD0ECu;
    {
        const bool branch_taken_0x1ad0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0ec) {
            ctx->pc = 0x1AD0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad0d8;
        }
    }
    ctx->pc = 0x1AD0F4u;
    // 0x1ad0f4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1ad0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x1ad0f8u;
}
