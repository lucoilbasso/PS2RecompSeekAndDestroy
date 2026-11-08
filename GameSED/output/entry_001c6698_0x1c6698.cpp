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

// Function: entry_001c6698
// Address: 0x1c6698 - 0x1c66b0
void entry_001c6698_0x1c6698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6698_0x1c6698");
#endif

    switch (ctx->pc) {
        case 0x1c66a8u: goto label_1c66a8;
        default: break;
    }

    ctx->pc = 0x1c6698u;

    // 0x1c6698: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x1c6698u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c669c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x1c669cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c66a0: 0xc071ec0  jal         func_1C7B00
    ctx->pc = 0x1C66A0u;
    SET_GPR_U32(ctx, 31, 0x1C66A8u);
    ctx->pc = 0x1C66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66A0u;
    // 0x1c66a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7B00u, 0x1C66A0u, 0x1C66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66A8u;
label_1c66a8:
    // 0x1c66a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C66A8u;
    {
        const bool branch_taken_0x1c66a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66A8u;
        // 0x1c66ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66a8) {
            ctx->pc = 0x1C6714u;
            return;
        }
    }
    ctx->pc = 0x1C66B0u;
}
