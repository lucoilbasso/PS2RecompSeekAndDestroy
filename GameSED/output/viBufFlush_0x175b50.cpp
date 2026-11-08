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

// Function: viBufFlush
// Address: 0x175b50 - 0x175b9c
void viBufFlush_0x175b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufFlush_0x175b50");
#endif

    switch (ctx->pc) {
        case 0x175b68u: goto label_175b68;
        default: break;
    }

    ctx->pc = 0x175b50u;

    // 0x175b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175b60: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175B60u;
    SET_GPR_U32(ctx, 31, 0x175B68u);
    ctx->pc = 0x175B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B60u;
    // 0x175b64: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175B60u, 0x175B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B68u;
label_175b68:
    // 0x175b68: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x175b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x175b6c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x175b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x175b70: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x175b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x175b74: 0x24630ffe  addiu       $v1, $v1, 0xFFE
    ctx->pc = 0x175b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4094));
    // 0x175b78: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x175b78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x175b7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175b80: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x175b80u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x175b84: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x175b88: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x175b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x175b8c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x175b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x175b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b94: 0x806bd20  j           func_1AF480
    ctx->pc = 0x175B94u;
    ctx->pc = 0x175B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B94u;
    // 0x175b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    SignalSema_0x1af480(rdram, ctx, runtime); return;
    ctx->pc = 0x175B9Cu;
}
