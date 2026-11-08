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

// Function: entry_00176ec8
// Address: 0x176ec8 - 0x176f2c
void entry_00176ec8_0x176ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176ec8_0x176ec8");
#endif

    switch (ctx->pc) {
        case 0x176ee4u: goto label_176ee4;
        case 0x176f04u: goto label_176f04;
        default: break;
    }

    ctx->pc = 0x176ec8u;

label_176ec8:
    // 0x176ec8: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x176ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x176ecc: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176ed0: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x176ed0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x176ed4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x176ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176ed8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x176ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x176edc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176EDCu;
    SET_GPR_U32(ctx, 31, 0x176EE4u);
    ctx->pc = 0x176EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EDCu;
    // 0x176ee0: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176EDCu, 0x176EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EE4u;
label_176ee4:
    // 0x176ee4: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x176ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176ee8: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x176eec: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x176eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176ef0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176ef4: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x176ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x176ef8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176efc: 0xc05df26  jal         func_177C98
    ctx->pc = 0x176EFCu;
    SET_GPR_U32(ctx, 31, 0x176F04u);
    ctx->pc = 0x176F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EFCu;
    // 0x176f00: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x176EFCu, 0x176F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F04u;
label_176f04:
    // 0x176f04: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x176f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f08: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x176f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x176f0c: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x176f0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x176f10: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x176f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x176f14: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x176f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x176f18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176F18u;
    {
        const bool branch_taken_0x176f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F18u;
        // 0x176f1c: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f18) {
            ctx->pc = 0x176F3Cu;
            return;
        }
    }
    ctx->pc = 0x176F20u;
    // 0x176f20: 0x1060ffe9  beqz        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x176F20u;
    {
        const bool branch_taken_0x176f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F20u;
        // 0x176f24: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f20) {
            ctx->pc = 0x176EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176ec8;
        }
    }
    ctx->pc = 0x176F28u;
    // 0x176f28: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x176f2cu;
}
