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

// Function: entry_001d6a4c
// Address: 0x1d6a4c - 0x1d6a68
void entry_001d6a4c_0x1d6a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6a4c_0x1d6a4c");
#endif

    ctx->pc = 0x1d6a4cu;

    // 0x1d6a4c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d6a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d6a50: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d6a54: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d6a58: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1d6a5c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d6a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6a60: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D6A60u;
    {
        const bool branch_taken_0x1d6a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A60u;
        // 0x1d6a64: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a60) {
            ctx->pc = 0x1D6A00u;
            return;
        }
    }
    ctx->pc = 0x1D6A68u;
}
