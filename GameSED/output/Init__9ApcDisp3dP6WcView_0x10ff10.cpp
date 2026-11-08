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

// Function: Init__9ApcDisp3dP6WcView
// Address: 0x10ff10 - 0x10ffbc
void Init__9ApcDisp3dP6WcView_0x10ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcDisp3dP6WcView_0x10ff10");
#endif

    switch (ctx->pc) {
        case 0x10ff2cu: goto label_10ff2c;
        case 0x10ff6cu: goto label_10ff6c;
        case 0x10ffa0u: goto label_10ffa0;
        case 0x10ffa8u: goto label_10ffa8;
        default: break;
    }

    ctx->pc = 0x10ff10u;

    // 0x10ff10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ff14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ff18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ff18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ff20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ff24: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x10FF24u;
    SET_GPR_U32(ctx, 31, 0x10FF2Cu);
    ctx->pc = 0x10FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF24u;
    // 0x10ff28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x10FF24u, 0x10FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF2Cu;
label_10ff2c:
    // 0x10ff2c: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x10ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x10ff30: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x10ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x10ff34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10ff38: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10ff3c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10ff3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10ff40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ff40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ff44: 0x8c62d630  lw          $v0, -0x29D0($v1)
    ctx->pc = 0x10ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x10ff48: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x10ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x10ff4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ff4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ff50: 0xe60101d4  swc1        $f1, 0x1D4($s0)
    ctx->pc = 0x10ff50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
    // 0x10ff54: 0xe60001d8  swc1        $f0, 0x1D8($s0)
    ctx->pc = 0x10ff54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
    // 0x10ff58: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x10ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x10ff5c: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10FF5Cu;
    {
        const bool branch_taken_0x10ff5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ff5c) {
            ctx->pc = 0x10FF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FF5Cu;
            // 0x10ff60: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FF84u;
            goto label_10ff84;
        }
    }
    ctx->pc = 0x10FF64u;
    // 0x10ff64: 0xc061cb0  jal         func_1872C0
    ctx->pc = 0x10FF64u;
    SET_GPR_U32(ctx, 31, 0x10FF6Cu);
    ctx->pc = 0x1872C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1872C0u, 0x10FF64u, 0x10FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF6Cu;
label_10ff6c:
    // 0x10ff6c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x10ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x10ff70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ff70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff74: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x10ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x10ff78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10ff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10ff7c: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x10ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x10ff80: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10ff84:
    // 0x10ff84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ff88: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x10ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x10ff8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff90: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x10ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x10ff94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10ff98: 0xc06215a  jal         func_188568
    ctx->pc = 0x10FF98u;
    SET_GPR_U32(ctx, 31, 0x10FFA0u);
    ctx->pc = 0x10FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF98u;
    // 0x10ff9c: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188568u, 0x10FF98u, 0x10FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA0u;
label_10ffa0:
    // 0x10ffa0: 0xc044206  jal         func_110818
    ctx->pc = 0x10FFA0u;
    SET_GPR_U32(ctx, 31, 0x10FFA8u);
    ctx->pc = 0x110818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110818u, 0x10FFA0u, 0x10FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA8u;
label_10ffa8:
    // 0x10ffa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ffa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ffac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ffacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ffb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ffb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ffb4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB4u;
        // 0x10ffb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFBCu;
}
