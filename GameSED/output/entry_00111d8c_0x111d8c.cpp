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

// Function: entry_00111d8c
// Address: 0x111d8c - 0x111dd0
void entry_00111d8c_0x111d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d8c_0x111d8c");
#endif

    switch (ctx->pc) {
        case 0x111d98u: goto label_111d98;
        default: break;
    }

    ctx->pc = 0x111d8cu;

label_111d8c:
    // 0x111d8c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x111d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_111d90:
    // 0x111d90: 0xc06a26e  jal         func_1A89B8
label_111d94:
    if (ctx->pc == 0x111D94u) {
        ctx->pc = 0x111D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D90u;
        // 0x111d94: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D98u;
        goto label_111d98;
    }
    ctx->pc = 0x111D90u;
    SET_GPR_U32(ctx, 31, 0x111D98u);
    ctx->pc = 0x111D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D90u;
    // 0x111d94: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111D90u, 0x111D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D98u;
label_111d98:
    // 0x111d98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111d9c:
    // 0x111d9c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_111da0:
    // 0x111da0: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_111da4:
    // 0x111da4: 0x2e23001a  sltiu       $v1, $s1, 0x1A
    ctx->pc = 0x111da4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_111da8:
    // 0x111da8: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_111dac:
    // 0x111dac: 0x26550020  addiu       $s5, $s2, 0x20
    ctx->pc = 0x111dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_111db0:
    // 0x111db0: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
label_111db4:
    if (ctx->pc == 0x111DB4u) {
        ctx->pc = 0x111DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DB0u;
        // 0x111db4: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DB8u;
        goto label_111db8;
    }
    ctx->pc = 0x111DB0u;
    {
        const bool branch_taken_0x111db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DB0u;
        // 0x111db4: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111db0) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111DB8u;
label_111db8:
    // 0x111db8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_111dbc:
    // 0x111dbc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x111dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_111dc0:
    // 0x111dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_111dc4:
    // 0x111dc4: 0x8c634090  lw          $v1, 0x4090($v1)
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16528)));
label_111dc8:
    // 0x111dc8: 0x600008  jr          $v1
label_111dcc:
    if (ctx->pc == 0x111DCCu) {
        ctx->pc = 0x111DD0u;
        goto label_fallthrough_0x111dc8;
    }
    ctx->pc = 0x111DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x111dc8:
    ctx->pc = 0x111DD0u;
}
