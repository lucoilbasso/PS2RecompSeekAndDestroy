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

// Function: entry_00131788
// Address: 0x131788 - 0x1317ac
void entry_00131788_0x131788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131788_0x131788");
#endif

    ctx->pc = 0x131788u;

label_131788:
    // 0x131788: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x131788u;
    {
        const bool branch_taken_0x131788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x13178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131788u;
        // 0x13178c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131788) {
            ctx->pc = 0x1317B0u;
            return;
        }
    }
    ctx->pc = 0x131790u;
    // 0x131790: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x131790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x131794: 0x0  nop
    ctx->pc = 0x131794u;
    // NOP
    // 0x131798: 0x0  nop
    ctx->pc = 0x131798u;
    // NOP
    // 0x13179c: 0x0  nop
    ctx->pc = 0x13179cu;
    // NOP
    // 0x1317a0: 0x0  nop
    ctx->pc = 0x1317a0u;
    // NOP
    // 0x1317a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1317A4u;
    {
        const bool branch_taken_0x1317a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1317a4) {
            ctx->pc = 0x1317A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1317A4u;
            // 0x1317a8: 0x8c620110  lw          $v0, 0x110($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131788;
        }
    }
    ctx->pc = 0x1317ACu;
}
