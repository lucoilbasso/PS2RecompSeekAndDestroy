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

// Function: entry_00104638
// Address: 0x104638 - 0x104688
void entry_00104638_0x104638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104638_0x104638");
#endif

    switch (ctx->pc) {
        case 0x104648u: goto label_104648;
        case 0x104658u: goto label_104658;
        case 0x104668u: goto label_104668;
        case 0x104674u: goto label_104674;
        default: break;
    }

    ctx->pc = 0x104638u;

    // 0x104638: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10463c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x10463cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104640: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x104640u;
    SET_GPR_U32(ctx, 31, 0x104648u);
    ctx->pc = 0x104644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104640u;
    // 0x104644: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x104640u, 0x104648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104648u;
label_104648:
    // 0x104648: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x104648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x10464c: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x10464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x104650: 0xc040dd4  jal         func_103750
    ctx->pc = 0x104650u;
    SET_GPR_U32(ctx, 31, 0x104658u);
    ctx->pc = 0x104654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104650u;
    // 0x104654: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103750u, 0x104650u, 0x104658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104658u;
label_104658:
    // 0x104658: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x104658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x10465c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x104660: 0xc040dd4  jal         func_103750
    ctx->pc = 0x104660u;
    SET_GPR_U32(ctx, 31, 0x104668u);
    ctx->pc = 0x104664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104660u;
    // 0x104664: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103750u, 0x104660u, 0x104668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104668u;
label_104668:
    // 0x104668: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x10466c: 0xc040dd4  jal         func_103750
    ctx->pc = 0x10466Cu;
    SET_GPR_U32(ctx, 31, 0x104674u);
    ctx->pc = 0x104670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10466Cu;
    // 0x104670: 0x8e050070  lw          $a1, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103750u, 0x10466Cu, 0x104674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104674u;
label_104674:
    // 0x104674: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x104674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x104678: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x104678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10467c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x104680: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x104680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x104684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x104684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x104688u;
}
