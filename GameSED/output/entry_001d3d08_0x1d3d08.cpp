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

// Function: entry_001d3d08
// Address: 0x1d3d08 - 0x1d3d30
void entry_001d3d08_0x1d3d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d08_0x1d3d08");
#endif

    ctx->pc = 0x1d3d08u;

    // 0x1d3d08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3D08u;
    {
        const bool branch_taken_0x1d3d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D08u;
        // 0x1d3d0c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d08) {
            ctx->pc = 0x1D3D34u;
            return;
        }
    }
    ctx->pc = 0x1D3D10u;
    // 0x1d3d10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3d14: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1d3d18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3d1c: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1d3d20: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d3d24: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3d28: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1d3d2c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3d30u;
}
