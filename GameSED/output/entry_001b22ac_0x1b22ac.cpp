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

// Function: entry_001b22ac
// Address: 0x1b22ac - 0x1b22e0
void entry_001b22ac_0x1b22ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b22ac_0x1b22ac");
#endif

    ctx->pc = 0x1b22acu;

label_1b22ac:
    // 0x1b22ac: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x1b22acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b22b0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1b22b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b22b4: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1b22b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b22b8: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x1b22b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b22bc: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x1b22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x1b22c0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1b22c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1b22c4: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x1b22c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x1b22c8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x1b22c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x1b22cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b22ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b22d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1b22d4: 0x0  nop
    ctx->pc = 0x1b22d4u;
    // NOP
    // 0x1b22d8: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B22D8u;
    {
        const bool branch_taken_0x1b22d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b22d8) {
            ctx->pc = 0x1B22ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b22ac;
        }
    }
    ctx->pc = 0x1B22E0u;
}
