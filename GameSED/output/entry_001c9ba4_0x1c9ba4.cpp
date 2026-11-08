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

// Function: entry_001c9ba4
// Address: 0x1c9ba4 - 0x1c9bd8
void entry_001c9ba4_0x1c9ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9ba4_0x1c9ba4");
#endif

    ctx->pc = 0x1c9ba4u;

    // 0x1c9ba4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1c9ba8: 0x2445de04  addiu       $a1, $v0, -0x21FC
    ctx->pc = 0x1c9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958596));
    // 0x1c9bac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DE04u));
    // 0x1c9bb0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9BB0u;
    {
        const bool branch_taken_0x1c9bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BB0u;
        // 0x1c9bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bb0) {
            ctx->pc = 0x1C9BD8u;
            return;
        }
    }
    ctx->pc = 0x1C9BB8u;
    // 0x1c9bb8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1c9bbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9bc4: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x1c9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
    // 0x1c9bc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c9bcc: 0x8072bc6  j           func_1CAF18
    ctx->pc = 0x1C9BCCu;
    ctx->pc = 0x1C9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BCCu;
    // 0x1c9bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF18u;
    ps2___deregister_frame_info_0x1caf18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9BD4u;
    // 0x1c9bd4: 0x0  nop
    ctx->pc = 0x1c9bd4u;
    // NOP
    ctx->pc = 0x1c9bd8u;
}
