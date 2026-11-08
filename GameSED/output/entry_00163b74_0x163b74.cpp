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

// Function: entry_00163b74
// Address: 0x163b74 - 0x163b84
void entry_00163b74_0x163b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163b74_0x163b74");
#endif

    ctx->pc = 0x163b74u;

    // 0x163b74: 0x8c6203b0  lw          $v0, 0x3B0($v1)
    ctx->pc = 0x163b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 944)));
    // 0x163b78: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x163b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x163b7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x163B7Cu;
    {
        const bool branch_taken_0x163b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163b7c) {
            ctx->pc = 0x163B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163B7Cu;
            // 0x163b80: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B84u;
            return;
        }
    }
    ctx->pc = 0x163B84u;
}
