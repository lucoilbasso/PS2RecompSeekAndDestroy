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

// Function: entry_00123a10
// Address: 0x123a10 - 0x123a58
void entry_00123a10_0x123a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a10_0x123a10");
#endif

    ctx->pc = 0x123a10u;

    // 0x123a10: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x123a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x123a14: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x123a18: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x123A18u;
    {
        const bool branch_taken_0x123a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A18u;
        // 0x123a1c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a18) {
            ctx->pc = 0x123A58u;
            return;
        }
    }
    ctx->pc = 0x123A20u;
    // 0x123a20: 0x262201b0  addiu       $v0, $s1, 0x1B0
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x123a24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x123a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x123a28: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x123a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x123a2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123a30: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x123a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x123a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x123a38: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x123a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x123a3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x123a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x123a40: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x123a44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123a48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x123a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x123a4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x123a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x123a50: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x123a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x123a54: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x123a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x123a58u;
}
