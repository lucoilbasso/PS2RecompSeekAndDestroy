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

// Function: entry_001ad798
// Address: 0x1ad798 - 0x1ad7c0
void entry_001ad798_0x1ad798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad798_0x1ad798");
#endif

    ctx->pc = 0x1ad798u;

    // 0x1ad798: 0x24032442  addiu       $v1, $zero, 0x2442
    ctx->pc = 0x1ad798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9282));
    // 0x1ad79c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1ad79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ad7a0: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1AD7A0u;
    {
        const bool branch_taken_0x1ad7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7A0u;
        // 0x1ad7a4: 0x28a22443  slti        $v0, $a1, 0x2443 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9283) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7a0) {
            ctx->pc = 0x1AD7DCu;
            return;
        }
    }
    ctx->pc = 0x1AD7A8u;
    // 0x1ad7a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD7A8u;
    {
        const bool branch_taken_0x1ad7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7A8u;
        // 0x1ad7ac: 0x24022440  addiu       $v0, $zero, 0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7a8) {
            ctx->pc = 0x1AD7C0u;
            return;
        }
    }
    ctx->pc = 0x1AD7B0u;
    // 0x1ad7b0: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD7B0u;
    {
        const bool branch_taken_0x1ad7b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad7b0) {
            ctx->pc = 0x1AD7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD7B0u;
            // 0x1ad7b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD7E0u;
            return;
        }
    }
    ctx->pc = 0x1AD7B8u;
    // 0x1ad7b8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1AD7B8u;
    {
        const bool branch_taken_0x1ad7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7b8) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD7C0u;
}
