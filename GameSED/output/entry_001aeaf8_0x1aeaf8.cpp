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

// Function: entry_001aeaf8
// Address: 0x1aeaf8 - 0x1aeb14
void entry_001aeaf8_0x1aeaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeaf8_0x1aeaf8");
#endif

    ctx->pc = 0x1aeaf8u;

label_1aeaf8:
    // 0x1aeaf8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1aeaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1aeafc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1aeb00: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x1aeb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1aeb04: 0x0  nop
    ctx->pc = 0x1aeb04u;
    // NOP
    // 0x1aeb08: 0x0  nop
    ctx->pc = 0x1aeb08u;
    // NOP
    // 0x1aeb0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AEB0Cu;
    {
        const bool branch_taken_0x1aeb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb0c) {
            ctx->pc = 0x1AEAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeaf8;
        }
    }
    ctx->pc = 0x1AEB14u;
}
