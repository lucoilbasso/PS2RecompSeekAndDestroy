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

// Function: entry_001b4eb0
// Address: 0x1b4eb0 - 0x1b4f48
void entry_001b4eb0_0x1b4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4eb0_0x1b4eb0");
#endif

    switch (ctx->pc) {
        case 0x1b4ee8u: goto label_1b4ee8;
        case 0x1b4f14u: goto label_1b4f14;
        default: break;
    }

    ctx->pc = 0x1b4eb0u;

    // 0x1b4eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4eb4: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b4eb8: 0xfe320010  sd          $s2, 0x10($s1)
    ctx->pc = 0x1b4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 18));
    // 0x1b4ebc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b4ec0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1b4ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1b4ec4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b4ec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b4ec8: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x1b4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x1b4ecc: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1b4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1b4ed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4ed4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4ed8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1b4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1b4edc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4ee0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4EE0u;
    SET_GPR_U32(ctx, 31, 0x1B4EE8u);
    ctx->pc = 0x1B4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EE0u;
    // 0x1b4ee4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4EE0u, 0x1B4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EE8u;
label_1b4ee8:
    // 0x1b4ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b4ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4eec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4ef0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4ef4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b4ef8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b4efc: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1b4efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1b4f00: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B4F00u;
    {
        const bool branch_taken_0x1b4f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F00u;
        // 0x1b4f04: 0xaeb29a80  sw          $s2, -0x6580($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294941312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f00) {
            ctx->pc = 0x1B4F94u;
            return;
        }
    }
    ctx->pc = 0x1B4F08u;
    // 0x1b4f08: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x1b4f08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x1b4f0c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F14u);
    ctx->pc = 0x1B4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F0Cu;
    // 0x1b4f10: 0x8e84aa14  lw          $a0, -0x55EC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4F0Cu, 0x1B4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F14u;
label_1b4f14:
    // 0x1b4f14: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1b4f14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1b4f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f1c: 0x8ce3a980  lw          $v1, -0x5680($a3)
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24A980u));
    // 0x1b4f20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4f24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4F24u;
    {
        const bool branch_taken_0x1b4f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F24u;
        // 0x1b4f28: 0x3c160041  lui         $s6, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f24) {
            ctx->pc = 0x1B4F48u;
            return;
        }
    }
    ctx->pc = 0x1B4F2Cu;
    // 0x1b4f2c: 0x8ea39a80  lw          $v1, -0x6580($s5)
    ctx->pc = 0x1b4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
    // 0x1b4f30: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b4f30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f34: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1b4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b4f38: 0xace3a980  sw          $v1, -0x5680($a3)
    ctx->pc = 0x1b4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945152), GPR_U32(ctx, 3));
    // 0x1b4f3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4F3Cu;
    {
        const bool branch_taken_0x1b4f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F3Cu;
        // 0x1b4f40: 0xaea29a80  sw          $v0, -0x6580($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294941312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f3c) {
            ctx->pc = 0x1B4F84u;
            return;
        }
    }
    ctx->pc = 0x1B4F44u;
    // 0x1b4f44: 0x0  nop
    ctx->pc = 0x1b4f44u;
    // NOP
    ctx->pc = 0x1b4f48u;
}
