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

// Function: entry_00185858
// Address: 0x185858 - 0x18586c
void entry_00185858_0x185858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185858_0x185858");
#endif

    ctx->pc = 0x185858u;

label_185858:
    // 0x185858: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x185858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x18585c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18585Cu;
    {
        const bool branch_taken_0x18585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18585c) {
            ctx->pc = 0x185890u;
            return;
        }
    }
    ctx->pc = 0x185864u;
    // 0x185864: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x185864u;
    {
        const bool branch_taken_0x185864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x185864) {
            ctx->pc = 0x185868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185864u;
            // 0x185868: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185858;
        }
    }
    ctx->pc = 0x18586Cu;
}
