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

// Function: entry_00156ce8
// Address: 0x156ce8 - 0x156d08
void entry_00156ce8_0x156ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ce8_0x156ce8");
#endif

    ctx->pc = 0x156ce8u;

    // 0x156ce8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156cec: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x156cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x156cf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x156cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156cf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156cf8: 0x54680007  bnel        $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156CF8u;
    {
        const bool branch_taken_0x156cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x156cf8) {
            ctx->pc = 0x156CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156CF8u;
            // 0x156cfc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156D18u;
            return;
        }
    }
    ctx->pc = 0x156D00u;
    // 0x156d00: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x156D00u;
    {
        const bool branch_taken_0x156d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d00) {
            ctx->pc = 0x156D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156D00u;
            // 0x156d04: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156D18u;
            return;
        }
    }
    ctx->pc = 0x156D08u;
}
