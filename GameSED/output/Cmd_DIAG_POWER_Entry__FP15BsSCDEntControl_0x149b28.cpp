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

// Function: Cmd_DIAG_POWER_Entry__FP15BsSCDEntControl
// Address: 0x149b28 - 0x149d24
void Cmd_DIAG_POWER_Entry__FP15BsSCDEntControl_0x149b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIAG_POWER_Entry__FP15BsSCDEntControl_0x149b28");
#endif

    switch (ctx->pc) {
        case 0x149b64u: goto label_149b64;
        case 0x149ba0u: goto label_149ba0;
        case 0x149c04u: goto label_149c04;
        case 0x149c18u: goto label_149c18;
        case 0x149c34u: goto label_149c34;
        case 0x149ca8u: goto label_149ca8;
        case 0x149cc8u: goto label_149cc8;
        default: break;
    }

    ctx->pc = 0x149b28u;

    // 0x149b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149b2c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x149b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x149b30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x149b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x149b34: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x149b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x149b38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x149b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x149b3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x149b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x149b44: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x149b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x149b48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149b48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x149b4c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149B4Cu;
    {
        const bool branch_taken_0x149b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B4Cu;
        // 0x149b50: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b4c) {
            ctx->pc = 0x149B68u;
            goto label_149b68;
        }
    }
    ctx->pc = 0x149B54u;
    // 0x149b54: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x149b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x149b58: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x149b5c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x149B5Cu;
    SET_GPR_U32(ctx, 31, 0x149B64u);
    ctx->pc = 0x149B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B5Cu;
    // 0x149b60: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x149B5Cu, 0x149B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B64u;
label_149b64:
    // 0x149b64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_149b68:
    // 0x149b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b6c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x149b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149b70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149b74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149b78: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x149b7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149b80: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x149b84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x149b88: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149b8c: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149b90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149b94: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x149b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b98: 0xc05250a  jal         func_149428
    ctx->pc = 0x149B98u;
    SET_GPR_U32(ctx, 31, 0x149BA0u);
    ctx->pc = 0x149B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B98u;
    // 0x149b9c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149B98u, 0x149BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BA0u;
label_149ba0:
    // 0x149ba0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x149ba4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149BA4u;
    {
        const bool branch_taken_0x149ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BA4u;
        // 0x149ba8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ba4) {
            ctx->pc = 0x149BC8u;
            goto label_149bc8;
        }
    }
    ctx->pc = 0x149BACu;
    // 0x149bac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x149bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x149bb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149BB0u;
    {
        const bool branch_taken_0x149bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BB0u;
        // 0x149bb4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bb0) {
            ctx->pc = 0x149BCCu;
            goto label_149bcc;
        }
    }
    ctx->pc = 0x149BB8u;
    // 0x149bb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149bbc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x149bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149bc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149bc4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x149bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_149bc8:
    // 0x149bc8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_149bcc:
    // 0x149bcc: 0x8c68b830  lw          $t0, -0x47D0($v1)
    ctx->pc = 0x149bccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
    // 0x149bd0: 0x24426b80  addiu       $v0, $v0, 0x6B80
    ctx->pc = 0x149bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27520));
    // 0x149bd4: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x149bd4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x149bd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bdc: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x149bdcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149be0: 0x25060020  addiu       $a2, $t0, 0x20
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x149be4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x149be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149be8: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x149be8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
    // 0x149bec: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x149becu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149bf0: 0xdd070008  ld          $a3, 0x8($t0)
    ctx->pc = 0x149bf0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x149bf4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x149bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x149bf8: 0xfe070048  sd          $a3, 0x48($s0)
    ctx->pc = 0x149bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 7));
    // 0x149bfc: 0xc067586  jal         func_19D618
    ctx->pc = 0x149BFCu;
    SET_GPR_U32(ctx, 31, 0x149C04u);
    ctx->pc = 0x149C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BFCu;
    // 0x149c00: 0xffa90008  sd          $t1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x149BFCu, 0x149C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C04u;
label_149c04:
    // 0x149c04: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x149c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x149c08: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x149c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c0c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x149c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x149c10: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x149C10u;
    SET_GPR_U32(ctx, 31, 0x149C18u);
    ctx->pc = 0x149C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C10u;
    // 0x149c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x149C10u, 0x149C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C18u;
label_149c18:
    // 0x149c18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x149c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x149c1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149c20: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x149c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x149c24: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149C24u;
    {
        const bool branch_taken_0x149c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149c24) {
            ctx->pc = 0x149C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149C24u;
            // 0x149c28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149C38u;
            goto label_149c38;
        }
    }
    ctx->pc = 0x149C2Cu;
    // 0x149c2c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x149C2Cu;
    SET_GPR_U32(ctx, 31, 0x149C34u);
    ctx->pc = 0x149C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C2Cu;
    // 0x149c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x149C2Cu, 0x149C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C34u;
label_149c34:
    // 0x149c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_149c38:
    // 0x149c38: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149C38u;
    {
        const bool branch_taken_0x149c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C38u;
        // 0x149c3c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c38) {
            ctx->pc = 0x149C58u;
            goto label_149c58;
        }
    }
    ctx->pc = 0x149C40u;
    // 0x149c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149c44: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149C44u;
    {
        const bool branch_taken_0x149c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x149C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C44u;
        // 0x149c48: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c44) {
            ctx->pc = 0x149C68u;
            goto label_149c68;
        }
    }
    ctx->pc = 0x149C4Cu;
    // 0x149c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149C4Cu;
    {
        const bool branch_taken_0x149c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C4Cu;
        // 0x149c50: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c4c) {
            ctx->pc = 0x149C6Cu;
            goto label_149c6c;
        }
    }
    ctx->pc = 0x149C54u;
    // 0x149c54: 0x0  nop
    ctx->pc = 0x149c54u;
    // NOP
label_149c58:
    // 0x149c58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149C5Cu;
    {
        const bool branch_taken_0x149c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C5Cu;
        // 0x149c60: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c5c) {
            ctx->pc = 0x149C6Cu;
            goto label_149c6c;
        }
    }
    ctx->pc = 0x149C64u;
    // 0x149c64: 0x0  nop
    ctx->pc = 0x149c64u;
    // NOP
label_149c68:
    // 0x149c68: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x149c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_149c6c:
    // 0x149c6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149c70: 0x246b0010  addiu       $t3, $v1, 0x10
    ctx->pc = 0x149c70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x149c74: 0x246a0020  addiu       $t2, $v1, 0x20
    ctx->pc = 0x149c74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x149c78: 0x8d660008  lw          $a2, 0x8($t3)
    ctx->pc = 0x149c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x149c7c: 0x8d440008  lw          $a0, 0x8($t2)
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x149c80: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x149c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x149c84: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149C84u;
    {
        const bool branch_taken_0x149c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C84u;
        // 0x149c88: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c84) {
            ctx->pc = 0x149D10u;
            goto label_149d10;
        }
    }
    ctx->pc = 0x149C8Cu;
    // 0x149c8c: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x149c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x149c90: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x149c94: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x149c94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c98: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x149c98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x149c9c: 0x25297820  addiu       $t1, $t1, 0x7820
    ctx->pc = 0x149c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
    // 0x149ca0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x149ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x149ca4: 0x0  nop
    ctx->pc = 0x149ca4u;
    // NOP
label_149ca8:
    // 0x149ca8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x149ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x149cac: 0x1a4102a  slt         $v0, $t5, $a0
    ctx->pc = 0x149cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x149cb0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x149CB0u;
    {
        const bool branch_taken_0x149cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149cb0) {
            ctx->pc = 0x149CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CB0u;
            // 0x149cb4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149D04u;
            goto label_149d04;
        }
    }
    ctx->pc = 0x149CB8u;
    // 0x149cb8: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x149cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x149cbc: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x149cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x149cc0: 0x2c470080  sltiu       $a3, $v0, 0x80
    ctx->pc = 0x149cc0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x149cc4: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x149cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_149cc8:
    // 0x149cc8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x149CC8u;
    {
        const bool branch_taken_0x149cc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CC8u;
        // 0x149ccc: 0x2882ffc0  slti        $v0, $a0, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cc8) {
            ctx->pc = 0x149CF0u;
            goto label_149cf0;
        }
    }
    ctx->pc = 0x149CD0u;
    // 0x149cd0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x149CD0u;
    {
        const bool branch_taken_0x149cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149cd0) {
            ctx->pc = 0x149CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CD0u;
            // 0x149cd4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149CF4u;
            goto label_149cf4;
        }
    }
    ctx->pc = 0x149CD8u;
    // 0x149cd8: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x149cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x149cdc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149CDCu;
    {
        const bool branch_taken_0x149cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149cdc) {
            ctx->pc = 0x149CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CDCu;
            // 0x149ce0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149CF4u;
            goto label_149cf4;
        }
    }
    ctx->pc = 0x149CE4u;
    // 0x149ce4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x149ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149ce8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x149ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x149cec: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x149cecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_149cf0:
    // 0x149cf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x149cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_149cf4:
    // 0x149cf4: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x149cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x149cf8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x149CF8u;
    {
        const bool branch_taken_0x149cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CF8u;
        // 0x149cfc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cf8) {
            ctx->pc = 0x149CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149cc8;
        }
    }
    ctx->pc = 0x149D00u;
    // 0x149d00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x149d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_149d04:
    // 0x149d04: 0x186102a  slt         $v0, $t4, $a2
    ctx->pc = 0x149d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x149d08: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x149D08u;
    {
        const bool branch_taken_0x149d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D08u;
        // 0x149d0c: 0x25290080  addiu       $t1, $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d08) {
            ctx->pc = 0x149CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149ca8;
        }
    }
    ctx->pc = 0x149D10u;
label_149d10:
    // 0x149d10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x149d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d14: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x149d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x149d18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x149D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D1Cu;
        // 0x149d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149D24u;
}
