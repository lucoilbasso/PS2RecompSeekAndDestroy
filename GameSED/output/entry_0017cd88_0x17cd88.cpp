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

// Function: entry_0017cd88
// Address: 0x17cd88 - 0x17cd98
void entry_0017cd88_0x17cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd88_0x17cd88");
#endif

    switch (ctx->pc) {
        case 0x17cd90u: goto label_17cd90;
        default: break;
    }

    ctx->pc = 0x17cd88u;

    // 0x17cd88: 0xc0680c8  jal         func_1A0320
    ctx->pc = 0x17CD88u;
    SET_GPR_U32(ctx, 31, 0x17CD90u);
    ctx->pc = 0x17CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD88u;
    // 0x17cd8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0320u, 0x17CD88u, 0x17CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD90u;
label_17cd90:
    // 0x17cd90: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x17CD90u;
    {
        const bool branch_taken_0x17cd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cd90) {
            ctx->pc = 0x17CD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CD90u;
            // 0x17cd94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            return;
        }
    }
    ctx->pc = 0x17CD98u;
}
