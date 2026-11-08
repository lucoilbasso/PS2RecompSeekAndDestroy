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

// Function: entry_001c0a28
// Address: 0x1c0a28 - 0x1c0ae4
void entry_001c0a28_0x1c0a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0a28_0x1c0a28");
#endif

    switch (ctx->pc) {
        case 0x1c0a50u: goto label_1c0a50;
        case 0x1c0a68u: goto label_1c0a68;
        case 0x1c0a88u: goto label_1c0a88;
        case 0x1c0a90u: goto label_1c0a90;
        case 0x1c0ae0u: goto label_1c0ae0;
        default: break;
    }

    ctx->pc = 0x1c0a28u;

    // 0x1c0a28: 0xae62083c  sw          $v0, 0x83C($s3)
    ctx->pc = 0x1c0a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2108), GPR_U32(ctx, 2));
    // 0x1c0a2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a30: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c0a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c0a34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c0a38: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1c0a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1c0a3c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C0A3Cu;
    {
        const bool branch_taken_0x1c0a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A3Cu;
        // 0x1c0a40: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a3c) {
            ctx->pc = 0x1C0AF0u;
            return;
        }
    }
    ctx->pc = 0x1C0A44u;
    // 0x1c0a44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a48: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C0A48u;
    SET_GPR_U32(ctx, 31, 0x1C0A50u);
    ctx->pc = 0x1C0A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A48u;
    // 0x1c0a4c: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C0A48u, 0x1C0A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A50u;
label_1c0a50:
    // 0x1c0a50: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1c0a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c0a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0a58: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x1c0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x1c0a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a60: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C0A60u;
    SET_GPR_U32(ctx, 31, 0x1C0A68u);
    ctx->pc = 0x1C0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A60u;
    // 0x1c0a64: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C0A60u, 0x1C0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A68u;
label_1c0a68:
    // 0x1c0a68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0a6c: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x1c0a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x1c0a70: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1c0a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a74: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x1c0a74u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x1c0a78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0a7c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1c0a80: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C0A80u;
    SET_GPR_U32(ctx, 31, 0x1C0A88u);
    ctx->pc = 0x1C0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A80u;
    // 0x1c0a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C0A80u, 0x1C0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A88u;
label_1c0a88:
    // 0x1c0a88: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C0A88u;
    SET_GPR_U32(ctx, 31, 0x1C0A90u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C0A88u, 0x1C0A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A90u;
label_1c0a90:
    // 0x1c0a90: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a94: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a98: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x1c0a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x1c0a9c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1c0a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1c0aa0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c0aa4: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x1c0aa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x1c0aa8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0aac: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x1c0aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x1c0ab0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1c0ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1c0ab4: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1c0ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1c0ab8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1c0ab8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x1c0abc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c0abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c0ac0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c0ac0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x1c0ac4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c0ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c0ac8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c0ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c0acc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1c0accu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1c0ad0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0AD0u;
    {
        const bool branch_taken_0x1c0ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AD0u;
        // 0x1c0ad4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ad0) {
            ctx->pc = 0x1C0AE4u;
            return;
        }
    }
    ctx->pc = 0x1C0AD8u;
    // 0x1c0ad8: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C0AD8u;
    SET_GPR_U32(ctx, 31, 0x1C0AE0u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C0AD8u, 0x1C0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AE0u;
label_1c0ae0:
    // 0x1c0ae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1c0ae4u;
}
