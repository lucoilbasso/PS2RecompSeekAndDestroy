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

// Function: caseD_5
// Address: 0x1611d0 - 0x161200
void caseD_5_0x1611d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1611d0");
#endif

    ctx->pc = 0x1611d0u;

    // 0x1611d0: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x1611d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
    // 0x1611d4: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x1611d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1611d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1611D8u;
    {
        const bool branch_taken_0x1611d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611D8u;
        // 0x1611dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611d8) {
            ctx->pc = 0x161200u;
            return;
        }
    }
    ctx->pc = 0x1611E0u;
    // 0x1611e0: 0x26040cf0  addiu       $a0, $s0, 0xCF0
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3312));
    // 0x1611e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1611e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1611e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1611ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1611f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1611f4: 0xac520cf4  sw          $s2, 0xCF4($v0)
    ctx->pc = 0x1611f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 18));
    // 0x1611f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1611F8u;
    {
        const bool branch_taken_0x1611f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611F8u;
        // 0x1611fc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611f8) {
            ctx->pc = 0x161210u;
            return;
        }
    }
    ctx->pc = 0x161200u;
}
