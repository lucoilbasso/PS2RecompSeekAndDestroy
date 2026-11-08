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

// Function: entry_00174d90
// Address: 0x174d90 - 0x174da8
void entry_00174d90_0x174d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d90_0x174d90");
#endif

    ctx->pc = 0x174d90u;

    // 0x174d90: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x174D90u;
    {
        const bool branch_taken_0x174d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D90u;
        // 0x174d94: 0x8f828c18  lw          $v0, -0x73E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d90) {
            ctx->pc = 0x174E40u;
            return;
        }
    }
    ctx->pc = 0x174D98u;
    // 0x174d98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D98u;
        // 0x174d9c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DA8u;
            return;
        }
    }
    ctx->pc = 0x174DA0u;
    // 0x174da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174da4: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x174da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
    ctx->pc = 0x174da8u;
}
