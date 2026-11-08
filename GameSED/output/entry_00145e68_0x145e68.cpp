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

// Function: entry_00145e68
// Address: 0x145e68 - 0x145e90
void entry_00145e68_0x145e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e68_0x145e68");
#endif

    ctx->pc = 0x145e68u;

    // 0x145e68: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145E68u;
    {
        const bool branch_taken_0x145e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x145E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E68u;
        // 0x145e6c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e68) {
            ctx->pc = 0x145EA8u;
            return;
        }
    }
    ctx->pc = 0x145E70u;
    // 0x145e70: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x145e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145e74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x145E74u;
    {
        const bool branch_taken_0x145e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e74) {
            ctx->pc = 0x145E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145E74u;
            // 0x145e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145E90u;
            return;
        }
    }
    ctx->pc = 0x145E7Cu;
    // 0x145e7c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x145E7Cu;
    {
        const bool branch_taken_0x145e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E7Cu;
        // 0x145e80: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e7c) {
            ctx->pc = 0x145EA0u;
            return;
        }
    }
    ctx->pc = 0x145E84u;
    // 0x145e84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145E84u;
    {
        const bool branch_taken_0x145e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E84u;
        // 0x145e88: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e84) {
            ctx->pc = 0x145EB0u;
            return;
        }
    }
    ctx->pc = 0x145E8Cu;
    // 0x145e8c: 0x0  nop
    ctx->pc = 0x145e8cu;
    // NOP
    ctx->pc = 0x145e90u;
}
