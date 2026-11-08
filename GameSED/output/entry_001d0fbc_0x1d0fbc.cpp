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

// Function: entry_001d0fbc
// Address: 0x1d0fbc - 0x1d0fd0
void entry_001d0fbc_0x1d0fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0fbc_0x1d0fbc");
#endif

    ctx->pc = 0x1d0fbcu;

    // 0x1d0fbc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0FBCu;
    {
        const bool branch_taken_0x1d0fbc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FBCu;
        // 0x1d0fc0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fbc) {
            ctx->pc = 0x1D0FD0u;
            return;
        }
    }
    ctx->pc = 0x1D0FC4u;
    // 0x1d0fc4: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1d0fc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d0fc8: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x1d0fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x1d0fcc: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1d0fccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->pc = 0x1d0fd0u;
}
