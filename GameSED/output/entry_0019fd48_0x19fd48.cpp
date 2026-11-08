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

// Function: entry_0019fd48
// Address: 0x19fd48 - 0x19fd60
void entry_0019fd48_0x19fd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd48_0x19fd48");
#endif

    ctx->pc = 0x19fd48u;

    // 0x19fd48: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FD48u;
    {
        const bool branch_taken_0x19fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fd48) {
            ctx->pc = 0x19FD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FD48u;
            // 0x19fd4c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD60u;
            return;
        }
    }
    ctx->pc = 0x19FD50u;
    // 0x19fd50: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x19fd54: 0x10460009  beq         $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FD54u;
    {
        const bool branch_taken_0x19fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD54u;
        // 0x19fd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd54) {
            ctx->pc = 0x19FD7Cu;
            return;
        }
    }
    ctx->pc = 0x19FD5Cu;
    // 0x19fd5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x19fd60u;
}
