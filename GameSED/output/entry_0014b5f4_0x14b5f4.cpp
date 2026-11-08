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

// Function: entry_0014b5f4
// Address: 0x14b5f4 - 0x14b610
void entry_0014b5f4_0x14b5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b5f4_0x14b5f4");
#endif

    switch (ctx->pc) {
        case 0x14b60cu: goto label_14b60c;
        default: break;
    }

    ctx->pc = 0x14b5f4u;

    // 0x14b5f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x14b5f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b5fc: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B5FCu;
    {
        const bool branch_taken_0x14b5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14b5fc) {
            ctx->pc = 0x14B600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B5FCu;
            // 0x14b600: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B610u;
            return;
        }
    }
    ctx->pc = 0x14B604u;
    // 0x14b604: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B604u;
    SET_GPR_U32(ctx, 31, 0x14B60Cu);
    ctx->pc = 0x14B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B604u;
    // 0x14b608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B604u, 0x14B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B60Cu;
label_14b60c:
    // 0x14b60c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x14b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x14b610u;
}
