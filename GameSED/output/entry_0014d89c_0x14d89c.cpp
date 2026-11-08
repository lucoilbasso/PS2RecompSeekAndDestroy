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

// Function: entry_0014d89c
// Address: 0x14d89c - 0x14d8f0
void entry_0014d89c_0x14d89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d89c_0x14d89c");
#endif

    switch (ctx->pc) {
        case 0x14d8ccu: goto label_14d8cc;
        case 0x14d8d8u: goto label_14d8d8;
        case 0x14d8e4u: goto label_14d8e4;
        default: break;
    }

    ctx->pc = 0x14d89cu;

    // 0x14d89c: 0x26250260  addiu       $a1, $s1, 0x260
    ctx->pc = 0x14d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x14d8a0: 0x2404ff1f  addiu       $a0, $zero, -0xE1
    ctx->pc = 0x14d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x14d8a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14d8a8: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x14d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x14d8ac: 0x3442f8ff  ori         $v0, $v0, 0xF8FF
    ctx->pc = 0x14d8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63743);
    // 0x14d8b0: 0xaca00104  sw          $zero, 0x104($a1)
    ctx->pc = 0x14d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
    // 0x14d8b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14d8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14d8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d8c0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x14d8c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d8c4: 0xc046540  jal         func_119500
    ctx->pc = 0x14D8C4u;
    SET_GPR_U32(ctx, 31, 0x14D8CCu);
    ctx->pc = 0x14D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8C4u;
    // 0x14d8c8: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119500u, 0x14D8C4u, 0x14D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8CCu;
label_14d8cc:
    // 0x14d8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8d0: 0xc046540  jal         func_119500
    ctx->pc = 0x14D8D0u;
    SET_GPR_U32(ctx, 31, 0x14D8D8u);
    ctx->pc = 0x14D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8D0u;
    // 0x14d8d4: 0x8c520018  lw          $s2, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119500u, 0x14D8D0u, 0x14D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8D8u;
label_14d8d8:
    // 0x14d8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8dc: 0xc046540  jal         func_119500
    ctx->pc = 0x14D8DCu;
    SET_GPR_U32(ctx, 31, 0x14D8E4u);
    ctx->pc = 0x14D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8DCu;
    // 0x14d8e0: 0x8c55001c  lw          $s5, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119500u, 0x14D8DCu, 0x14D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8E4u;
label_14d8e4:
    // 0x14d8e4: 0x8c560020  lw          $s6, 0x20($v0)
    ctx->pc = 0x14d8e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x14d8e8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x14d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x14d8ec: 0x0  nop
    ctx->pc = 0x14d8ecu;
    // NOP
    ctx->pc = 0x14d8f0u;
}
