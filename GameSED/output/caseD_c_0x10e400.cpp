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

// Function: caseD_c
// Address: 0x10e400 - 0x10e418
void caseD_c_0x10e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x10e400");
#endif

    ctx->pc = 0x10e400u;

    // 0x10e400: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10e404: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e408: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x10e408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x10e40c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10E40Cu;
    {
        const bool branch_taken_0x10e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0x34640800  ori         $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e40c) {
            ctx->pc = 0x10E440u;
            return;
        }
    }
    ctx->pc = 0x10E414u;
    // 0x10e414: 0x0  nop
    ctx->pc = 0x10e414u;
    // NOP
    ctx->pc = 0x10e418u;
}
