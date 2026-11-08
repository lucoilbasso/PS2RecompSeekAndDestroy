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

// Function: entry_001d0f90
// Address: 0x1d0f90 - 0x1d0fb0
void entry_001d0f90_0x1d0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0f90_0x1d0f90");
#endif

    ctx->pc = 0x1d0f90u;

    // 0x1d0f90: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d0f94: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0F94u;
    {
        const bool branch_taken_0x1d0f94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F94u;
        // 0x1d0f98: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f94) {
            ctx->pc = 0x1D0FBCu;
            return;
        }
    }
    ctx->pc = 0x1D0F9Cu;
    // 0x1d0f9c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1d0f9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0fa0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0FA0u;
    {
        const bool branch_taken_0x1d0fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FA0u;
        // 0x1d0fa4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fa0) {
            ctx->pc = 0x1D0FB0u;
            return;
        }
    }
    ctx->pc = 0x1D0FA8u;
    // 0x1d0fa8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0FA8u;
    {
        const bool branch_taken_0x1d0fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0fa8) {
            ctx->pc = 0x1D0FBCu;
            return;
        }
    }
    ctx->pc = 0x1D0FB0u;
}
