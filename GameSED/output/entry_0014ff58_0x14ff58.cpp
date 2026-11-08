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

// Function: entry_0014ff58
// Address: 0x14ff58 - 0x14ff70
void entry_0014ff58_0x14ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ff58_0x14ff58");
#endif

    ctx->pc = 0x14ff58u;

    // 0x14ff58: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x14ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x14ff5c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FF5Cu;
    {
        const bool branch_taken_0x14ff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff5c) {
            ctx->pc = 0x14FF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF5Cu;
            // 0x14ff60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF84u;
            return;
        }
    }
    ctx->pc = 0x14FF64u;
    // 0x14ff64: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ff68: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x14ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x14ff6c: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    ctx->pc = 0x14ff70u;
}
