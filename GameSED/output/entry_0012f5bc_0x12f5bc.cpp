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

// Function: entry_0012f5bc
// Address: 0x12f5bc - 0x12f5e8
void entry_0012f5bc_0x12f5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f5bc_0x12f5bc");
#endif

    ctx->pc = 0x12f5bcu;

    // 0x12f5bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f5c0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12f5c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12f5c4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x12f5c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x12f5c8: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x12f5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12f5cc: 0x104001cc  beqz        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x12F5CCu;
    {
        const bool branch_taken_0x12f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5CCu;
        // 0x12f5d0: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5cc) {
            ctx->pc = 0x12FD00u;
            return;
        }
    }
    ctx->pc = 0x12F5D4u;
    // 0x12f5d4: 0x5680ff44  bnel        $s4, $zero, . + 4 + (-0xBC << 2)
    ctx->pc = 0x12F5D4u;
    {
        const bool branch_taken_0x12f5d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f5d4) {
            ctx->pc = 0x12F5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5D4u;
            // 0x12f5d8: 0x8e7100c8  lw          $s1, 0xC8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F2E8u;
            return;
        }
    }
    ctx->pc = 0x12F5DCu;
    // 0x12f5dc: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x12F5DCu;
    {
        const bool branch_taken_0x12f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5DCu;
        // 0x12f5e0: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5dc) {
            ctx->pc = 0x12FD04u;
            return;
        }
    }
    ctx->pc = 0x12F5E4u;
    // 0x12f5e4: 0x0  nop
    ctx->pc = 0x12f5e4u;
    // NOP
    ctx->pc = 0x12f5e8u;
}
