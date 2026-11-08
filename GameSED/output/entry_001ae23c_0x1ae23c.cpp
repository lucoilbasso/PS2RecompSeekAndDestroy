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

// Function: entry_001ae23c
// Address: 0x1ae23c - 0x1ae250
void entry_001ae23c_0x1ae23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae23c_0x1ae23c");
#endif

    ctx->pc = 0x1ae23cu;

    // 0x1ae23c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ae23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ae240: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1ae240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ae244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae248: 0x1662ffc9  bne         $s3, $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1AE248u;
    {
        const bool branch_taken_0x1ae248 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE248u;
        // 0x1ae24c: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae248) {
            ctx->pc = 0x1AE170u;
            return;
        }
    }
    ctx->pc = 0x1AE250u;
}
