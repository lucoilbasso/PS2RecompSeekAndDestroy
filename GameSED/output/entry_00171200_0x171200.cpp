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

// Function: entry_00171200
// Address: 0x171200 - 0x171218
void entry_00171200_0x171200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171200_0x171200");
#endif

    ctx->pc = 0x171200u;

    // 0x171200: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x171200u;
    {
        const bool branch_taken_0x171200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x171204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171200u;
        // 0x171204: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171200) {
            ctx->pc = 0x171250u;
            return;
        }
    }
    ctx->pc = 0x171208u;
    // 0x171208: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x171208u;
    {
        const bool branch_taken_0x171208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171208u;
        // 0x17120c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171208) {
            ctx->pc = 0x171358u;
            return;
        }
    }
    ctx->pc = 0x171210u;
    // 0x171210: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x171210u;
    {
        const bool branch_taken_0x171210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171210u;
        // 0x171214: 0x8e0c0038  lw          $t4, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171210) {
            ctx->pc = 0x171290u;
            return;
        }
    }
    ctx->pc = 0x171218u;
}
