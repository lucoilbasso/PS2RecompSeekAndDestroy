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

// Function: entry_00139d88
// Address: 0x139d88 - 0x139da4
void entry_00139d88_0x139d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139d88_0x139d88");
#endif

    ctx->pc = 0x139d88u;

    // 0x139d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139d8c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x139d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x139d90: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x139D90u;
    {
        const bool branch_taken_0x139d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x139D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D90u;
        // 0x139d94: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d90) {
            ctx->pc = 0x139DA4u;
            return;
        }
    }
    ctx->pc = 0x139D98u;
    // 0x139d98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x139d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139d9c: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x139D9Cu;
    {
        const bool branch_taken_0x139d9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x139DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D9Cu;
        // 0x139da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d9c) {
            ctx->pc = 0x139E08u;
            return;
        }
    }
    ctx->pc = 0x139DA4u;
}
