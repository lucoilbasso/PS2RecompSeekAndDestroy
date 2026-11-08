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

// Function: entry_00130d64
// Address: 0x130d64 - 0x130d88
void entry_00130d64_0x130d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d64_0x130d64");
#endif

    ctx->pc = 0x130d64u;

    // 0x130d64: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x130D64u;
    {
        const bool branch_taken_0x130d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D64u;
        // 0x130d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d64) {
            ctx->pc = 0x130DD0u;
            return;
        }
    }
    ctx->pc = 0x130D6Cu;
    // 0x130d6c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x130d70: 0x5450007c  bnel        $v0, $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x130D70u;
    {
        const bool branch_taken_0x130d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130d70) {
            ctx->pc = 0x130D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130D70u;
            // 0x130d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130D78u;
    // 0x130d78: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x130d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x130d7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130d80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130D80u;
    {
        const bool branch_taken_0x130d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x130D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D80u;
        // 0x130d84: 0x24a40080  addiu       $a0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d80) {
            ctx->pc = 0x130D98u;
            return;
        }
    }
    ctx->pc = 0x130D88u;
}
