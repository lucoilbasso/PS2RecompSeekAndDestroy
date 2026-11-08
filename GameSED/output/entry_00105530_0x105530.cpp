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

// Function: entry_00105530
// Address: 0x105530 - 0x105558
void entry_00105530_0x105530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105530_0x105530");
#endif

    ctx->pc = 0x105530u;

    // 0x105530: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x105530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x105534: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x105534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105538: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x105538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10553c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x10553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105540: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x105540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x105544: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x105544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x105548: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x105548u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10554c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x10554Cu;
    {
        const bool branch_taken_0x10554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10554Cu;
        // 0x105550: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10554c) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x105554u;
    // 0x105554: 0x0  nop
    ctx->pc = 0x105554u;
    // NOP
    ctx->pc = 0x105558u;
}
