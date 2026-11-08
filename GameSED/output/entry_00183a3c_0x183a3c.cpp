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

// Function: entry_00183a3c
// Address: 0x183a3c - 0x183a70
void entry_00183a3c_0x183a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183a3c_0x183a3c");
#endif

    switch (ctx->pc) {
        case 0x183a5cu: goto label_183a5c;
        default: break;
    }

    ctx->pc = 0x183a3cu;

    // 0x183a3c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x183a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x183a40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x183a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x183a44: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x183a44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183a48: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183A48u;
    {
        const bool branch_taken_0x183a48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x183A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A48u;
        // 0x183a4c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a48) {
            ctx->pc = 0x183A70u;
            return;
        }
    }
    ctx->pc = 0x183A50u;
    // 0x183a50: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x183a54: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x183A54u;
    SET_GPR_U32(ctx, 31, 0x183A5Cu);
    ctx->pc = 0x183A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A54u;
    // 0x183a58: 0x24847e28  addiu       $a0, $a0, 0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x183A54u, 0x183A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A5Cu;
label_183a5c:
    // 0x183a5c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183a60: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x183a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
    // 0x183a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a68: 0xc068186  jal         func_1A0618
    ctx->pc = 0x183A68u;
    SET_GPR_U32(ctx, 31, 0x183A70u);
    ctx->pc = 0x183A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A68u;
    // 0x183a6c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x183A68u, 0x183A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A70u;
}
