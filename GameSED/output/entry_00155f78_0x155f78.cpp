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

// Function: entry_00155f78
// Address: 0x155f78 - 0x155f90
void entry_00155f78_0x155f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155f78_0x155f78");
#endif

    ctx->pc = 0x155f78u;

    // 0x155f78: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F78u;
    {
        const bool branch_taken_0x155f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F78u;
        // 0x155f7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f78) {
            ctx->pc = 0x155FA0u;
            return;
        }
    }
    ctx->pc = 0x155F80u;
    // 0x155f80: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F80u;
    {
        const bool branch_taken_0x155f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F80u;
        // 0x155f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f80) {
            ctx->pc = 0x155FA8u;
            return;
        }
    }
    ctx->pc = 0x155F88u;
    // 0x155f88: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x155F88u;
    {
        const bool branch_taken_0x155f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F88u;
        // 0x155f8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f88) {
            ctx->pc = 0x156008u;
            return;
        }
    }
    ctx->pc = 0x155F90u;
}
