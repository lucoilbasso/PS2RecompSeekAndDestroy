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

// Function: entry_00129af0
// Address: 0x129af0 - 0x129b20
void entry_00129af0_0x129af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129af0_0x129af0");
#endif

    ctx->pc = 0x129af0u;

    // 0x129af0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x129af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x129af4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129af8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x129af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x129afc: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x129afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x129b00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x129B00u;
    {
        const bool branch_taken_0x129b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b00) {
            ctx->pc = 0x129B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B00u;
            // 0x129b04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129B20u;
            return;
        }
    }
    ctx->pc = 0x129B08u;
    // 0x129b08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x129b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x129b0c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x129b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x129b10: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x129b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x129b14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x129B14u;
    {
        const bool branch_taken_0x129b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129b14) {
            ctx->pc = 0x129B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B14u;
            // 0x129b18: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129B28u;
            return;
        }
    }
    ctx->pc = 0x129B1Cu;
    // 0x129b1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x129b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x129b20u;
}
