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

// Function: entry_001d7710
// Address: 0x1d7710 - 0x1d7730
void entry_001d7710_0x1d7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7710_0x1d7710");
#endif

    ctx->pc = 0x1d7710u;

label_1d7710:
    // 0x1d7710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7714: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d7714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d7718: 0x0  nop
    ctx->pc = 0x1d7718u;
    // NOP
    // 0x1d771c: 0x0  nop
    ctx->pc = 0x1d771cu;
    // NOP
    // 0x1d7720: 0x0  nop
    ctx->pc = 0x1d7720u;
    // NOP
    // 0x1d7724: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7724u;
    {
        const bool branch_taken_0x1d7724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7724u;
        // 0x1d7728: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7724) {
            ctx->pc = 0x1D7710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7710;
        }
    }
    ctx->pc = 0x1D772Cu;
    // 0x1d772c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d772cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d7730u;
}
