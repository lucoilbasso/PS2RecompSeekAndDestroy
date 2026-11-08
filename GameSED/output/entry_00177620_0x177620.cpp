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

// Function: entry_00177620
// Address: 0x177620 - 0x177638
void entry_00177620_0x177620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177620_0x177620");
#endif

    ctx->pc = 0x177620u;

    // 0x177620: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x177624: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177624u;
    {
        const bool branch_taken_0x177624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177624u;
        // 0x177628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177624) {
            ctx->pc = 0x177638u;
            return;
        }
    }
    ctx->pc = 0x17762Cu;
    // 0x17762c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17762Cu;
    {
        const bool branch_taken_0x17762c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17762Cu;
        // 0x177630: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17762c) {
            ctx->pc = 0x1776C8u;
            return;
        }
    }
    ctx->pc = 0x177634u;
    // 0x177634: 0x0  nop
    ctx->pc = 0x177634u;
    // NOP
    ctx->pc = 0x177638u;
}
