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

// Function: entry_00103360
// Address: 0x103360 - 0x103380
void entry_00103360_0x103360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103360_0x103360");
#endif

    ctx->pc = 0x103360u;

label_103360:
    // 0x103360: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x103360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x103364: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x103364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x103368: 0x0  nop
    ctx->pc = 0x103368u;
    // NOP
    // 0x10336c: 0x0  nop
    ctx->pc = 0x10336cu;
    // NOP
    // 0x103370: 0x0  nop
    ctx->pc = 0x103370u;
    // NOP
    // 0x103374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x103374u;
    {
        const bool branch_taken_0x103374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103374u;
        // 0x103378: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103374) {
            ctx->pc = 0x103360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103360;
        }
    }
    ctx->pc = 0x10337Cu;
    // 0x10337c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10337cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x103380u;
}
