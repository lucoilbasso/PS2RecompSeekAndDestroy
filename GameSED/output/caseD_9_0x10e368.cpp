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

// Function: caseD_9
// Address: 0x10e368 - 0x10e380
void caseD_9_0x10e368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x10e368");
#endif

    ctx->pc = 0x10e368u;

    // 0x10e368: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e36c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x10e370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10e374: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10E374u;
    {
        const bool branch_taken_0x10e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E374u;
        // 0x10e378: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e374) {
            ctx->pc = 0x10E3B0u;
            return;
        }
    }
    ctx->pc = 0x10E37Cu;
    // 0x10e37c: 0x0  nop
    ctx->pc = 0x10e37cu;
    // NOP
    ctx->pc = 0x10e380u;
}
