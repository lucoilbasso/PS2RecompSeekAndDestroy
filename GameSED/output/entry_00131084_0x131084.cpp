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

// Function: entry_00131084
// Address: 0x131084 - 0x1310b0
void entry_00131084_0x131084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131084_0x131084");
#endif

    switch (ctx->pc) {
        case 0x1310a8u: goto label_1310a8;
        default: break;
    }

    ctx->pc = 0x131084u;

    // 0x131084: 0x52400024  beql        $s2, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x131084u;
    {
        const bool branch_taken_0x131084 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x131084) {
            ctx->pc = 0x131088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131084u;
            // 0x131088: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131118u;
            return;
        }
    }
    ctx->pc = 0x13108Cu;
    // 0x13108c: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13108Cu;
    {
        const bool branch_taken_0x13108c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13108c) {
            ctx->pc = 0x131090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13108Cu;
            // 0x131090: 0x8e0302f8  lw          $v1, 0x2F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1310B0u;
            return;
        }
    }
    ctx->pc = 0x131094u;
    // 0x131094: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x131094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x131098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13109c: 0x24a56218  addiu       $a1, $a1, 0x6218
    ctx->pc = 0x13109cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25112));
    // 0x1310a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1310A0u;
    SET_GPR_U32(ctx, 31, 0x1310A8u);
    ctx->pc = 0x1310A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310A0u;
    // 0x1310a4: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1310A0u, 0x1310A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310A8u;
label_1310a8:
    // 0x1310a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1310A8u;
    {
        const bool branch_taken_0x1310a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1310ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310A8u;
        // 0x1310ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310a8) {
            ctx->pc = 0x131118u;
            return;
        }
    }
    ctx->pc = 0x1310B0u;
}
