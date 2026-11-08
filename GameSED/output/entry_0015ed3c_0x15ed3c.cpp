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

// Function: entry_0015ed3c
// Address: 0x15ed3c - 0x15ed68
void entry_0015ed3c_0x15ed3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed3c_0x15ed3c");
#endif

    ctx->pc = 0x15ed3cu;

    // 0x15ed3c: 0x8ea30f20  lw          $v1, 0xF20($s5)
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3872)));
    // 0x15ed40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ed44: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15ED44u;
    {
        const bool branch_taken_0x15ed44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED44u;
        // 0x15ed48: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed44) {
            ctx->pc = 0x15ED88u;
            return;
        }
    }
    ctx->pc = 0x15ED4Cu;
    // 0x15ed4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15ED4Cu;
    {
        const bool branch_taken_0x15ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED4Cu;
        // 0x15ed50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed4c) {
            ctx->pc = 0x15ED68u;
            return;
        }
    }
    ctx->pc = 0x15ED54u;
    // 0x15ed54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ed58: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15ED58u;
    {
        const bool branch_taken_0x15ed58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ed58) {
            ctx->pc = 0x15ED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ED58u;
            // 0x15ed5c: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15ED78u;
            return;
        }
    }
    ctx->pc = 0x15ED60u;
    // 0x15ed60: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x15ED60u;
    {
        const bool branch_taken_0x15ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED60u;
        // 0x15ed64: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed60) {
            ctx->pc = 0x15F4FCu;
            return;
        }
    }
    ctx->pc = 0x15ED68u;
}
