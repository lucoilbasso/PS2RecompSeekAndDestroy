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

// Function: caseD_2
// Address: 0x14d938 - 0x14d954
void caseD_2_0x14d938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14d938");
#endif

    ctx->pc = 0x14d938u;

    // 0x14d938: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x14d93c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D93Cu;
    {
        const bool branch_taken_0x14d93c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D93Cu;
        // 0x14d940: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d93c) {
            ctx->pc = 0x14D954u;
            return;
        }
    }
    ctx->pc = 0x14D944u;
    // 0x14d944: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14d948: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x14d94c: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14d950: 0x2402020b  addiu       $v0, $zero, 0x20B
    ctx->pc = 0x14d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->pc = 0x14d954u;
}
