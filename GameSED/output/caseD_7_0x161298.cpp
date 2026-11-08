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

// Function: caseD_7
// Address: 0x161298 - 0x1612c8
void caseD_7_0x161298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x161298");
#endif

    ctx->pc = 0x161298u;

    // 0x161298: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x161298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
    // 0x16129c: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x16129cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1612a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1612A0u;
    {
        const bool branch_taken_0x1612a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612A0u;
        // 0x1612a4: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612a0) {
            ctx->pc = 0x1612C8u;
            return;
        }
    }
    ctx->pc = 0x1612A8u;
    // 0x1612a8: 0x26040cf0  addiu       $a0, $s0, 0xCF0
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3312));
    // 0x1612ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1612b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1612b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1612b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1612b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1612bc: 0xac520cf4  sw          $s2, 0xCF4($v0)
    ctx->pc = 0x1612bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 18));
    // 0x1612c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1612C0u;
    {
        const bool branch_taken_0x1612c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612C0u;
        // 0x1612c4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612c0) {
            ctx->pc = 0x1612D8u;
            return;
        }
    }
    ctx->pc = 0x1612C8u;
}
