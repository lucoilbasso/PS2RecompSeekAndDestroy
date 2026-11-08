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

// Function: entry_001b2d18
// Address: 0x1b2d18 - 0x1b2db0
void entry_001b2d18_0x1b2d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2d18_0x1b2d18");
#endif

    switch (ctx->pc) {
        case 0x1b2d50u: goto label_1b2d50;
        case 0x1b2d7cu: goto label_1b2d7c;
        default: break;
    }

    ctx->pc = 0x1b2d18u;

    // 0x1b2d18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2d1c: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b2d20: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1b2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1b2d24: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b2d28: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1b2d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1b2d2c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b2d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b2d30: 0xae340014  sw          $s4, 0x14($s1)
    ctx->pc = 0x1b2d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
    // 0x1b2d34: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1b2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1b2d38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2d3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b2d40: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1b2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1b2d44: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b2d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b2d48: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B2D48u;
    SET_GPR_U32(ctx, 31, 0x1B2D50u);
    ctx->pc = 0x1B2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D48u;
    // 0x1b2d4c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B2D48u, 0x1B2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D50u;
label_1b2d50:
    // 0x1b2d50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b2d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2d58: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2d5c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b2d60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b2d64: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1b2d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1b2d68: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B2D68u;
    {
        const bool branch_taken_0x1b2d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D68u;
        // 0x1b2d6c: 0xaeb29a80  sw          $s2, -0x6580($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294941312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d68) {
            ctx->pc = 0x1B2DFCu;
            return;
        }
    }
    ctx->pc = 0x1B2D70u;
    // 0x1b2d70: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x1b2d70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x1b2d74: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2D74u;
    SET_GPR_U32(ctx, 31, 0x1B2D7Cu);
    ctx->pc = 0x1B2D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D74u;
    // 0x1b2d78: 0x8e84aa14  lw          $a0, -0x55EC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2D74u, 0x1B2D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D7Cu;
label_1b2d7c:
    // 0x1b2d7c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1b2d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1b2d80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d84: 0x8ce3a980  lw          $v1, -0x5680($a3)
    ctx->pc = 0x1b2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24A980u));
    // 0x1b2d88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2d8c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2D8Cu;
    {
        const bool branch_taken_0x1b2d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D8Cu;
        // 0x1b2d90: 0x3c160041  lui         $s6, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d8c) {
            ctx->pc = 0x1B2DB0u;
            return;
        }
    }
    ctx->pc = 0x1B2D94u;
    // 0x1b2d94: 0x8ea39a80  lw          $v1, -0x6580($s5)
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
    // 0x1b2d98: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b2d98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b2d9c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1b2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b2da0: 0xace3a980  sw          $v1, -0x5680($a3)
    ctx->pc = 0x1b2da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945152), GPR_U32(ctx, 3));
    // 0x1b2da4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2DA4u;
    {
        const bool branch_taken_0x1b2da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DA4u;
        // 0x1b2da8: 0xaea29a80  sw          $v0, -0x6580($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294941312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2da4) {
            ctx->pc = 0x1B2DECu;
            return;
        }
    }
    ctx->pc = 0x1B2DACu;
    // 0x1b2dac: 0x0  nop
    ctx->pc = 0x1b2dacu;
    // NOP
    ctx->pc = 0x1b2db0u;
}
