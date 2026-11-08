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

// Function: caseD_1371c8
// Address: 0x1371c8 - 0x1371e0
void caseD_1371c8_0x1371c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1371c8_0x1371c8");
#endif

    ctx->pc = 0x1371c8u;

    // 0x1371c8: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x1371c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x1371cc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1371CCu;
    {
        const bool branch_taken_0x1371cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1371cc) {
            ctx->pc = 0x1371D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1371CCu;
            // 0x1371d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x1371D4u;
    // 0x1371d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1371D4u;
    {
        const bool branch_taken_0x1371d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371D4u;
        // 0x1371d8: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371d4) {
            ctx->pc = 0x137220u;
            return;
        }
    }
    ctx->pc = 0x1371DCu;
    // 0x1371dc: 0x0  nop
    ctx->pc = 0x1371dcu;
    // NOP
    ctx->pc = 0x1371e0u;
}
