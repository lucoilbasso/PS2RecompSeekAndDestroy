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

// Function: entry_001cd884
// Address: 0x1cd884 - 0x1cd8a0
void entry_001cd884_0x1cd884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd884_0x1cd884");
#endif

    ctx->pc = 0x1cd884u;

    // 0x1cd884: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD884u;
    {
        const bool branch_taken_0x1cd884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD884u;
        // 0x1cd888: 0x8fc60644  lw          $a2, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd884) {
            ctx->pc = 0x1CD8E0u;
            return;
        }
    }
    ctx->pc = 0x1CD88Cu;
    // 0x1cd88c: 0xacde0000  sw          $fp, 0x0($a2)
    ctx->pc = 0x1cd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 30));
    // 0x1cd890: 0x8fc20648  lw          $v0, 0x648($fp)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
    // 0x1cd894: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd898: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD898u;
    {
        const bool branch_taken_0x1cd898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD898u;
        // 0x1cd89c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd898) {
            ctx->pc = 0x1CD8D0u;
            return;
        }
    }
    ctx->pc = 0x1CD8A0u;
}
