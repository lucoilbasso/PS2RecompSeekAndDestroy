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

// Function: entry_00154cd8
// Address: 0x154cd8 - 0x154cf0
void entry_00154cd8_0x154cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154cd8_0x154cd8");
#endif

    ctx->pc = 0x154cd8u;

    // 0x154cd8: 0x54620191  bnel        $v1, $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x154CD8u;
    {
        const bool branch_taken_0x154cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154cd8) {
            ctx->pc = 0x154CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CD8u;
            // 0x154cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x154CE0u;
    // 0x154ce0: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154ce4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x154ce8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x154cec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x154cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    ctx->pc = 0x154cf0u;
}
