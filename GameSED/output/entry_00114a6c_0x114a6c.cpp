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

// Function: entry_00114a6c
// Address: 0x114a6c - 0x114aa0
void entry_00114a6c_0x114a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114a6c_0x114a6c");
#endif

    ctx->pc = 0x114a6cu;

label_114a6c:
    // 0x114a6c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x114a6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x114a70: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x114a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x114a74: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x114a74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x114a78: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x114a78u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x114a7c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x114a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x114a80: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x114a80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x114a84: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x114a84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x114a88: 0xfce80018  sd          $t0, 0x18($a3)
    ctx->pc = 0x114a88u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 8));
    // 0x114a8c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x114a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x114a90: 0x0  nop
    ctx->pc = 0x114a90u;
    // NOP
    // 0x114a94: 0x0  nop
    ctx->pc = 0x114a94u;
    // NOP
    // 0x114a98: 0x14c5fff4  bne         $a2, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x114A98u;
    {
        const bool branch_taken_0x114a98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x114A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A98u;
        // 0x114a9c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a98) {
            ctx->pc = 0x114A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114a6c;
        }
    }
    ctx->pc = 0x114AA0u;
}
