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

// Function: entry_001d4aa8
// Address: 0x1d4aa8 - 0x1d4ac0
void entry_001d4aa8_0x1d4aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4aa8_0x1d4aa8");
#endif

    switch (ctx->pc) {
        case 0x1d4ab0u: goto label_1d4ab0;
        default: break;
    }

    ctx->pc = 0x1d4aa8u;

    // 0x1d4aa8: 0xc074b22  jal         func_1D2C88
    ctx->pc = 0x1D4AA8u;
    SET_GPR_U32(ctx, 31, 0x1D4AB0u);
    ctx->pc = 0x1D2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C88u, 0x1D4AA8u, 0x1D4AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AB0u;
label_1d4ab0:
    // 0x1d4ab0: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x1D4AB0u;
    {
        const bool branch_taken_0x1d4ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AB0u;
        // 0x1d4ab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ab0) {
            ctx->pc = 0x1D4E04u;
            return;
        }
    }
    ctx->pc = 0x1D4AB8u;
    // 0x1d4ab8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1d4ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d4abc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d4abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    ctx->pc = 0x1d4ac0u;
}
