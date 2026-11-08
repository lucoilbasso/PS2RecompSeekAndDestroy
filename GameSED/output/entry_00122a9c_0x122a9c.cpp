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

// Function: entry_00122a9c
// Address: 0x122a9c - 0x122ae0
void entry_00122a9c_0x122a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a9c_0x122a9c");
#endif

    switch (ctx->pc) {
        case 0x122ad0u: goto label_122ad0;
        case 0x122adcu: goto label_122adc;
        default: break;
    }

    ctx->pc = 0x122a9cu;

    // 0x122a9c: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x122a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x122aa0: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x122aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x122aa4: 0x8f848c6c  lw          $a0, -0x7394($gp)
    ctx->pc = 0x122aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x122aa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122aac: 0xac750030  sw          $s5, 0x30($v1)
    ctx->pc = 0x122aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 21));
    // 0x122ab0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x122ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x122ab4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x122ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x122ab8: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x122ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x122abc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x122abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x122ac0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x122ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x122ac4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x122ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x122ac8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122AC8u;
    SET_GPR_U32(ctx, 31, 0x122AD0u);
    ctx->pc = 0x122ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AC8u;
    // 0x122acc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122AC8u, 0x122AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AD0u;
label_122ad0:
    // 0x122ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x122ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ad4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x122AD4u;
    SET_GPR_U32(ctx, 31, 0x122ADCu);
    ctx->pc = 0x122AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AD4u;
    // 0x122ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x122AD4u, 0x122ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122ADCu;
label_122adc:
    // 0x122adc: 0x8e5500d0  lw          $s5, 0xD0($s2)
    ctx->pc = 0x122adcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    ctx->pc = 0x122ae0u;
}
