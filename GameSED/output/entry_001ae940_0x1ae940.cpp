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

// Function: entry_001ae940
// Address: 0x1ae940 - 0x1ae95c
void entry_001ae940_0x1ae940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae940_0x1ae940");
#endif

    ctx->pc = 0x1ae940u;

label_1ae940:
    // 0x1ae940: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1ae940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1ae944: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ae944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ae948: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x1ae948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1ae94c: 0x0  nop
    ctx->pc = 0x1ae94cu;
    // NOP
    // 0x1ae950: 0x0  nop
    ctx->pc = 0x1ae950u;
    // NOP
    // 0x1ae954: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AE954u;
    {
        const bool branch_taken_0x1ae954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae954) {
            ctx->pc = 0x1AE940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae940;
        }
    }
    ctx->pc = 0x1AE95Cu;
}
