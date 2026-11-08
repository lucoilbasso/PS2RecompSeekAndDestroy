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

// Function: entry_0010c264
// Address: 0x10c264 - 0x10c290
void entry_0010c264_0x10c264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c264_0x10c264");
#endif

    ctx->pc = 0x10c264u;

    // 0x10c264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c268: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x10c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x10c26c: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x10c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10c270: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C270u;
    {
        const bool branch_taken_0x10c270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C270u;
        // 0x10c274: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c270) {
            ctx->pc = 0x10C290u;
            return;
        }
    }
    ctx->pc = 0x10C278u;
    // 0x10c278: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10c278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10c27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c280: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x10c280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x10c284: 0x24a53b40  addiu       $a1, $a1, 0x3B40
    ctx->pc = 0x10c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15168));
    // 0x10c288: 0x8068186  j           func_1A0618
    ctx->pc = 0x10C288u;
    ctx->pc = 0x10C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C288u;
    // 0x10c28c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x10C290u;
}
