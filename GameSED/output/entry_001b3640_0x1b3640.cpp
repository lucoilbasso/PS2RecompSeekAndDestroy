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

// Function: entry_001b3640
// Address: 0x1b3640 - 0x1b3674
void entry_001b3640_0x1b3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3640_0x1b3640");
#endif

    ctx->pc = 0x1b3640u;

label_1b3640:
    // 0x1b3640: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1b3640u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b3644: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x1b3644u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b3648: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1b3648u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1b364c: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x1b364cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1b3650: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1b3650u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1b3654: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1b3654u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1b3658: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1b3658u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1b365c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1b365cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1b3660: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1b3660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1b3664: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b3664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b3668: 0x0  nop
    ctx->pc = 0x1b3668u;
    // NOP
    // 0x1b366c: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B366Cu;
    {
        const bool branch_taken_0x1b366c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b366c) {
            ctx->pc = 0x1B3640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3640;
        }
    }
    ctx->pc = 0x1B3674u;
}
