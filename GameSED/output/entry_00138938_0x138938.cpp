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

// Function: entry_00138938
// Address: 0x138938 - 0x13895c
void entry_00138938_0x138938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138938_0x138938");
#endif

    switch (ctx->pc) {
        case 0x138948u: goto label_138948;
        default: break;
    }

    ctx->pc = 0x138938u;

    // 0x138938: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x138938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13893c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x138940: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x138940u;
    SET_GPR_U32(ctx, 31, 0x138948u);
    ctx->pc = 0x138944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138940u;
    // 0x138944: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x138940u, 0x138948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138948u;
label_138948:
    // 0x138948: 0x8e030400  lw          $v1, 0x400($s0)
    ctx->pc = 0x138948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    // 0x13894c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x13894cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x138950: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138954: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x138954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138958: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x138958u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x13895cu;
}
