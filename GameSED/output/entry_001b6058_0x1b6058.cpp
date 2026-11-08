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

// Function: entry_001b6058
// Address: 0x1b6058 - 0x1b608c
void entry_001b6058_0x1b6058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6058_0x1b6058");
#endif

    ctx->pc = 0x1b6058u;

label_1b6058:
    // 0x1b6058: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1b6058u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b605c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1b605cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b6060: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1b6060u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1b6064: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1b6064u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1b6068: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1b6068u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1b606c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1b606cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1b6070: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1b6070u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1b6074: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1b6074u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1b6078: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1b6078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1b607c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b6080: 0x0  nop
    ctx->pc = 0x1b6080u;
    // NOP
    // 0x1b6084: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B6084u;
    {
        const bool branch_taken_0x1b6084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6084) {
            ctx->pc = 0x1B6058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6058;
        }
    }
    ctx->pc = 0x1B608Cu;
}
