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

// Function: entry_001d05a4
// Address: 0x1d05a4 - 0x1d05cc
void entry_001d05a4_0x1d05a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d05a4_0x1d05a4");
#endif

    ctx->pc = 0x1d05a4u;

    // 0x1d05a4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1d05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d05a8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d05a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d05ac: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D05ACu;
    {
        const bool branch_taken_0x1d05ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05ACu;
        // 0x1d05b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05ac) {
            ctx->pc = 0x1D05DCu;
            return;
        }
    }
    ctx->pc = 0x1D05B4u;
    // 0x1d05b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d05b8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D05B8u;
    {
        const bool branch_taken_0x1d05b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B8u;
        // 0x1d05bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05b8) {
            ctx->pc = 0x1D05DCu;
            return;
        }
    }
    ctx->pc = 0x1D05C0u;
    // 0x1d05c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d05c4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D05C4u;
    {
        const bool branch_taken_0x1d05c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C4u;
        // 0x1d05c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05c4) {
            ctx->pc = 0x1D05DCu;
            return;
        }
    }
    ctx->pc = 0x1D05CCu;
}
