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

// Function: entry_001a3a00
// Address: 0x1a3a00 - 0x1a3a20
void entry_001a3a00_0x1a3a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3a00_0x1a3a00");
#endif

    ctx->pc = 0x1a3a00u;

    // 0x1a3a00: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A3A00u;
    {
        const bool branch_taken_0x1a3a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a00) {
            ctx->pc = 0x1A3A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3A00u;
            // 0x1a3a04: 0x86620014  lh          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A38u;
            return;
        }
    }
    ctx->pc = 0x1A3A08u;
    // 0x1a3a08: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a3a0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a3a10: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a3a14: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a3a18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1a3a1c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x1a3a20u;
}
