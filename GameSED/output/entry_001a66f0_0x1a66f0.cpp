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

// Function: entry_001a66f0
// Address: 0x1a66f0 - 0x1a670c
void entry_001a66f0_0x1a66f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a66f0_0x1a66f0");
#endif

    ctx->pc = 0x1a66f0u;

    // 0x1a66f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a66f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a66f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a66fc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A66FCu;
    {
        const bool branch_taken_0x1a66fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66FCu;
        // 0x1a6700: 0x30a27fff  andi        $v0, $a1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66fc) {
            ctx->pc = 0x1A6710u;
            return;
        }
    }
    ctx->pc = 0x1A6704u;
    // 0x1a6704: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x1a6704u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1a6708: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x1a6708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    ctx->pc = 0x1a670cu;
}
