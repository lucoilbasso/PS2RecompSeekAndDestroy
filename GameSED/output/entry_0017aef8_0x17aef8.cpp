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

// Function: entry_0017aef8
// Address: 0x17aef8 - 0x17af0c
void entry_0017aef8_0x17aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aef8_0x17aef8");
#endif

    ctx->pc = 0x17aef8u;

    // 0x17aef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17aefc: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17aefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17af00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AF00u;
    {
        const bool branch_taken_0x17af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF00u;
        // 0x17af04: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af00) {
            ctx->pc = 0x17AED8u;
            return;
        }
    }
    ctx->pc = 0x17AF08u;
    // 0x17af08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17af0cu;
}
