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

// Function: caseD_6
// Address: 0x10e350 - 0x10e368
void caseD_6_0x10e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x10e350");
#endif

    ctx->pc = 0x10e350u;

    // 0x10e350: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e354: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x10e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x10e358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10e35c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10E35Cu;
    {
        const bool branch_taken_0x10e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E35Cu;
        // 0x10e360: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e35c) {
            ctx->pc = 0x10E3B0u;
            return;
        }
    }
    ctx->pc = 0x10E364u;
    // 0x10e364: 0x0  nop
    ctx->pc = 0x10e364u;
    // NOP
    ctx->pc = 0x10e368u;
}
