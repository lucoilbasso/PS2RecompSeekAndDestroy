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

// Function: Cmd_BULLET_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x162bc0 - 0x162d1c
void Cmd_BULLET_SETUP_Entry__FP15BsSCDEntControl_0x162bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_BULLET_SETUP_Entry__FP15BsSCDEntControl_0x162bc0");
#endif

    switch (ctx->pc) {
        case 0x162becu: goto label_162bec;
        case 0x162c00u: goto label_162c00;
        case 0x162c1cu: goto label_162c1c;
        case 0x162c34u: goto label_162c34;
        case 0x162c3cu: goto label_162c3c;
        case 0x162c98u: goto label_162c98;
        case 0x162ca0u: goto label_162ca0;
        case 0x162cb8u: goto label_162cb8;
        case 0x162cc8u: goto label_162cc8;
        case 0x162cd8u: goto label_162cd8;
        case 0x162cfcu: goto label_162cfc;
        default: break;
    }

    ctx->pc = 0x162bc0u;

    // 0x162bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162bd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x162bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x162bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162bd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x162bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x162bdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x162bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x162be0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x162be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x162be4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162BE4u;
    SET_GPR_U32(ctx, 31, 0x162BECu);
    ctx->pc = 0x162BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BE4u;
    // 0x162be8: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162BE4u, 0x162BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BECu;
label_162bec:
    // 0x162bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162bf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bf8: 0xc04110c  jal         func_104430
    ctx->pc = 0x162BF8u;
    SET_GPR_U32(ctx, 31, 0x162C00u);
    ctx->pc = 0x162BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BF8u;
    // 0x162bfc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x162BF8u, 0x162C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C00u;
label_162c00:
    // 0x162c00: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x162c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x162c04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c08: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x162c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162c0c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162C0Cu;
    {
        const bool branch_taken_0x162c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x162c0c) {
            ctx->pc = 0x162C34u;
            goto label_162c34;
        }
    }
    ctx->pc = 0x162C14u;
    // 0x162c14: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x162C14u;
    SET_GPR_U32(ctx, 31, 0x162C1Cu);
    ctx->pc = 0x162C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C14u;
    // 0x162c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x162C14u, 0x162C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C1Cu;
label_162c1c:
    // 0x162c1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x162c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x162c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x162c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c24: 0x24a56ef8  addiu       $a1, $a1, 0x6EF8
    ctx->pc = 0x162c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28408));
    // 0x162c28: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x162c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x162c2c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x162C2Cu;
    SET_GPR_U32(ctx, 31, 0x162C34u);
    ctx->pc = 0x162C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C2Cu;
    // 0x162c30: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x162C2Cu, 0x162C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C34u;
label_162c34:
    // 0x162c34: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162C34u;
    SET_GPR_U32(ctx, 31, 0x162C3Cu);
    ctx->pc = 0x162C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C34u;
    // 0x162c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162C34u, 0x162C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C3Cu;
label_162c3c:
    // 0x162c3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162C3Cu;
    {
        const bool branch_taken_0x162c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162c3c) {
            ctx->pc = 0x162C50u;
            goto label_162c50;
        }
    }
    ctx->pc = 0x162C44u;
    // 0x162c44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x162C44u;
    {
        const bool branch_taken_0x162c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C44u;
        // 0x162c48: 0x8e3201b4  lw          $s2, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c44) {
            ctx->pc = 0x162C90u;
            goto label_162c90;
        }
    }
    ctx->pc = 0x162C4Cu;
    // 0x162c4c: 0x0  nop
    ctx->pc = 0x162c4cu;
    // NOP
label_162c50:
    // 0x162c50: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162C50u;
    {
        const bool branch_taken_0x162c50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x162c50) {
            ctx->pc = 0x162C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162C50u;
            // 0x162c54: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162C68u;
            goto label_162c68;
        }
    }
    ctx->pc = 0x162C58u;
    // 0x162c58: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x162c5c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x162c60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x162C60u;
    {
        const bool branch_taken_0x162c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C60u;
        // 0x162c64: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c60) {
            ctx->pc = 0x162C90u;
            goto label_162c90;
        }
    }
    ctx->pc = 0x162C68u;
label_162c68:
    // 0x162c68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x162c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x162c6c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x162c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x162c70: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162C70u;
    {
        const bool branch_taken_0x162c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C70u;
        // 0x162c74: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c70) {
            ctx->pc = 0x162C88u;
            goto label_162c88;
        }
    }
    ctx->pc = 0x162C78u;
    // 0x162c78: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x162c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x162c7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162C7Cu;
    {
        const bool branch_taken_0x162c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C7Cu;
        // 0x162c80: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c7c) {
            ctx->pc = 0x162C8Cu;
            goto label_162c8c;
        }
    }
    ctx->pc = 0x162C84u;
    // 0x162c84: 0x0  nop
    ctx->pc = 0x162c84u;
    // NOP
label_162c88:
    // 0x162c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x162c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162c8c:
    // 0x162c8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162c90:
    // 0x162c90: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x162C90u;
    SET_GPR_U32(ctx, 31, 0x162C98u);
    ctx->pc = 0x162C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C90u;
    // 0x162c94: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x162C90u, 0x162C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C98u;
label_162c98:
    // 0x162c98: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x162C98u;
    SET_GPR_U32(ctx, 31, 0x162CA0u);
    ctx->pc = 0x162C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C98u;
    // 0x162c9c: 0x240406c0  addiu       $a0, $zero, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x162C98u, 0x162CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CA0u;
label_162ca0:
    // 0x162ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ca4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x162ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x162ca8: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x162ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x162cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cb0: 0xc065eac  jal         func_197AB0
    ctx->pc = 0x162CB0u;
    SET_GPR_U32(ctx, 31, 0x162CB8u);
    ctx->pc = 0x162CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CB0u;
    // 0x162cb4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197AB0u, 0x162CB0u, 0x162CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CB8u;
label_162cb8:
    // 0x162cb8: 0xae110600  sw          $s1, 0x600($s0)
    ctx->pc = 0x162cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 17));
    // 0x162cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cc0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x162CC0u;
    SET_GPR_U32(ctx, 31, 0x162CC8u);
    ctx->pc = 0x162CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CC0u;
    // 0x162cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x162CC0u, 0x162CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CC8u;
label_162cc8:
    // 0x162cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ccc: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x162cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x162cd0: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x162CD0u;
    SET_GPR_U32(ctx, 31, 0x162CD8u);
    ctx->pc = 0x162CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CD0u;
    // 0x162cd4: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x162CD0u, 0x162CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CD8u;
label_162cd8:
    // 0x162cd8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162cdc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x162cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x162ce0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ce4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x162ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x162ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x162ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162cf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x162cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cf4: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x162CF4u;
    SET_GPR_U32(ctx, 31, 0x162CFCu);
    ctx->pc = 0x162CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CF4u;
    // 0x162cf8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x162CF4u, 0x162CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CFCu;
label_162cfc:
    // 0x162cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162d00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162d04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162d08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x162d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162d0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x162d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x162d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162d14: 0x3e00008  jr          $ra
    ctx->pc = 0x162D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D14u;
        // 0x162d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D1Cu;
}
