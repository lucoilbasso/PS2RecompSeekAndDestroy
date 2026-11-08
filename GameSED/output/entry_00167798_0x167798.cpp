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

// Function: entry_00167798
// Address: 0x167798 - 0x1677b8
void entry_00167798_0x167798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167798_0x167798");
#endif

    ctx->pc = 0x167798u;

    // 0x167798: 0x14c0006e  bnez        $a2, . + 4 + (0x6E << 2)
    ctx->pc = 0x167798u;
    {
        const bool branch_taken_0x167798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167798u;
        // 0x16779c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167798) {
            ctx->pc = 0x167954u;
            return;
        }
    }
    ctx->pc = 0x1677A0u;
    // 0x1677a0: 0x26631258  addiu       $v1, $s3, 0x1258
    ctx->pc = 0x1677a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4696));
    // 0x1677a4: 0xae601260  sw          $zero, 0x1260($s3)
    ctx->pc = 0x1677a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4704), GPR_U32(ctx, 0));
    // 0x1677a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1677a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1677ac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1677ACu;
    {
        const bool branch_taken_0x1677ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677ACu;
        // 0x1677b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677ac) {
            ctx->pc = 0x167800u;
            return;
        }
    }
    ctx->pc = 0x1677B4u;
    // 0x1677b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1677b8u;
}
