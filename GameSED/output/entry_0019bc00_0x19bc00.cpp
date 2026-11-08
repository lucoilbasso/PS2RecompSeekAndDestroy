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

// Function: entry_0019bc00
// Address: 0x19bc00 - 0x19bc28
void entry_0019bc00_0x19bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bc00_0x19bc00");
#endif

    ctx->pc = 0x19bc00u;

    // 0x19bc00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bc04: 0x2445f008  addiu       $a1, $v0, -0xFF8
    ctx->pc = 0x19bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19bc08: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F00Cu));
    // 0x19bc0c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BC0Cu;
    {
        const bool branch_taken_0x19bc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc0c) {
            ctx->pc = 0x19BC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BC0Cu;
            // 0x19bc10: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BC28u;
            return;
        }
    }
    ctx->pc = 0x19BC14u;
    // 0x19bc14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bc18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bc1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bc20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19BC20u;
    {
        const bool branch_taken_0x19bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC20u;
        // 0x19bc24: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc20) {
            ctx->pc = 0x19BCA0u;
            return;
        }
    }
    ctx->pc = 0x19BC28u;
}
