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

// Function: entry_001d71b8
// Address: 0x1d71b8 - 0x1d71d8
void entry_001d71b8_0x1d71b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d71b8_0x1d71b8");
#endif

    ctx->pc = 0x1d71b8u;

label_1d71b8:
    // 0x1d71b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d71bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d71c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d71c4: 0x0  nop
    ctx->pc = 0x1d71c4u;
    // NOP
    // 0x1d71c8: 0x0  nop
    ctx->pc = 0x1d71c8u;
    // NOP
    // 0x1d71cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D71CCu;
    {
        const bool branch_taken_0x1d71cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71CCu;
        // 0x1d71d0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71cc) {
            ctx->pc = 0x1D71B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71b8;
        }
    }
    ctx->pc = 0x1D71D4u;
    // 0x1d71d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d71d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d71d8u;
}
