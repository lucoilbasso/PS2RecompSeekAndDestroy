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

// Function: entry_00126e38
// Address: 0x126e38 - 0x126e90
void entry_00126e38_0x126e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126e38_0x126e38");
#endif

    switch (ctx->pc) {
        case 0x126e48u: goto label_126e48;
        case 0x126e58u: goto label_126e58;
        default: break;
    }

    ctx->pc = 0x126e38u;

    // 0x126e38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x126e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x126e3c: 0x24a5d650  addiu       $a1, $a1, -0x29B0
    ctx->pc = 0x126e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
    // 0x126e40: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126E40u;
    SET_GPR_U32(ctx, 31, 0x126E48u);
    ctx->pc = 0x126E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E40u;
    // 0x126e44: 0x8ca40084  lw          $a0, 0x84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126E40u, 0x126E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E48u;
label_126e48:
    // 0x126e48: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x126e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x126e4c: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x126e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x126e50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126E50u;
    SET_GPR_U32(ctx, 31, 0x126E58u);
    ctx->pc = 0x126E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E50u;
    // 0x126e54: 0x8cc40088  lw          $a0, 0x88($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126E50u, 0x126E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E58u;
label_126e58:
    // 0x126e58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x126e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x126e5c: 0x2442d650  addiu       $v0, $v0, -0x29B0
    ctx->pc = 0x126e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x126e60: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x126e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x126e64: 0x8c50008c  lw          $s0, 0x8C($v0)
    ctx->pc = 0x126e64u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D6DCu));
    // 0x126e68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e6c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x126e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6D0u));
    // 0x126e70: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x126e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x126e74: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x126e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x126e78: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x126e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x126e7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x126e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x126e80: 0x8cc40088  lw          $a0, 0x88($a2)
    ctx->pc = 0x126e80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6D8u));
    // 0x126e84: 0xacc5008c  sw          $a1, 0x8C($a2)
    ctx->pc = 0x126e84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D6DCu, _value); } while (0);
    // 0x126e88: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x126E88u;
    SET_GPR_U32(ctx, 31, 0x126E90u);
    ctx->pc = 0x126E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E88u;
    // 0x126e8c: 0xacc20080  sw          $v0, 0x80($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x126E88u, 0x126E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E90u;
}
