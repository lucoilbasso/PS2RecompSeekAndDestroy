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

// Function: entry_0017b390
// Address: 0x17b390 - 0x17b3a0
void entry_0017b390_0x17b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b390_0x17b390");
#endif

    ctx->pc = 0x17b390u;

    // 0x17b390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b394: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x17b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x17b398: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17B398u;
    {
        const bool branch_taken_0x17b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B398u;
        // 0x17b39c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b398) {
            ctx->pc = 0x17B3D8u;
            return;
        }
    }
    ctx->pc = 0x17B3A0u;
}
