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

// Function: entry_00176fa4
// Address: 0x176fa4 - 0x176fe4
void entry_00176fa4_0x176fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176fa4_0x176fa4");
#endif

    switch (ctx->pc) {
        case 0x176fc4u: goto label_176fc4;
        default: break;
    }

    ctx->pc = 0x176fa4u;

    // 0x176fa4: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x176FA4u;
    {
        const bool branch_taken_0x176fa4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x176FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FA4u;
        // 0x176fa8: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fa4) {
            ctx->pc = 0x176FE4u;
            return;
        }
    }
    ctx->pc = 0x176FACu;
    // 0x176fac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x176facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x176fb0: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176fb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x176fbc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176FBCu;
    SET_GPR_U32(ctx, 31, 0x176FC4u);
    ctx->pc = 0x176FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FBCu;
    // 0x176fc0: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176FBCu, 0x176FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FC4u;
label_176fc4:
    // 0x176fc4: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x176fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176fc8: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x176fcc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x176fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176fd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176fd4: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x176fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x176fd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176fdc: 0xc05df26  jal         func_177C98
    ctx->pc = 0x176FDCu;
    SET_GPR_U32(ctx, 31, 0x176FE4u);
    ctx->pc = 0x176FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FDCu;
    // 0x176fe0: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x176FDCu, 0x176FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FE4u;
}
