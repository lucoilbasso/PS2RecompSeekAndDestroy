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

// Function: entry_00111c30
// Address: 0x111c30 - 0x111c58
void entry_00111c30_0x111c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c30_0x111c30");
#endif

    ctx->pc = 0x111c30u;

    // 0x111c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111c34: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111C34u;
    {
        const bool branch_taken_0x111c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x111C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C34u;
        // 0x111c38: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c34) {
            ctx->pc = 0x111C64u;
            return;
        }
    }
    ctx->pc = 0x111C3Cu;
    // 0x111c3c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x111c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x111c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111C40u;
    {
        const bool branch_taken_0x111c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C40u;
        // 0x111c44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c40) {
            ctx->pc = 0x111C58u;
            return;
        }
    }
    ctx->pc = 0x111C48u;
    // 0x111c48: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x111C48u;
    {
        const bool branch_taken_0x111c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c48) {
            ctx->pc = 0x111C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C48u;
            // 0x111c4c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C64u;
            return;
        }
    }
    ctx->pc = 0x111C50u;
    // 0x111c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111C50u;
    {
        const bool branch_taken_0x111c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C50u;
        // 0x111c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c50) {
            ctx->pc = 0x111C64u;
            return;
        }
    }
    ctx->pc = 0x111C58u;
}
