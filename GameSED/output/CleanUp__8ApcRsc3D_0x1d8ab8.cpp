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

// Function: CleanUp__8ApcRsc3D
// Address: 0x1d8ab8 - 0x1d8c08
void CleanUp__8ApcRsc3D_0x1d8ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CleanUp__8ApcRsc3D_0x1d8ab8");
#endif

    switch (ctx->pc) {
        case 0x1d8ab8u: goto label_1d8ab8;
        case 0x1d8abcu: goto label_1d8abc;
        case 0x1d8ac0u: goto label_1d8ac0;
        case 0x1d8ac4u: goto label_1d8ac4;
        case 0x1d8ac8u: goto label_1d8ac8;
        case 0x1d8accu: goto label_1d8acc;
        case 0x1d8ad0u: goto label_1d8ad0;
        case 0x1d8ad4u: goto label_1d8ad4;
        case 0x1d8ad8u: goto label_1d8ad8;
        case 0x1d8adcu: goto label_1d8adc;
        case 0x1d8ae0u: goto label_1d8ae0;
        case 0x1d8ae4u: goto label_1d8ae4;
        case 0x1d8ae8u: goto label_1d8ae8;
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8af0u: goto label_1d8af0;
        case 0x1d8af4u: goto label_1d8af4;
        case 0x1d8af8u: goto label_1d8af8;
        case 0x1d8afcu: goto label_1d8afc;
        case 0x1d8b00u: goto label_1d8b00;
        case 0x1d8b04u: goto label_1d8b04;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b0cu: goto label_1d8b0c;
        case 0x1d8b10u: goto label_1d8b10;
        case 0x1d8b14u: goto label_1d8b14;
        case 0x1d8b18u: goto label_1d8b18;
        case 0x1d8b1cu: goto label_1d8b1c;
        case 0x1d8b20u: goto label_1d8b20;
        case 0x1d8b24u: goto label_1d8b24;
        case 0x1d8b28u: goto label_1d8b28;
        case 0x1d8b2cu: goto label_1d8b2c;
        case 0x1d8b30u: goto label_1d8b30;
        case 0x1d8b34u: goto label_1d8b34;
        case 0x1d8b38u: goto label_1d8b38;
        case 0x1d8b3cu: goto label_1d8b3c;
        case 0x1d8b40u: goto label_1d8b40;
        case 0x1d8b44u: goto label_1d8b44;
        case 0x1d8b48u: goto label_1d8b48;
        case 0x1d8b4cu: goto label_1d8b4c;
        case 0x1d8b50u: goto label_1d8b50;
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b58u: goto label_1d8b58;
        case 0x1d8b5cu: goto label_1d8b5c;
        case 0x1d8b60u: goto label_1d8b60;
        case 0x1d8b64u: goto label_1d8b64;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b6cu: goto label_1d8b6c;
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8b74u: goto label_1d8b74;
        case 0x1d8b78u: goto label_1d8b78;
        case 0x1d8b7cu: goto label_1d8b7c;
        case 0x1d8b80u: goto label_1d8b80;
        case 0x1d8b84u: goto label_1d8b84;
        case 0x1d8b88u: goto label_1d8b88;
        case 0x1d8b8cu: goto label_1d8b8c;
        case 0x1d8b90u: goto label_1d8b90;
        case 0x1d8b94u: goto label_1d8b94;
        case 0x1d8b98u: goto label_1d8b98;
        case 0x1d8b9cu: goto label_1d8b9c;
        case 0x1d8ba0u: goto label_1d8ba0;
        case 0x1d8ba4u: goto label_1d8ba4;
        case 0x1d8ba8u: goto label_1d8ba8;
        case 0x1d8bacu: goto label_1d8bac;
        case 0x1d8bb0u: goto label_1d8bb0;
        case 0x1d8bb4u: goto label_1d8bb4;
        case 0x1d8bb8u: goto label_1d8bb8;
        case 0x1d8bbcu: goto label_1d8bbc;
        case 0x1d8bc0u: goto label_1d8bc0;
        case 0x1d8bc4u: goto label_1d8bc4;
        case 0x1d8bc8u: goto label_1d8bc8;
        case 0x1d8bccu: goto label_1d8bcc;
        case 0x1d8bd0u: goto label_1d8bd0;
        case 0x1d8bd4u: goto label_1d8bd4;
        case 0x1d8bd8u: goto label_1d8bd8;
        case 0x1d8bdcu: goto label_1d8bdc;
        case 0x1d8be0u: goto label_1d8be0;
        case 0x1d8be4u: goto label_1d8be4;
        case 0x1d8be8u: goto label_1d8be8;
        case 0x1d8becu: goto label_1d8bec;
        case 0x1d8bf0u: goto label_1d8bf0;
        case 0x1d8bf4u: goto label_1d8bf4;
        case 0x1d8bf8u: goto label_1d8bf8;
        case 0x1d8bfcu: goto label_1d8bfc;
        case 0x1d8c00u: goto label_1d8c00;
        case 0x1d8c04u: goto label_1d8c04;
        default: break;
    }

    ctx->pc = 0x1d8ab8u;

label_1d8ab8:
    // 0x1d8ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d8abc:
    // 0x1d8abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d8ac0:
    // 0x1d8ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ac4:
    // 0x1d8ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d8ac8:
    // 0x1d8ac8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d8ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d8acc:
    // 0x1d8acc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d8accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d8ad0:
    // 0x1d8ad0: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1d8ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d8ad4:
    // 0x1d8ad4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d8ad8:
    if (ctx->pc == 0x1D8AD8u) {
        ctx->pc = 0x1D8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AD4u;
        // 0x1d8ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8ADCu;
        goto label_1d8adc;
    }
    ctx->pc = 0x1D8AD4u;
    {
        const bool branch_taken_0x1d8ad4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AD4u;
        // 0x1d8ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ad4) {
            ctx->pc = 0x1D8AF4u;
            goto label_1d8af4;
        }
    }
    ctx->pc = 0x1D8ADCu;
label_1d8adc:
    // 0x1d8adc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d8ae0:
    // 0x1d8ae0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d8ae4:
    // 0x1d8ae4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8ae8:
    // 0x1d8ae8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d8aec:
    // 0x1d8aec: 0x60f809  jalr        $v1
label_1d8af0:
    if (ctx->pc == 0x1D8AF0u) {
        ctx->pc = 0x1D8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AECu;
        // 0x1d8af0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AF4u;
        goto label_1d8af4;
    }
    ctx->pc = 0x1D8AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8AF4u);
        ctx->pc = 0x1D8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AECu;
        // 0x1d8af0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AECu, 0x1D8AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8AF4u;
label_1d8af4:
    // 0x1d8af4: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d8af8:
    // 0x1d8af8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d8afc:
    if (ctx->pc == 0x1D8AFCu) {
        ctx->pc = 0x1D8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AF8u;
        // 0x1d8afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B00u;
        goto label_1d8b00;
    }
    ctx->pc = 0x1D8AF8u;
    {
        const bool branch_taken_0x1d8af8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AF8u;
        // 0x1d8afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8af8) {
            ctx->pc = 0x1D8B18u;
            goto label_1d8b18;
        }
    }
    ctx->pc = 0x1D8B00u;
label_1d8b00:
    // 0x1d8b00: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d8b04:
    // 0x1d8b04: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d8b08:
    // 0x1d8b08: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8b08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8b0c:
    // 0x1d8b0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d8b10:
    // 0x1d8b10: 0x60f809  jalr        $v1
label_1d8b14:
    if (ctx->pc == 0x1D8B14u) {
        ctx->pc = 0x1D8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B10u;
        // 0x1d8b14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B18u;
        goto label_1d8b18;
    }
    ctx->pc = 0x1D8B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8B18u);
        ctx->pc = 0x1D8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B10u;
        // 0x1d8b14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B10u, 0x1D8B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8B18u;
label_1d8b18:
    // 0x1d8b18: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x1d8b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_1d8b1c:
    // 0x1d8b1c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8b20:
    // 0x1d8b20: 0x8e06fff0  lw          $a2, -0x10($s0)
    ctx->pc = 0x1d8b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1d8b24:
    // 0x1d8b24: 0x0  nop
    ctx->pc = 0x1d8b24u;
    // NOP
label_1d8b28:
    // 0x1d8b28: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d8b2c:
    if (ctx->pc == 0x1D8B2Cu) {
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B30u;
        goto label_1d8b30;
    }
    ctx->pc = 0x1D8B28u;
    {
        const bool branch_taken_0x1d8b28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b28) {
            ctx->pc = 0x1D8B48u;
            goto label_1d8b48;
        }
    }
    ctx->pc = 0x1D8B30u;
label_1d8b30:
    // 0x1d8b30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d8b34:
    // 0x1d8b34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d8b38:
    // 0x1d8b38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8b3c:
    // 0x1d8b3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d8b40:
    // 0x1d8b40: 0x60f809  jalr        $v1
label_1d8b44:
    if (ctx->pc == 0x1D8B44u) {
        ctx->pc = 0x1D8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B40u;
        // 0x1d8b44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B48u;
        goto label_1d8b48;
    }
    ctx->pc = 0x1D8B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8B48u);
        ctx->pc = 0x1D8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B40u;
        // 0x1d8b44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B40u, 0x1D8B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8B48u;
label_1d8b48:
    // 0x1d8b48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d8b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d8b4c:
    // 0x1d8b4c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d8b50:
    if (ctx->pc == 0x1D8B50u) {
        ctx->pc = 0x1D8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B4Cu;
        // 0x1d8b50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B54u;
        goto label_1d8b54;
    }
    ctx->pc = 0x1D8B4Cu;
    {
        const bool branch_taken_0x1d8b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B4Cu;
        // 0x1d8b50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b4c) {
            ctx->pc = 0x1D8B70u;
            goto label_1d8b70;
        }
    }
    ctx->pc = 0x1D8B54u;
label_1d8b54:
    // 0x1d8b54: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d8b58:
    // 0x1d8b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8b5c:
    // 0x1d8b5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d8b60:
    // 0x1d8b60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8b64:
    // 0x1d8b64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d8b68:
    // 0x1d8b68: 0x60f809  jalr        $v1
label_1d8b6c:
    if (ctx->pc == 0x1D8B6Cu) {
        ctx->pc = 0x1D8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B68u;
        // 0x1d8b6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B70u;
        goto label_1d8b70;
    }
    ctx->pc = 0x1D8B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8B70u);
        ctx->pc = 0x1D8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B68u;
        // 0x1d8b6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B68u, 0x1D8B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8B70u;
label_1d8b70:
    // 0x1d8b70: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d8b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1d8b74:
    // 0x1d8b74: 0x643ffec  bgezl       $s2, . + 4 + (-0x14 << 2)
label_1d8b78:
    if (ctx->pc == 0x1D8B78u) {
        ctx->pc = 0x1D8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B74u;
        // 0x1d8b78: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B7Cu;
        goto label_1d8b7c;
    }
    ctx->pc = 0x1D8B74u;
    {
        const bool branch_taken_0x1d8b74 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1d8b74) {
            ctx->pc = 0x1D8B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8B74u;
            // 0x1d8b78: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8b28;
        }
    }
    ctx->pc = 0x1D8B7Cu;
label_1d8b7c:
    // 0x1d8b7c: 0x8e2602f8  lw          $a2, 0x2F8($s1)
    ctx->pc = 0x1d8b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
label_1d8b80:
    // 0x1d8b80: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d8b84:
    if (ctx->pc == 0x1D8B84u) {
        ctx->pc = 0x1D8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B80u;
        // 0x1d8b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B88u;
        goto label_1d8b88;
    }
    ctx->pc = 0x1D8B80u;
    {
        const bool branch_taken_0x1d8b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B80u;
        // 0x1d8b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b80) {
            ctx->pc = 0x1D8BA0u;
            goto label_1d8ba0;
        }
    }
    ctx->pc = 0x1D8B88u;
label_1d8b88:
    // 0x1d8b88: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d8b8c:
    // 0x1d8b8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d8b90:
    // 0x1d8b90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8b94:
    // 0x1d8b94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d8b98:
    // 0x1d8b98: 0x60f809  jalr        $v1
label_1d8b9c:
    if (ctx->pc == 0x1D8B9Cu) {
        ctx->pc = 0x1D8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B98u;
        // 0x1d8b9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BA0u;
        goto label_1d8ba0;
    }
    ctx->pc = 0x1D8B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8BA0u);
        ctx->pc = 0x1D8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B98u;
        // 0x1d8b9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B98u, 0x1D8BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8BA0u;
label_1d8ba0:
    // 0x1d8ba0: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x1d8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_1d8ba4:
    // 0x1d8ba4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d8ba8:
    if (ctx->pc == 0x1D8BA8u) {
        ctx->pc = 0x1D8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BA4u;
        // 0x1d8ba8: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BACu;
        goto label_1d8bac;
    }
    ctx->pc = 0x1D8BA4u;
    {
        const bool branch_taken_0x1d8ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ba4) {
            ctx->pc = 0x1D8BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BA4u;
            // 0x1d8ba8: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BB8u;
            goto label_1d8bb8;
        }
    }
    ctx->pc = 0x1D8BACu;
label_1d8bac:
    // 0x1d8bac: 0xc067f04  jal         func_19FC10
label_1d8bb0:
    if (ctx->pc == 0x1D8BB0u) {
        ctx->pc = 0x1D8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BACu;
        // 0x1d8bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BB4u;
        goto label_1d8bb4;
    }
    ctx->pc = 0x1D8BACu;
    SET_GPR_U32(ctx, 31, 0x1D8BB4u);
    ctx->pc = 0x1D8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BACu;
    // 0x1d8bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BACu, 0x1D8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BB4u;
label_1d8bb4:
    // 0x1d8bb4: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1d8bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1d8bb8:
    // 0x1d8bb8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d8bbc:
    if (ctx->pc == 0x1D8BBCu) {
        ctx->pc = 0x1D8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BB8u;
        // 0x1d8bbc: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BC0u;
        goto label_1d8bc0;
    }
    ctx->pc = 0x1D8BB8u;
    {
        const bool branch_taken_0x1d8bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bb8) {
            ctx->pc = 0x1D8BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BB8u;
            // 0x1d8bbc: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BCCu;
            goto label_1d8bcc;
        }
    }
    ctx->pc = 0x1D8BC0u;
label_1d8bc0:
    // 0x1d8bc0: 0xc067f04  jal         func_19FC10
label_1d8bc4:
    if (ctx->pc == 0x1D8BC4u) {
        ctx->pc = 0x1D8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BC0u;
        // 0x1d8bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BC8u;
        goto label_1d8bc8;
    }
    ctx->pc = 0x1D8BC0u;
    SET_GPR_U32(ctx, 31, 0x1D8BC8u);
    ctx->pc = 0x1D8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BC0u;
    // 0x1d8bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BC0u, 0x1D8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BC8u;
label_1d8bc8:
    // 0x1d8bc8: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_1d8bcc:
    // 0x1d8bcc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d8bd0:
    if (ctx->pc == 0x1D8BD0u) {
        ctx->pc = 0x1D8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BCCu;
        // 0x1d8bd0: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BD4u;
        goto label_1d8bd4;
    }
    ctx->pc = 0x1D8BCCu;
    {
        const bool branch_taken_0x1d8bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bcc) {
            ctx->pc = 0x1D8BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BCCu;
            // 0x1d8bd0: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BE0u;
            goto label_1d8be0;
        }
    }
    ctx->pc = 0x1D8BD4u;
label_1d8bd4:
    // 0x1d8bd4: 0xc067f04  jal         func_19FC10
label_1d8bd8:
    if (ctx->pc == 0x1D8BD8u) {
        ctx->pc = 0x1D8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BD4u;
        // 0x1d8bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BDCu;
        goto label_1d8bdc;
    }
    ctx->pc = 0x1D8BD4u;
    SET_GPR_U32(ctx, 31, 0x1D8BDCu);
    ctx->pc = 0x1D8BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BD4u;
    // 0x1d8bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BD4u, 0x1D8BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BDCu;
label_1d8bdc:
    // 0x1d8bdc: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x1d8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_1d8be0:
    // 0x1d8be0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d8be4:
    if (ctx->pc == 0x1D8BE4u) {
        ctx->pc = 0x1D8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BE0u;
        // 0x1d8be4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BE8u;
        goto label_1d8be8;
    }
    ctx->pc = 0x1D8BE0u;
    {
        const bool branch_taken_0x1d8be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8be0) {
            ctx->pc = 0x1D8BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BE0u;
            // 0x1d8be4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BF4u;
            goto label_1d8bf4;
        }
    }
    ctx->pc = 0x1D8BE8u;
label_1d8be8:
    // 0x1d8be8: 0xc067f04  jal         func_19FC10
label_1d8bec:
    if (ctx->pc == 0x1D8BECu) {
        ctx->pc = 0x1D8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BE8u;
        // 0x1d8bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BF0u;
        goto label_1d8bf0;
    }
    ctx->pc = 0x1D8BE8u;
    SET_GPR_U32(ctx, 31, 0x1D8BF0u);
    ctx->pc = 0x1D8BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BE8u;
    // 0x1d8bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BE8u, 0x1D8BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BF0u;
label_1d8bf0:
    // 0x1d8bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8bf4:
    // 0x1d8bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d8bf8:
    // 0x1d8bf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d8bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8bfc:
    // 0x1d8bfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d8c00:
    // 0x1d8c00: 0x3e00008  jr          $ra
label_1d8c04:
    if (ctx->pc == 0x1D8C04u) {
        ctx->pc = 0x1D8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C00u;
        // 0x1d8c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8C08u;
        goto label_fallthrough_0x1d8c00;
    }
    ctx->pc = 0x1D8C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C00u;
        // 0x1d8c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d8c00:
    ctx->pc = 0x1D8C08u;
}
