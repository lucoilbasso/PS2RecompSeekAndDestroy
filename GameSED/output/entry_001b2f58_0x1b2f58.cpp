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

// Function: entry_001b2f58
// Address: 0x1b2f58 - 0x1b2fe8
void entry_001b2f58_0x1b2f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2f58_0x1b2f58");
#endif

    switch (ctx->pc) {
        case 0x1b2f90u: goto label_1b2f90;
        case 0x1b2fbcu: goto label_1b2fbc;
        default: break;
    }

    ctx->pc = 0x1b2f58u;

    // 0x1b2f58: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b2f5c: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b2f60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2f64: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1b2f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1b2f68: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b2f6c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1b2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1b2f70: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b2f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b2f74: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1b2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1b2f78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b2f7c: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x1b2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x1b2f80: 0xae370014  sw          $s7, 0x14($s1)
    ctx->pc = 0x1b2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
    // 0x1b2f84: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b2f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b2f88: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B2F88u;
    SET_GPR_U32(ctx, 31, 0x1B2F90u);
    ctx->pc = 0x1B2F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F88u;
    // 0x1b2f8c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B2F88u, 0x1B2F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F90u;
label_1b2f90:
    // 0x1b2f90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b2f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2f98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2f9c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b2fa0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b2fa4: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1b2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1b2fa8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B2FA8u;
    {
        const bool branch_taken_0x1b2fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FA8u;
        // 0x1b2fac: 0xae929a80  sw          $s2, -0x6580($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294941312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fa8) {
            ctx->pc = 0x1B3030u;
            return;
        }
    }
    ctx->pc = 0x1B2FB0u;
    // 0x1b2fb0: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1b2fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1b2fb4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2FB4u;
    SET_GPR_U32(ctx, 31, 0x1B2FBCu);
    ctx->pc = 0x1B2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2FB4u;
    // 0x1b2fb8: 0x8e04aa14  lw          $a0, -0x55EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2FB4u, 0x1B2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FBCu;
label_1b2fbc:
    // 0x1b2fbc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1b2fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1b2fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fc4: 0x8ce3a980  lw          $v1, -0x5680($a3)
    ctx->pc = 0x1b2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24A980u));
    // 0x1b2fc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2fcc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2FCCu;
    {
        const bool branch_taken_0x1b2fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FCCu;
        // 0x1b2fd0: 0x3c1e0041  lui         $fp, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fcc) {
            ctx->pc = 0x1B2FE8u;
            return;
        }
    }
    ctx->pc = 0x1B2FD4u;
    // 0x1b2fd4: 0x8e839a80  lw          $v1, -0x6580($s4)
    ctx->pc = 0x1b2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941312)));
    // 0x1b2fd8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1b2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b2fdc: 0xace3a980  sw          $v1, -0x5680($a3)
    ctx->pc = 0x1b2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945152), GPR_U32(ctx, 3));
    // 0x1b2fe0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B2FE0u;
    {
        const bool branch_taken_0x1b2fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FE0u;
        // 0x1b2fe4: 0xae829a80  sw          $v0, -0x6580($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294941312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fe0) {
            ctx->pc = 0x1B3020u;
            return;
        }
    }
    ctx->pc = 0x1B2FE8u;
}
