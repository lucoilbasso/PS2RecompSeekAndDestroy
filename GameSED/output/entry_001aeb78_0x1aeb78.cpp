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

// Function: entry_001aeb78
// Address: 0x1aeb78 - 0x1aeb94
void entry_001aeb78_0x1aeb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeb78_0x1aeb78");
#endif

    ctx->pc = 0x1aeb78u;

label_1aeb78:
    // 0x1aeb78: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1aeb78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1aeb7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1aeb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1aeb80: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x1aeb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1aeb84: 0x0  nop
    ctx->pc = 0x1aeb84u;
    // NOP
    // 0x1aeb88: 0x0  nop
    ctx->pc = 0x1aeb88u;
    // NOP
    // 0x1aeb8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AEB8Cu;
    {
        const bool branch_taken_0x1aeb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb8c) {
            ctx->pc = 0x1AEB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeb78;
        }
    }
    ctx->pc = 0x1AEB94u;
}
