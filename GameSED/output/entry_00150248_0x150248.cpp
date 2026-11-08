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

// Function: entry_00150248
// Address: 0x150248 - 0x150260
void entry_00150248_0x150248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150248_0x150248");
#endif

    ctx->pc = 0x150248u;

    // 0x150248: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x150248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x15024c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x15024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x150250: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x150250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x150254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150254u;
    {
        const bool branch_taken_0x150254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150254u;
        // 0x150258: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150254) {
            ctx->pc = 0x150260u;
            return;
        }
    }
    ctx->pc = 0x15025Cu;
    // 0x15025c: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x15025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    ctx->pc = 0x150260u;
}
