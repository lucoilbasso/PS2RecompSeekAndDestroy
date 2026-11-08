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

// Function: entry_001b2b88
// Address: 0x1b2b88 - 0x1b2c24
void entry_001b2b88_0x1b2b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2b88_0x1b2b88");
#endif

    switch (ctx->pc) {
        case 0x1b2bb8u: goto label_1b2bb8;
        case 0x1b2c04u: goto label_1b2c04;
        case 0x1b2c14u: goto label_1b2c14;
        case 0x1b2c1cu: goto label_1b2c1c;
        default: break;
    }

    ctx->pc = 0x1b2b88u;

    // 0x1b2b88: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b2b8c: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b2b90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2b94: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1b2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1b2b98: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b2b9c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1b2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1b2ba0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b2ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b2ba4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1b2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1b2ba8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b2bac: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b2bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b2bb0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B2BB0u;
    SET_GPR_U32(ctx, 31, 0x1B2BB8u);
    ctx->pc = 0x1B2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BB0u;
    // 0x1b2bb4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B2BB0u, 0x1B2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BB8u;
label_1b2bb8:
    // 0x1b2bb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b2bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2bbc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2bc0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b2bc4: 0xae919a80  sw          $s1, -0x6580($s4)
    ctx->pc = 0x1b2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294941312), GPR_U32(ctx, 17));
    // 0x1b2bc8: 0x2453a6c0  addiu       $s3, $v0, -0x5940
    ctx->pc = 0x1b2bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1b2bcc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b2bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b2bd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2bd4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b2bd8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b2bdc: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1b2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1b2be0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b2be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2be4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2be8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2bf0: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1b2bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b2bf4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1b2bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2bf8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2bfc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B2BFCu;
    SET_GPR_U32(ctx, 31, 0x1B2C04u);
    ctx->pc = 0x1B2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BFCu;
    // 0x1b2c00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B2BFCu, 0x1B2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C04u;
label_1b2c04:
    // 0x1b2c04: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2C04u;
    {
        const bool branch_taken_0x1b2c04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b2c04) {
            ctx->pc = 0x1B2C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2C04u;
            // 0x1b2c08: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C24u;
            return;
        }
    }
    ctx->pc = 0x1B2C0Cu;
    // 0x1b2c0c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C14u);
    ctx->pc = 0x1B2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C0Cu;
    // 0x1b2c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2C0Cu, 0x1B2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C14u;
label_1b2c14:
    // 0x1b2c14: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2C14u;
    SET_GPR_U32(ctx, 31, 0x1B2C1Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2C14u, 0x1B2C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C1Cu;
label_1b2c1c:
    // 0x1b2c1c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2C1Cu;
    {
        const bool branch_taken_0x1b2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C1Cu;
        // 0x1b2c20: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c1c) {
            ctx->pc = 0x1B2C6Cu;
            return;
        }
    }
    ctx->pc = 0x1B2C24u;
}
