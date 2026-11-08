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

// Function: entry_00138dbc
// Address: 0x138dbc - 0x138de8
void entry_00138dbc_0x138dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138dbc_0x138dbc");
#endif

    ctx->pc = 0x138dbcu;

    // 0x138dbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138dc0: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x138dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x138dc4: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x138dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x138dc8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138DC8u;
    {
        const bool branch_taken_0x138dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x138DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DC8u;
        // 0x138dcc: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138dc8) {
            ctx->pc = 0x138DE8u;
            return;
        }
    }
    ctx->pc = 0x138DD0u;
    // 0x138dd0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x138dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x138dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138dd8: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x138dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x138ddc: 0x24a56690  addiu       $a1, $a1, 0x6690
    ctx->pc = 0x138ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26256));
    // 0x138de0: 0x8068186  j           func_1A0618
    ctx->pc = 0x138DE0u;
    ctx->pc = 0x138DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DE0u;
    // 0x138de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x138DE8u;
}
