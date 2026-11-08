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

// Function: entry_0019f6c4
// Address: 0x19f6c4 - 0x19f6f0
void entry_0019f6c4_0x19f6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6c4_0x19f6c4");
#endif

    ctx->pc = 0x19f6c4u;

    // 0x19f6c4: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x19F6C4u;
    {
        const bool branch_taken_0x19f6c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f6c4) {
            ctx->pc = 0x19F6F0u;
            return;
        }
    }
    ctx->pc = 0x19F6CCu;
    // 0x19f6cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f6d0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x19f6d4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x19f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x19f6d8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x19f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x19f6dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x19f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19f6e0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x19F6E0u;
    {
        const bool branch_taken_0x19f6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6e0) {
            ctx->pc = 0x19F6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F6E0u;
            // 0x19f6e4: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F72Cu;
            return;
        }
    }
    ctx->pc = 0x19F6E8u;
    // 0x19f6e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19F6E8u;
    {
        const bool branch_taken_0x19f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6E8u;
        // 0x19f6ec: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6e8) {
            ctx->pc = 0x19F72Cu;
            return;
        }
    }
    ctx->pc = 0x19F6F0u;
}
