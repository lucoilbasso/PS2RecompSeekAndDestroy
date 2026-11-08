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

// Function: entry_0016f748
// Address: 0x16f748 - 0x16f7b8
void entry_0016f748_0x16f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f748_0x16f748");
#endif

    switch (ctx->pc) {
        case 0x16f758u: goto label_16f758;
        case 0x16f760u: goto label_16f760;
        case 0x16f76cu: goto label_16f76c;
        case 0x16f78cu: goto label_16f78c;
        default: break;
    }

    ctx->pc = 0x16f748u;

    // 0x16f748: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16f748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f74c: 0x2444ba10  addiu       $a0, $v0, -0x45F0
    ctx->pc = 0x16f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949392));
    // 0x16f750: 0xc06ab5a  jal         func_1AAD68
    ctx->pc = 0x16F750u;
    SET_GPR_U32(ctx, 31, 0x16F758u);
    ctx->pc = 0x16F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F750u;
    // 0x16f754: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAD68u, 0x16F750u, 0x16F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F758u;
label_16f758:
    // 0x16f758: 0xc05df12  jal         func_177C48
    ctx->pc = 0x16F758u;
    SET_GPR_U32(ctx, 31, 0x16F760u);
    ctx->pc = 0x16F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F758u;
    // 0x16f75c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C48u, 0x16F758u, 0x16F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F760u;
label_16f760:
    // 0x16f760: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16f764: 0xc05df26  jal         func_177C98
    ctx->pc = 0x16F764u;
    SET_GPR_U32(ctx, 31, 0x16F76Cu);
    ctx->pc = 0x16F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F764u;
    // 0x16f768: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x16F764u, 0x16F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F76Cu;
label_16f76c:
    // 0x16f76c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16f770: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x16f770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x16f774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f778: 0x24443600  addiu       $a0, $v0, 0x3600
    ctx->pc = 0x16f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
    // 0x16f77c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16f780: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x16f780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x16f784: 0xc067294  jal         func_19CA50
    ctx->pc = 0x16F784u;
    SET_GPR_U32(ctx, 31, 0x16F78Cu);
    ctx->pc = 0x16F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F784u;
    // 0x16f788: 0x94550040  lhu         $s5, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x16F784u, 0x16F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F78Cu;
label_16f78c:
    // 0x16f78c: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x16f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x16f790: 0x768023  subu        $s0, $v1, $s6
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x16f794: 0x1a00001b  blez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16F794u;
    {
        const bool branch_taken_0x16f794 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x16F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F794u;
        // 0x16f798: 0x2471ff00  addiu       $s1, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f794) {
            ctx->pc = 0x16F804u;
            return;
        }
    }
    ctx->pc = 0x16F79Cu;
    // 0x16f79c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x16f79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16f7a0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16F7A0u;
    {
        const bool branch_taken_0x16f7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7A0u;
        // 0x16f7a4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7a0) {
            ctx->pc = 0x16F804u;
            return;
        }
    }
    ctx->pc = 0x16F7A8u;
    // 0x16f7a8: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x16f7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x16f7ac: 0x24533a00  addiu       $s3, $v0, 0x3A00
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
    // 0x16f7b0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16f7b4: 0x0  nop
    ctx->pc = 0x16f7b4u;
    // NOP
    ctx->pc = 0x16f7b8u;
}
