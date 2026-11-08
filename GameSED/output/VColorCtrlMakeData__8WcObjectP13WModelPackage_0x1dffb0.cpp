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

// Function: VColorCtrlMakeData__8WcObjectP13WModelPackage
// Address: 0x1dffb0 - 0x1e00b8
void VColorCtrlMakeData__8WcObjectP13WModelPackage_0x1dffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VColorCtrlMakeData__8WcObjectP13WModelPackage_0x1dffb0");
#endif

    switch (ctx->pc) {
        case 0x1e0004u: goto label_1e0004;
        case 0x1e0024u: goto label_1e0024;
        case 0x1e0068u: goto label_1e0068;
        case 0x1e0088u: goto label_1e0088;
        default: break;
    }

    ctx->pc = 0x1dffb0u;

    // 0x1dffb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dffb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dffb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dffb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dffc0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1dffc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dffc8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1dffc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dffd0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1dffd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffd4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dffd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dffdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dffe0: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x1dffe4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DFFE4u;
    {
        const bool branch_taken_0x1dffe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFE4u;
        // 0x1dffe8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffe4) {
            ctx->pc = 0x1E0044u;
            goto label_1e0044;
        }
    }
    ctx->pc = 0x1DFFECu;
    // 0x1dffec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfff0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFFF0u;
    {
        const bool branch_taken_0x1dfff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFF0u;
        // 0x1dfff4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfff0) {
            ctx->pc = 0x1DFFFCu;
            goto label_1dfffc;
        }
    }
    ctx->pc = 0x1DFFF8u;
    // 0x1dfff8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1dfff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfffc:
    // 0x1dfffc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DFFFCu;
    SET_GPR_U32(ctx, 31, 0x1E0004u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DFFFCu, 0x1E0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0004u;
label_1e0004:
    // 0x1e0004: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e0004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e0008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e000c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0010: 0x24a582d0  addiu       $a1, $a1, -0x7D30
    ctx->pc = 0x1e0010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935248));
    // 0x1e0014: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0014u;
    {
        const bool branch_taken_0x1e0014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0014u;
        // 0x1e0018: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0014) {
            ctx->pc = 0x1E0024u;
            goto label_1e0024;
        }
    }
    ctx->pc = 0x1E001Cu;
    // 0x1e001c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E001Cu;
    SET_GPR_U32(ctx, 31, 0x1E0024u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E001Cu, 0x1E0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0024u;
label_1e0024:
    // 0x1e0024: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e0024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0028: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e0028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e002c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e002cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e0030: 0xae7001ac  sw          $s0, 0x1AC($s3)
    ctx->pc = 0x1e0030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 16));
    // 0x1e0034: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1e0034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1e0038: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1e0038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1e003c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1e003cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1e0040: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e0040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1e0044:
    // 0x1e0044: 0x8e6301ac  lw          $v1, 0x1AC($s3)
    ctx->pc = 0x1e0044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x1e0048: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e0048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e004c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E004Cu;
    {
        const bool branch_taken_0x1e004c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E004Cu;
        // 0x1e0050: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e004c) {
            ctx->pc = 0x1E0094u;
            goto label_1e0094;
        }
    }
    ctx->pc = 0x1E0054u;
    // 0x1e0054: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e0054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0058: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1e0058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e005c: 0x8ca60194  lw          $a2, 0x194($a1)
    ctx->pc = 0x1e005cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x1e0060: 0xc064fa6  jal         func_193E98
    ctx->pc = 0x1E0060u;
    SET_GPR_U32(ctx, 31, 0x1E0068u);
    ctx->pc = 0x1E0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0060u;
    // 0x1e0064: 0x24102000  addiu       $s0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193E98u, 0x1E0060u, 0x1E0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0068u;
label_1e0068:
    // 0x1e0068: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1e0068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1e006c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e0070: 0x2484de68  addiu       $a0, $a0, -0x2198
    ctx->pc = 0x1e0070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958696));
    // 0x1e0074: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1e0074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1e0078: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0078u;
    {
        const bool branch_taken_0x1e0078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0078u;
        // 0x1e007c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0078) {
            ctx->pc = 0x1E0094u;
            goto label_1e0094;
        }
    }
    ctx->pc = 0x1E0080u;
    // 0x1e0080: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1E0080u;
    SET_GPR_U32(ctx, 31, 0x1E0088u);
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1E0080u, 0x1E0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0088u;
label_1e0088:
    // 0x1e0088: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e008c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1e008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1e0090: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e0090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1e0094:
    // 0x1e0094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e009c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e009cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e00a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e00a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e00a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e00a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e00a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e00a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e00ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e00acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e00b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E00B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00B0u;
        // 0x1e00b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E00B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E00B8u;
}
