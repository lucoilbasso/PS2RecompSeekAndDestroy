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

// Function: caseD_2
// Address: 0x1cb748 - 0x1cb758
void caseD_2_0x1cb748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1cb748");
#endif

    ctx->pc = 0x1cb748u;

    // 0x1cb748: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1cb748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb74c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CB74Cu;
    {
        const bool branch_taken_0x1cb74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB74Cu;
        // 0x1cb750: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb74c) {
            ctx->pc = 0x1CB78Cu;
            return;
        }
    }
    ctx->pc = 0x1CB754u;
    // 0x1cb754: 0x0  nop
    ctx->pc = 0x1cb754u;
    // NOP
    ctx->pc = 0x1cb758u;
}
