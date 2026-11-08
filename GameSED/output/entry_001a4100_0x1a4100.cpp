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

// Function: entry_001a4100
// Address: 0x1a4100 - 0x1a4150
void entry_001a4100_0x1a4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4100_0x1a4100");
#endif

    switch (ctx->pc) {
        case 0x1a4108u: goto label_1a4108;
        case 0x1a411cu: goto label_1a411c;
        default: break;
    }

    ctx->pc = 0x1a4100u;

    // 0x1a4100: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4100u;
    SET_GPR_U32(ctx, 31, 0x1A4108u);
    ctx->pc = 0x1A4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4100u;
    // 0x1a4104: 0x8f849190  lw          $a0, -0x6E70($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4100u, 0x1A4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4108u;
label_1a4108:
    // 0x1a4108: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a4108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x1a410c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a410cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1a4110: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a4110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1a4114: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A4114u;
    SET_GPR_U32(ctx, 31, 0x1A411Cu);
    ctx->pc = 0x1A4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4114u;
    // 0x1a4118: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A4114u, 0x1A411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A411Cu;
label_1a411c:
    // 0x1a411c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a411cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a4120: 0x8f90917c  lw          $s0, -0x6E84($gp)
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939004)));
    // 0x1a4124: 0x24a592e0  addiu       $a1, $a1, -0x6D20
    ctx->pc = 0x1a4124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939360));
    // 0x1a4128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a412c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A412Cu;
    {
        const bool branch_taken_0x1a412c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A412Cu;
        // 0x1a4130: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a412c) {
            ctx->pc = 0x1A4150u;
            return;
        }
    }
    ctx->pc = 0x1A4134u;
    // 0x1a4134: 0x8f829184  lw          $v0, -0x6E7C($gp)
    ctx->pc = 0x1a4134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939012)));
    // 0x1a4138: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1a4138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a413c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4140: 0xaf83917c  sw          $v1, -0x6E84($gp)
    ctx->pc = 0x1a4140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 3));
    // 0x1a4144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4144u;
    {
        const bool branch_taken_0x1a4144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4144u;
        // 0x1a4148: 0xaf829184  sw          $v0, -0x6E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4144) {
            ctx->pc = 0x1A4158u;
            return;
        }
    }
    ctx->pc = 0x1A414Cu;
    // 0x1a414c: 0x0  nop
    ctx->pc = 0x1a414cu;
    // NOP
    ctx->pc = 0x1a4150u;
}
