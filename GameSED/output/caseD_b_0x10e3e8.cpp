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

// Function: caseD_b
// Address: 0x10e3e8 - 0x10e400
void caseD_b_0x10e3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x10e3e8");
#endif

    ctx->pc = 0x10e3e8u;

    // 0x10e3e8: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10e3ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e3ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e3f0: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x10e3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
    // 0x10e3f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10E3F4u;
    {
        const bool branch_taken_0x10e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3F4u;
        // 0x10e3f8: 0x34640400  ori         $a0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3f4) {
            ctx->pc = 0x10E478u;
            return;
        }
    }
    ctx->pc = 0x10E3FCu;
    // 0x10e3fc: 0x0  nop
    ctx->pc = 0x10e3fcu;
    // NOP
    ctx->pc = 0x10e400u;
}
