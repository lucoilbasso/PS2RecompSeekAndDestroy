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

// Function: entry_001c9308
// Address: 0x1c9308 - 0x1c9328
void entry_001c9308_0x1c9308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9308_0x1c9308");
#endif

    ctx->pc = 0x1c9308u;

    // 0x1c9308: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1c9308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c930c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C930Cu;
    {
        const bool branch_taken_0x1c930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C930Cu;
        // 0x1c9310: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c930c) {
            ctx->pc = 0x1C9328u;
            return;
        }
    }
    ctx->pc = 0x1C9314u;
    // 0x1c9314: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x1c9314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c9318: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c9318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c931c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C931Cu;
    {
        const bool branch_taken_0x1c931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C931Cu;
        // 0x1c9320: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c931c) {
            ctx->pc = 0x1C933Cu;
            return;
        }
    }
    ctx->pc = 0x1C9324u;
    // 0x1c9324: 0x0  nop
    ctx->pc = 0x1c9324u;
    // NOP
    ctx->pc = 0x1c9328u;
}
