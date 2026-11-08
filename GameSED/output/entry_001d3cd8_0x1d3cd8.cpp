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

// Function: entry_001d3cd8
// Address: 0x1d3cd8 - 0x1d3d08
void entry_001d3cd8_0x1d3cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3cd8_0x1d3cd8");
#endif

    ctx->pc = 0x1d3cd8u;

    // 0x1d3cd8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1d3cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d3cdc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3CDCu;
    {
        const bool branch_taken_0x1d3cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CDCu;
        // 0x1d3ce0: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cdc) {
            ctx->pc = 0x1D3D08u;
            return;
        }
    }
    ctx->pc = 0x1D3CE4u;
    // 0x1d3ce4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3ce8: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1d3cec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3cf0: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1d3cf4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3cf8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d3cfc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1d3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1d3d00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D3D00u;
    {
        const bool branch_taken_0x1d3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D00u;
        // 0x1d3d04: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d00) {
            ctx->pc = 0x1D3D30u;
            return;
        }
    }
    ctx->pc = 0x1D3D08u;
}
