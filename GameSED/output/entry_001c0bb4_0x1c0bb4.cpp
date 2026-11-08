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

// Function: entry_001c0bb4
// Address: 0x1c0bb4 - 0x1c0bd4
void entry_001c0bb4_0x1c0bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0bb4_0x1c0bb4");
#endif

    ctx->pc = 0x1c0bb4u;

    // 0x1c0bb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c0bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0bbc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1c0bc0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1c0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1c0bc4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1c0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c0bc8: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0BC8u;
    {
        const bool branch_taken_0x1c0bc8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BC8u;
        // 0x1c0bcc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bc8) {
            ctx->pc = 0x1C0BD4u;
            return;
        }
    }
    ctx->pc = 0x1C0BD0u;
    // 0x1c0bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1c0bd4u;
}
