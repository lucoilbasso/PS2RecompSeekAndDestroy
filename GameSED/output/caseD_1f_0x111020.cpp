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

// Function: caseD_1f
// Address: 0x111020 - 0x111054
void caseD_1f_0x111020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1f_0x111020");
#endif

    switch (ctx->pc) {
        case 0x111028u: goto label_111028;
        case 0x111050u: goto label_111050;
        default: break;
    }

    ctx->pc = 0x111020u;

    // 0x111020: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111020u;
    SET_GPR_U32(ctx, 31, 0x111028u);
    ctx->pc = 0x111024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111020u;
    // 0x111024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111020u, 0x111028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111028u;
label_111028:
    // 0x111028: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x111028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11102c: 0x30510fff  andi        $s1, $v0, 0xFFF
    ctx->pc = 0x11102cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x111030: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x111030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111034: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x111034u;
    {
        const bool branch_taken_0x111034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111034) {
            ctx->pc = 0x111038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111034u;
            // 0x111038: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111054u;
            return;
        }
    }
    ctx->pc = 0x11103Cu;
    // 0x11103c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11103cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111044: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x111044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    // 0x111048: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111048u;
    SET_GPR_U32(ctx, 31, 0x111050u);
    ctx->pc = 0x11104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111048u;
    // 0x11104c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111048u, 0x111050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111050u;
label_111050:
    // 0x111050: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x111054u;
}
