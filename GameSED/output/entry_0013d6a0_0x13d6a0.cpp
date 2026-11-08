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

// Function: entry_0013d6a0
// Address: 0x13d6a0 - 0x13d6c8
void entry_0013d6a0_0x13d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d6a0_0x13d6a0");
#endif

    switch (ctx->pc) {
        case 0x13d6b8u: goto label_13d6b8;
        default: break;
    }

    ctx->pc = 0x13d6a0u;

    // 0x13d6a0: 0x101240  sll         $v0, $s0, 9
    ctx->pc = 0x13d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x13d6a4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x13d6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x13d6a8: 0x26101200  addiu       $s0, $s0, 0x1200
    ctx->pc = 0x13d6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x13d6ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13d6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d6b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13D6B0u;
    SET_GPR_U32(ctx, 31, 0x13D6B8u);
    ctx->pc = 0x13D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D6B0u;
    // 0x13d6b4: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13D6B0u, 0x13D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6B8u;
label_13d6b8:
    // 0x13d6b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13d6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6c0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13d6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13d6c4: 0x0  nop
    ctx->pc = 0x13d6c4u;
    // NOP
    ctx->pc = 0x13d6c8u;
}
