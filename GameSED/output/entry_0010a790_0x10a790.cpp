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

// Function: entry_0010a790
// Address: 0x10a790 - 0x10a7d0
void entry_0010a790_0x10a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a790_0x10a790");
#endif

    switch (ctx->pc) {
        case 0x10a7b8u: goto label_10a7b8;
        case 0x10a7c0u: goto label_10a7c0;
        default: break;
    }

    ctx->pc = 0x10a790u;

    // 0x10a790: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10a794: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x10a794u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x10a798: 0x36310003  ori         $s1, $s1, 0x3
    ctx->pc = 0x10a798u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3);
    // 0x10a79c: 0x24170011  addiu       $s7, $zero, 0x11
    ctx->pc = 0x10a79cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x10a7a0: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x10a7a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a7a4: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x10a7a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    // 0x10a7a8: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a7ac: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x10a7acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a7b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A7B0u;
    SET_GPR_U32(ctx, 31, 0x10A7B8u);
    ctx->pc = 0x10A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7B0u;
    // 0x10a7b4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A7B0u, 0x10A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7B8u;
label_10a7b8:
    // 0x10a7b8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A7B8u;
    SET_GPR_U32(ctx, 31, 0x10A7C0u);
    ctx->pc = 0x10A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7B8u;
    // 0x10a7bc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A7B8u, 0x10A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7C0u;
label_10a7c0:
    // 0x10a7c0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x10a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a7c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x10a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10a7c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10A7C8u;
    {
        const bool branch_taken_0x10a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7C8u;
        // 0x10a7cc: 0x24660100  addiu       $a2, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7c8) {
            ctx->pc = 0x10A814u;
            return;
        }
    }
    ctx->pc = 0x10A7D0u;
}
