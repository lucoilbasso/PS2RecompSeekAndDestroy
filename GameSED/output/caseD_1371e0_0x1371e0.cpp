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

// Function: caseD_1371e0
// Address: 0x1371e0 - 0x137208
void caseD_1371e0_0x1371e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1371e0_0x1371e0");
#endif

    ctx->pc = 0x1371e0u;

    // 0x1371e0: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x1371e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x1371e4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1371E4u;
    {
        const bool branch_taken_0x1371e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1371e4) {
            ctx->pc = 0x1371E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1371E4u;
            // 0x1371e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x1371ECu;
    // 0x1371ec: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x1371ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x1371f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1371f4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1371F4u;
    {
        const bool branch_taken_0x1371f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1371f4) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x1371FCu;
    // 0x1371fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1371FCu;
    {
        const bool branch_taken_0x1371fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371FCu;
        // 0x137200: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371fc) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137204u;
    // 0x137204: 0x0  nop
    ctx->pc = 0x137204u;
    // NOP
    ctx->pc = 0x137208u;
}
