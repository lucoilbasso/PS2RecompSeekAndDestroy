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

// Function: caseD_12
// Address: 0x154630 - 0x154658
void caseD_12_0x154630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x154630");
#endif

    ctx->pc = 0x154630u;

    // 0x154630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154634: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x154634u;
    {
        const bool branch_taken_0x154634 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x154638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154634u;
        // 0x154638: 0x2403ff1f  addiu       $v1, $zero, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154634) {
            ctx->pc = 0x154658u;
            return;
        }
    }
    ctx->pc = 0x15463Cu;
    // 0x15463c: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x15463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154640: 0x2404f8ff  addiu       $a0, $zero, -0x701
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965503));
    // 0x154644: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154648: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x154648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15464c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15464Cu;
    {
        const bool branch_taken_0x15464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15464Cu;
        // 0x154650: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15464c) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154654u;
    // 0x154654: 0x0  nop
    ctx->pc = 0x154654u;
    // NOP
    ctx->pc = 0x154658u;
}
