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

// Function: Val_Count2Sec__FUiP7TimeStr
// Address: 0x19cb78 - 0x19cbc8
void Val_Count2Sec__FUiP7TimeStr_0x19cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Count2Sec__FUiP7TimeStr_0x19cb78");
#endif

    switch (ctx->pc) {
        case 0x19cb98u: goto label_19cb98;
        default: break;
    }

    ctx->pc = 0x19cb78u;

    // 0x19cb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cb7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x19cb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19cb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cb84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19cb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb88: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x19cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x19cb8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19cb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19cb90: 0xc0672f2  jal         func_19CBC8
    ctx->pc = 0x19CB90u;
    SET_GPR_U32(ctx, 31, 0x19CB98u);
    ctx->pc = 0x19CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB90u;
    // 0x19cb94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CBC8u, 0x19CB90u, 0x19CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB98u;
label_19cb98:
    // 0x19cb98: 0x92040018  lbu         $a0, 0x18($s0)
    ctx->pc = 0x19cb98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19cb9c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cba0: 0x92030017  lbu         $v1, 0x17($s0)
    ctx->pc = 0x19cba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19cba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19cba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cba8: 0xa200001a  sb          $zero, 0x1A($s0)
    ctx->pc = 0x19cba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cbac: 0xa2040019  sb          $a0, 0x19($s0)
    ctx->pc = 0x19cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 4));
    // 0x19cbb0: 0xa2030018  sb          $v1, 0x18($s0)
    ctx->pc = 0x19cbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x19cbb4: 0xa2050017  sb          $a1, 0x17($s0)
    ctx->pc = 0x19cbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 5));
    // 0x19cbb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19cbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBC0u;
        // 0x19cbc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CBC8u;
}
