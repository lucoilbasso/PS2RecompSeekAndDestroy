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

// Function: entry_0019ab7c
// Address: 0x19ab7c - 0x19ab98
void entry_0019ab7c_0x19ab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab7c_0x19ab7c");
#endif

    ctx->pc = 0x19ab7cu;

    // 0x19ab7c: 0x0  nop
    ctx->pc = 0x19ab7cu;
    // NOP
    // 0x19ab80: 0x0  nop
    ctx->pc = 0x19ab80u;
    // NOP
    // 0x19ab84: 0x14a7fff6  bne         $a1, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AB84u;
    {
        const bool branch_taken_0x19ab84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x19AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB84u;
        // 0x19ab88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab84) {
            ctx->pc = 0x19AB60u;
            return;
        }
    }
    ctx->pc = 0x19AB8Cu;
    // 0x19ab8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19AB8Cu;
    {
        const bool branch_taken_0x19ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB8Cu;
        // 0x19ab90: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab8c) {
            ctx->pc = 0x19ABF8u;
            return;
        }
    }
    ctx->pc = 0x19AB94u;
    // 0x19ab94: 0x0  nop
    ctx->pc = 0x19ab94u;
    // NOP
    ctx->pc = 0x19ab98u;
}
