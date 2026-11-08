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

// Function: entry_0018ab10
// Address: 0x18ab10 - 0x18ab30
void entry_0018ab10_0x18ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab10_0x18ab10");
#endif

    ctx->pc = 0x18ab10u;

    // 0x18ab10: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AB10u;
    {
        const bool branch_taken_0x18ab10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18ab10) {
            ctx->pc = 0x18AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AB10u;
            // 0x18ab14: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB30u;
            return;
        }
    }
    ctx->pc = 0x18AB18u;
    // 0x18ab18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ab1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab20: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x18ab24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ab28: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x18ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x18ab2c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    ctx->pc = 0x18ab30u;
}
