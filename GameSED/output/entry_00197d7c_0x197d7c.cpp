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

// Function: entry_00197d7c
// Address: 0x197d7c - 0x197db8
void entry_00197d7c_0x197d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d7c_0x197d7c");
#endif

    ctx->pc = 0x197d7cu;

    // 0x197d7c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x197d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x197d80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x197d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x197d84: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x197D84u;
    {
        const bool branch_taken_0x197d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D84u;
        // 0x197d88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d84) {
            ctx->pc = 0x197DD4u;
            return;
        }
    }
    ctx->pc = 0x197D8Cu;
    // 0x197d8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x197d90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d94: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x197d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x197d98: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x197d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x197d9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197D9Cu;
    {
        const bool branch_taken_0x197d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D9Cu;
        // 0x197da0: 0x2465fffe  addiu       $a1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d9c) {
            ctx->pc = 0x197DB8u;
            return;
        }
    }
    ctx->pc = 0x197DA4u;
    // 0x197da4: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x197da8: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x197da8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197dac: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x197db0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x197db4: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x197db4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->pc = 0x197db8u;
}
