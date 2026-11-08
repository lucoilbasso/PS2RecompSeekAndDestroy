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

// Function: entry_00159b48
// Address: 0x159b48 - 0x159b60
void entry_00159b48_0x159b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159b48_0x159b48");
#endif

    ctx->pc = 0x159b48u;

    // 0x159b48: 0x15220005  bne         $t1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159B48u;
    {
        const bool branch_taken_0x159b48 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x159B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B48u;
        // 0x159b4c: 0x24e40400  addiu       $a0, $a3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b48) {
            ctx->pc = 0x159B60u;
            return;
        }
    }
    ctx->pc = 0x159B50u;
    // 0x159b50: 0x24e303d0  addiu       $v1, $a3, 0x3D0
    ctx->pc = 0x159b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
    // 0x159b54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159B54u;
    {
        const bool branch_taken_0x159b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B54u;
        // 0x159b58: 0x24e203c0  addiu       $v0, $a3, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b54) {
            ctx->pc = 0x159B68u;
            return;
        }
    }
    ctx->pc = 0x159B5Cu;
    // 0x159b5c: 0x0  nop
    ctx->pc = 0x159b5cu;
    // NOP
    ctx->pc = 0x159b60u;
}
