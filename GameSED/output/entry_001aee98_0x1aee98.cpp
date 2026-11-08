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

// Function: entry_001aee98
// Address: 0x1aee98 - 0x1aeeb4
void entry_001aee98_0x1aee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aee98_0x1aee98");
#endif

    ctx->pc = 0x1aee98u;

label_1aee98:
    // 0x1aee98: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1aee98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1aee9c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1aee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1aeea0: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x1aeea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1aeea4: 0x0  nop
    ctx->pc = 0x1aeea4u;
    // NOP
    // 0x1aeea8: 0x0  nop
    ctx->pc = 0x1aeea8u;
    // NOP
    // 0x1aeeac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AEEACu;
    {
        const bool branch_taken_0x1aeeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeeac) {
            ctx->pc = 0x1AEE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aee98;
        }
    }
    ctx->pc = 0x1AEEB4u;
}
