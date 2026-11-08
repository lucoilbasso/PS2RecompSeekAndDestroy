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

// Function: entry_00149c58
// Address: 0x149c58 - 0x149c68
void entry_00149c58_0x149c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149c58_0x149c58");
#endif

    ctx->pc = 0x149c58u;

    // 0x149c58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149C5Cu;
    {
        const bool branch_taken_0x149c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C5Cu;
        // 0x149c60: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c5c) {
            ctx->pc = 0x149C6Cu;
            return;
        }
    }
    ctx->pc = 0x149C64u;
    // 0x149c64: 0x0  nop
    ctx->pc = 0x149c64u;
    // NOP
    ctx->pc = 0x149c68u;
}
