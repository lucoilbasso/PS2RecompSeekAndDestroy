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

// Function: entry_00114c1c
// Address: 0x114c1c - 0x114c50
void entry_00114c1c_0x114c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c1c_0x114c1c");
#endif

    ctx->pc = 0x114c1cu;

label_114c1c:
    // 0x114c1c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x114c1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114c20: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x114c20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x114c24: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x114c24u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x114c28: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x114c28u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x114c2c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x114c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x114c30: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x114c30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x114c34: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x114c34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x114c38: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x114c38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x114c3c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x114c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x114c40: 0x0  nop
    ctx->pc = 0x114c40u;
    // NOP
    // 0x114c44: 0x0  nop
    ctx->pc = 0x114c44u;
    // NOP
    // 0x114c48: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x114C48u;
    {
        const bool branch_taken_0x114c48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C48u;
        // 0x114c4c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c48) {
            ctx->pc = 0x114C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114c1c;
        }
    }
    ctx->pc = 0x114C50u;
}
