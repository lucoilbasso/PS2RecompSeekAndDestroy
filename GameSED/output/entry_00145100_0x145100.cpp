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

// Function: entry_00145100
// Address: 0x145100 - 0x145128
void entry_00145100_0x145100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145100_0x145100");
#endif

    ctx->pc = 0x145100u;

    // 0x145100: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145100u;
    {
        const bool branch_taken_0x145100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x145104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145100u;
        // 0x145104: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145100) {
            ctx->pc = 0x145140u;
            return;
        }
    }
    ctx->pc = 0x145108u;
    // 0x145108: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x145108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14510c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14510Cu;
    {
        const bool branch_taken_0x14510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14510c) {
            ctx->pc = 0x145110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14510Cu;
            // 0x145110: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145128u;
            return;
        }
    }
    ctx->pc = 0x145114u;
    // 0x145114: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x145114u;
    {
        const bool branch_taken_0x145114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145114u;
        // 0x145118: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145114) {
            ctx->pc = 0x145138u;
            return;
        }
    }
    ctx->pc = 0x14511Cu;
    // 0x14511c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14511Cu;
    {
        const bool branch_taken_0x14511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14511Cu;
        // 0x145120: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14511c) {
            ctx->pc = 0x145148u;
            return;
        }
    }
    ctx->pc = 0x145124u;
    // 0x145124: 0x0  nop
    ctx->pc = 0x145124u;
    // NOP
    ctx->pc = 0x145128u;
}
