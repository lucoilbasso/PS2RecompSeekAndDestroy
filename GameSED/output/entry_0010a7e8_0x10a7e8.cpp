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

// Function: entry_0010a7e8
// Address: 0x10a7e8 - 0x10a814
void entry_0010a7e8_0x10a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a7e8_0x10a7e8");
#endif

    switch (ctx->pc) {
        case 0x10a800u: goto label_10a800;
        case 0x10a808u: goto label_10a808;
        default: break;
    }

    ctx->pc = 0x10a7e8u;

    // 0x10a7e8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10a7ec: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x10a7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x10a7f0: 0x36310008  ori         $s1, $s1, 0x8
    ctx->pc = 0x10a7f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x10a7f4: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a7f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A7F8u;
    SET_GPR_U32(ctx, 31, 0x10A800u);
    ctx->pc = 0x10A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7F8u;
    // 0x10a7fc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A7F8u, 0x10A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A800u;
label_10a800:
    // 0x10a800: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A800u;
    SET_GPR_U32(ctx, 31, 0x10A808u);
    ctx->pc = 0x10A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A800u;
    // 0x10a804: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A800u, 0x10A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A808u;
label_10a808:
    // 0x10a808: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a80c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x10a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10a810: 0x24660290  addiu       $a2, $v1, 0x290
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    ctx->pc = 0x10a814u;
}
