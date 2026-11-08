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

// Function: entry_00132a60
// Address: 0x132a60 - 0x132a90
void entry_00132a60_0x132a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a60_0x132a60");
#endif

    ctx->pc = 0x132a60u;

    // 0x132a60: 0x26220005  addiu       $v0, $s1, 0x5
    ctx->pc = 0x132a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x132a64: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x132a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x132a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132A68u;
    {
        const bool branch_taken_0x132a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A68u;
        // 0x132a6c: 0x2403fffa  addiu       $v1, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a68) {
            ctx->pc = 0x132A90u;
            return;
        }
    }
    ctx->pc = 0x132A70u;
    // 0x132a70: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x132a74: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x132a78: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x132a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x132a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132a84: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x132A84u;
    {
        const bool branch_taken_0x132a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A84u;
        // 0x132a88: 0x24423630  addiu       $v0, $v0, 0x3630 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a84) {
            ctx->pc = 0x132B34u;
            return;
        }
    }
    ctx->pc = 0x132A8Cu;
    // 0x132a8c: 0x0  nop
    ctx->pc = 0x132a8cu;
    // NOP
    ctx->pc = 0x132a90u;
}
