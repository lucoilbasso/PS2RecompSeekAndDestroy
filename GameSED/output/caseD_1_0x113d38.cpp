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

// Function: caseD_1
// Address: 0x113d38 - 0x113d50
void caseD_1_0x113d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x113d38");
#endif

    ctx->pc = 0x113d38u;

    // 0x113d38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113d3c: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x113d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x113d40: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x113d40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x113d44: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x113d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x113d48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x113D48u;
    {
        const bool branch_taken_0x113d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D48u;
        // 0x113d4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d48) {
            ctx->pc = 0x113DB8u;
            return;
        }
    }
    ctx->pc = 0x113D50u;
}
