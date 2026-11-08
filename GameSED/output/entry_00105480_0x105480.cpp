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

// Function: entry_00105480
// Address: 0x105480 - 0x105498
void entry_00105480_0x105480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105480_0x105480");
#endif

    ctx->pc = 0x105480u;

    // 0x105480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105484: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x105484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x105488: 0x146000c4  bnez        $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x105488u;
    {
        const bool branch_taken_0x105488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105488u;
        // 0x10548c: 0xaf8288cc  sw          $v0, -0x7734($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105488) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x105490u;
    // 0x105490: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x105490u;
    {
        const bool branch_taken_0x105490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105490u;
        // 0x105494: 0xaf8088cc  sw          $zero, -0x7734($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105490) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x105498u;
}
