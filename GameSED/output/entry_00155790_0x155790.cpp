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

// Function: entry_00155790
// Address: 0x155790 - 0x1557ac
void entry_00155790_0x155790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155790_0x155790");
#endif

    ctx->pc = 0x155790u;

    // 0x155790: 0x8ce20444  lw          $v0, 0x444($a3)
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1092)));
    // 0x155794: 0x504b0005  beql        $v0, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x155794u;
    {
        const bool branch_taken_0x155794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x155794) {
            ctx->pc = 0x155798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155794u;
            // 0x155798: 0xace00440  sw          $zero, 0x440($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 1088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1557ACu;
            return;
        }
    }
    ctx->pc = 0x15579Cu;
    // 0x15579c: 0x8ce20448  lw          $v0, 0x448($a3)
    ctx->pc = 0x15579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1096)));
    // 0x1557a0: 0x544a0012  bnel        $v0, $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1557A0u;
    {
        const bool branch_taken_0x1557a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x1557a0) {
            ctx->pc = 0x1557A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1557A0u;
            // 0x1557a4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1557ECu;
            return;
        }
    }
    ctx->pc = 0x1557A8u;
    // 0x1557a8: 0xace00440  sw          $zero, 0x440($a3)
    ctx->pc = 0x1557a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1088), GPR_U32(ctx, 0));
    ctx->pc = 0x1557acu;
}
