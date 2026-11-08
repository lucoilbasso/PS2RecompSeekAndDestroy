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

// Function: entry_00130bdc
// Address: 0x130bdc - 0x130c00
void entry_00130bdc_0x130bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130bdc_0x130bdc");
#endif

    ctx->pc = 0x130bdcu;

    // 0x130bdc: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x130bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x130be0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x130be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130be4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130BE4u;
    {
        const bool branch_taken_0x130be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x130be4) {
            ctx->pc = 0x130BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130BE4u;
            // 0x130be8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130C0Cu;
            return;
        }
    }
    ctx->pc = 0x130BECu;
    // 0x130bec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x130becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x130bf0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x130bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130bf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x130bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x130bf8: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x130BF8u;
    {
        const bool branch_taken_0x130bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x130bf8) {
            ctx->pc = 0x130BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130BF8u;
            // 0x130bfc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130C04u;
            return;
        }
    }
    ctx->pc = 0x130C00u;
}
