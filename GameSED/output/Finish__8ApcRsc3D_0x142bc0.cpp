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

// Function: Finish__8ApcRsc3D
// Address: 0x142bc0 - 0x142d38
void Finish__8ApcRsc3D_0x142bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8ApcRsc3D_0x142bc0");
#endif

    switch (ctx->pc) {
        case 0x142bc0u: goto label_142bc0;
        case 0x142bc4u: goto label_142bc4;
        case 0x142bc8u: goto label_142bc8;
        case 0x142bccu: goto label_142bcc;
        case 0x142bd0u: goto label_142bd0;
        case 0x142bd4u: goto label_142bd4;
        case 0x142bd8u: goto label_142bd8;
        case 0x142bdcu: goto label_142bdc;
        case 0x142be0u: goto label_142be0;
        case 0x142be4u: goto label_142be4;
        case 0x142be8u: goto label_142be8;
        case 0x142becu: goto label_142bec;
        case 0x142bf0u: goto label_142bf0;
        case 0x142bf4u: goto label_142bf4;
        case 0x142bf8u: goto label_142bf8;
        case 0x142bfcu: goto label_142bfc;
        case 0x142c00u: goto label_142c00;
        case 0x142c04u: goto label_142c04;
        case 0x142c08u: goto label_142c08;
        case 0x142c0cu: goto label_142c0c;
        case 0x142c10u: goto label_142c10;
        case 0x142c14u: goto label_142c14;
        case 0x142c18u: goto label_142c18;
        case 0x142c1cu: goto label_142c1c;
        case 0x142c20u: goto label_142c20;
        case 0x142c24u: goto label_142c24;
        case 0x142c28u: goto label_142c28;
        case 0x142c2cu: goto label_142c2c;
        case 0x142c30u: goto label_142c30;
        case 0x142c34u: goto label_142c34;
        case 0x142c38u: goto label_142c38;
        case 0x142c3cu: goto label_142c3c;
        case 0x142c40u: goto label_142c40;
        case 0x142c44u: goto label_142c44;
        case 0x142c48u: goto label_142c48;
        case 0x142c4cu: goto label_142c4c;
        case 0x142c50u: goto label_142c50;
        case 0x142c54u: goto label_142c54;
        case 0x142c58u: goto label_142c58;
        case 0x142c5cu: goto label_142c5c;
        case 0x142c60u: goto label_142c60;
        case 0x142c64u: goto label_142c64;
        case 0x142c68u: goto label_142c68;
        case 0x142c6cu: goto label_142c6c;
        case 0x142c70u: goto label_142c70;
        case 0x142c74u: goto label_142c74;
        case 0x142c78u: goto label_142c78;
        case 0x142c7cu: goto label_142c7c;
        case 0x142c80u: goto label_142c80;
        case 0x142c84u: goto label_142c84;
        case 0x142c88u: goto label_142c88;
        case 0x142c8cu: goto label_142c8c;
        case 0x142c90u: goto label_142c90;
        case 0x142c94u: goto label_142c94;
        case 0x142c98u: goto label_142c98;
        case 0x142c9cu: goto label_142c9c;
        case 0x142ca0u: goto label_142ca0;
        case 0x142ca4u: goto label_142ca4;
        case 0x142ca8u: goto label_142ca8;
        case 0x142cacu: goto label_142cac;
        case 0x142cb0u: goto label_142cb0;
        case 0x142cb4u: goto label_142cb4;
        case 0x142cb8u: goto label_142cb8;
        case 0x142cbcu: goto label_142cbc;
        case 0x142cc0u: goto label_142cc0;
        case 0x142cc4u: goto label_142cc4;
        case 0x142cc8u: goto label_142cc8;
        case 0x142cccu: goto label_142ccc;
        case 0x142cd0u: goto label_142cd0;
        case 0x142cd4u: goto label_142cd4;
        case 0x142cd8u: goto label_142cd8;
        case 0x142cdcu: goto label_142cdc;
        case 0x142ce0u: goto label_142ce0;
        case 0x142ce4u: goto label_142ce4;
        case 0x142ce8u: goto label_142ce8;
        case 0x142cecu: goto label_142cec;
        case 0x142cf0u: goto label_142cf0;
        case 0x142cf4u: goto label_142cf4;
        case 0x142cf8u: goto label_142cf8;
        case 0x142cfcu: goto label_142cfc;
        case 0x142d00u: goto label_142d00;
        case 0x142d04u: goto label_142d04;
        case 0x142d08u: goto label_142d08;
        case 0x142d0cu: goto label_142d0c;
        case 0x142d10u: goto label_142d10;
        case 0x142d14u: goto label_142d14;
        case 0x142d18u: goto label_142d18;
        case 0x142d1cu: goto label_142d1c;
        case 0x142d20u: goto label_142d20;
        case 0x142d24u: goto label_142d24;
        case 0x142d28u: goto label_142d28;
        case 0x142d2cu: goto label_142d2c;
        case 0x142d30u: goto label_142d30;
        case 0x142d34u: goto label_142d34;
        default: break;
    }

    ctx->pc = 0x142bc0u;

label_142bc0:
    // 0x142bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_142bc4:
    // 0x142bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_142bc8:
    // 0x142bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_142bcc:
    // 0x142bcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x142bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_142bd0:
    // 0x142bd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_142bd4:
    // 0x142bd4: 0xc050f7e  jal         func_143DF8
label_142bd8:
    if (ctx->pc == 0x142BD8u) {
        ctx->pc = 0x142BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BD4u;
        // 0x142bd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142BDCu;
        goto label_142bdc;
    }
    ctx->pc = 0x142BD4u;
    SET_GPR_U32(ctx, 31, 0x142BDCu);
    ctx->pc = 0x142BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BD4u;
    // 0x142bd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143DF8u, 0x142BD4u, 0x142BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BDCu;
label_142bdc:
    // 0x142bdc: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_142be0:
    // 0x142be0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_142be4:
    if (ctx->pc == 0x142BE4u) {
        ctx->pc = 0x142BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BE0u;
        // 0x142be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142BE8u;
        goto label_142be8;
    }
    ctx->pc = 0x142BE0u;
    {
        const bool branch_taken_0x142be0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BE0u;
        // 0x142be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142be0) {
            ctx->pc = 0x142C00u;
            goto label_142c00;
        }
    }
    ctx->pc = 0x142BE8u;
label_142be8:
    // 0x142be8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142bec:
    // 0x142bec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142bf0:
    // 0x142bf0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142bf4:
    // 0x142bf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142bf8:
    // 0x142bf8: 0x60f809  jalr        $v1
label_142bfc:
    if (ctx->pc == 0x142BFCu) {
        ctx->pc = 0x142BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BF8u;
        // 0x142bfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C00u;
        goto label_142c00;
    }
    ctx->pc = 0x142BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142C00u);
        ctx->pc = 0x142BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BF8u;
        // 0x142bfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142BF8u, 0x142C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142C00u;
label_142c00:
    // 0x142c00: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x142c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_142c04:
    // 0x142c04: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_142c08:
    if (ctx->pc == 0x142C08u) {
        ctx->pc = 0x142C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C04u;
        // 0x142c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C0Cu;
        goto label_142c0c;
    }
    ctx->pc = 0x142C04u;
    {
        const bool branch_taken_0x142c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C04u;
        // 0x142c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c04) {
            ctx->pc = 0x142C24u;
            goto label_142c24;
        }
    }
    ctx->pc = 0x142C0Cu;
label_142c0c:
    // 0x142c0c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c10:
    // 0x142c10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c14:
    // 0x142c14: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c18:
    // 0x142c18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142c1c:
    // 0x142c1c: 0x60f809  jalr        $v1
label_142c20:
    if (ctx->pc == 0x142C20u) {
        ctx->pc = 0x142C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C1Cu;
        // 0x142c20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C24u;
        goto label_142c24;
    }
    ctx->pc = 0x142C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142C24u);
        ctx->pc = 0x142C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C1Cu;
        // 0x142c20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C1Cu, 0x142C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142C24u;
label_142c24:
    // 0x142c24: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x142c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_142c28:
    // 0x142c28: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x142c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_142c2c:
    // 0x142c2c: 0x8e06fff0  lw          $a2, -0x10($s0)
    ctx->pc = 0x142c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_142c30:
    // 0x142c30: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_142c34:
    if (ctx->pc == 0x142C34u) {
        ctx->pc = 0x142C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C30u;
        // 0x142c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C38u;
        goto label_142c38;
    }
    ctx->pc = 0x142C30u;
    {
        const bool branch_taken_0x142c30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C30u;
        // 0x142c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c30) {
            ctx->pc = 0x142C50u;
            goto label_142c50;
        }
    }
    ctx->pc = 0x142C38u;
label_142c38:
    // 0x142c38: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c3c:
    // 0x142c3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c40:
    // 0x142c40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c44:
    // 0x142c44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142c48:
    // 0x142c48: 0x60f809  jalr        $v1
label_142c4c:
    if (ctx->pc == 0x142C4Cu) {
        ctx->pc = 0x142C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C48u;
        // 0x142c4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C50u;
        goto label_142c50;
    }
    ctx->pc = 0x142C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142C50u);
        ctx->pc = 0x142C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C48u;
        // 0x142c4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C48u, 0x142C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142C50u;
label_142c50:
    // 0x142c50: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x142c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_142c54:
    // 0x142c54: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_142c58:
    if (ctx->pc == 0x142C58u) {
        ctx->pc = 0x142C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C54u;
        // 0x142c58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C5Cu;
        goto label_142c5c;
    }
    ctx->pc = 0x142C54u;
    {
        const bool branch_taken_0x142c54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C54u;
        // 0x142c58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c54) {
            ctx->pc = 0x142C78u;
            goto label_142c78;
        }
    }
    ctx->pc = 0x142C5Cu;
label_142c5c:
    // 0x142c5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c60:
    // 0x142c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142c64:
    // 0x142c64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c68:
    // 0x142c68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c6c:
    // 0x142c6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142c70:
    // 0x142c70: 0x60f809  jalr        $v1
label_142c74:
    if (ctx->pc == 0x142C74u) {
        ctx->pc = 0x142C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C70u;
        // 0x142c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C78u;
        goto label_142c78;
    }
    ctx->pc = 0x142C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142C78u);
        ctx->pc = 0x142C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C70u;
        // 0x142c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C70u, 0x142C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142C78u;
label_142c78:
    // 0x142c78: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_142c7c:
    // 0x142c7c: 0x643ffec  bgezl       $s2, . + 4 + (-0x14 << 2)
label_142c80:
    if (ctx->pc == 0x142C80u) {
        ctx->pc = 0x142C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C7Cu;
        // 0x142c80: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C84u;
        goto label_142c84;
    }
    ctx->pc = 0x142C7Cu;
    {
        const bool branch_taken_0x142c7c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x142c7c) {
            ctx->pc = 0x142C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142C7Cu;
            // 0x142c80: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142c30;
        }
    }
    ctx->pc = 0x142C84u;
label_142c84:
    // 0x142c84: 0x8e2602f8  lw          $a2, 0x2F8($s1)
    ctx->pc = 0x142c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
label_142c88:
    // 0x142c88: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_142c8c:
    if (ctx->pc == 0x142C8Cu) {
        ctx->pc = 0x142C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C88u;
        // 0x142c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C90u;
        goto label_142c90;
    }
    ctx->pc = 0x142C88u;
    {
        const bool branch_taken_0x142c88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C88u;
        // 0x142c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c88) {
            ctx->pc = 0x142CA8u;
            goto label_142ca8;
        }
    }
    ctx->pc = 0x142C90u;
label_142c90:
    // 0x142c90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c94:
    // 0x142c94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c98:
    // 0x142c98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c9c:
    // 0x142c9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142ca0:
    // 0x142ca0: 0x60f809  jalr        $v1
label_142ca4:
    if (ctx->pc == 0x142CA4u) {
        ctx->pc = 0x142CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CA0u;
        // 0x142ca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CA8u;
        goto label_142ca8;
    }
    ctx->pc = 0x142CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142CA8u);
        ctx->pc = 0x142CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CA0u;
        // 0x142ca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142CA0u, 0x142CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142CA8u;
label_142ca8:
    // 0x142ca8: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x142ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_142cac:
    // 0x142cac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_142cb0:
    if (ctx->pc == 0x142CB0u) {
        ctx->pc = 0x142CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CACu;
        // 0x142cb0: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CB4u;
        goto label_142cb4;
    }
    ctx->pc = 0x142CACu;
    {
        const bool branch_taken_0x142cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cac) {
            ctx->pc = 0x142CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CACu;
            // 0x142cb0: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142CC0u;
            goto label_142cc0;
        }
    }
    ctx->pc = 0x142CB4u;
label_142cb4:
    // 0x142cb4: 0xc067f04  jal         func_19FC10
label_142cb8:
    if (ctx->pc == 0x142CB8u) {
        ctx->pc = 0x142CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CB4u;
        // 0x142cb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CBCu;
        goto label_142cbc;
    }
    ctx->pc = 0x142CB4u;
    SET_GPR_U32(ctx, 31, 0x142CBCu);
    ctx->pc = 0x142CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CB4u;
    // 0x142cb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x142CB4u, 0x142CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CBCu;
label_142cbc:
    // 0x142cbc: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_142cc0:
    // 0x142cc0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_142cc4:
    if (ctx->pc == 0x142CC4u) {
        ctx->pc = 0x142CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CC0u;
        // 0x142cc4: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CC8u;
        goto label_142cc8;
    }
    ctx->pc = 0x142CC0u;
    {
        const bool branch_taken_0x142cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cc0) {
            ctx->pc = 0x142CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CC0u;
            // 0x142cc4: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142CC8u;
label_142cc8:
    // 0x142cc8: 0xc067f04  jal         func_19FC10
label_142ccc:
    if (ctx->pc == 0x142CCCu) {
        ctx->pc = 0x142CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CC8u;
        // 0x142ccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CD0u;
        goto label_142cd0;
    }
    ctx->pc = 0x142CC8u;
    SET_GPR_U32(ctx, 31, 0x142CD0u);
    ctx->pc = 0x142CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CC8u;
    // 0x142ccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x142CC8u, 0x142CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CD0u;
label_142cd0:
    // 0x142cd0: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x142cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_142cd4:
    // 0x142cd4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_142cd8:
    if (ctx->pc == 0x142CD8u) {
        ctx->pc = 0x142CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CD4u;
        // 0x142cd8: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CDCu;
        goto label_142cdc;
    }
    ctx->pc = 0x142CD4u;
    {
        const bool branch_taken_0x142cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cd4) {
            ctx->pc = 0x142CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CD4u;
            // 0x142cd8: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142CE8u;
            goto label_142ce8;
        }
    }
    ctx->pc = 0x142CDCu;
label_142cdc:
    // 0x142cdc: 0xc067f04  jal         func_19FC10
label_142ce0:
    if (ctx->pc == 0x142CE0u) {
        ctx->pc = 0x142CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CDCu;
        // 0x142ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CE4u;
        goto label_142ce4;
    }
    ctx->pc = 0x142CDCu;
    SET_GPR_U32(ctx, 31, 0x142CE4u);
    ctx->pc = 0x142CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CDCu;
    // 0x142ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x142CDCu, 0x142CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CE4u;
label_142ce4:
    // 0x142ce4: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x142ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_142ce8:
    // 0x142ce8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_142cec:
    if (ctx->pc == 0x142CECu) {
        ctx->pc = 0x142CF0u;
        goto label_142cf0;
    }
    ctx->pc = 0x142CE8u;
    {
        const bool branch_taken_0x142ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ce8) {
            ctx->pc = 0x142CF8u;
            goto label_142cf8;
        }
    }
    ctx->pc = 0x142CF0u;
label_142cf0:
    // 0x142cf0: 0xc067f04  jal         func_19FC10
label_142cf4:
    if (ctx->pc == 0x142CF4u) {
        ctx->pc = 0x142CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CF0u;
        // 0x142cf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CF8u;
        goto label_142cf8;
    }
    ctx->pc = 0x142CF0u;
    SET_GPR_U32(ctx, 31, 0x142CF8u);
    ctx->pc = 0x142CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CF0u;
    // 0x142cf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x142CF0u, 0x142CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CF8u;
label_142cf8:
    // 0x142cf8: 0xc055c5e  jal         func_157178
label_142cfc:
    if (ctx->pc == 0x142CFCu) {
        ctx->pc = 0x142D00u;
        goto label_142d00;
    }
    ctx->pc = 0x142CF8u;
    SET_GPR_U32(ctx, 31, 0x142D00u);
    ctx->pc = 0x157178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157178u, 0x142CF8u, 0x142D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D00u;
label_142d00:
    // 0x142d00: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x142d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_142d04:
    // 0x142d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x142d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_142d08:
    // 0x142d08: 0xc0685b8  jal         func_1A16E0
label_142d0c:
    if (ctx->pc == 0x142D0Cu) {
        ctx->pc = 0x142D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D08u;
        // 0x142d0c: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D10u;
        goto label_142d10;
    }
    ctx->pc = 0x142D08u;
    SET_GPR_U32(ctx, 31, 0x142D10u);
    ctx->pc = 0x142D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D08u;
    // 0x142d0c: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x142D08u, 0x142D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D10u;
label_142d10:
    // 0x142d10: 0xc068364  jal         func_1A0D90
label_142d14:
    if (ctx->pc == 0x142D14u) {
        ctx->pc = 0x142D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D10u;
        // 0x142d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D18u;
        goto label_142d18;
    }
    ctx->pc = 0x142D10u;
    SET_GPR_U32(ctx, 31, 0x142D18u);
    ctx->pc = 0x142D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D10u;
    // 0x142d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x142D10u, 0x142D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D18u;
label_142d18:
    // 0x142d18: 0xc068396  jal         func_1A0E58
label_142d1c:
    if (ctx->pc == 0x142D1Cu) {
        ctx->pc = 0x142D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D18u;
        // 0x142d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D20u;
        goto label_142d20;
    }
    ctx->pc = 0x142D18u;
    SET_GPR_U32(ctx, 31, 0x142D20u);
    ctx->pc = 0x142D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D18u;
    // 0x142d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x142D18u, 0x142D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D20u;
label_142d20:
    // 0x142d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142d24:
    // 0x142d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_142d28:
    // 0x142d28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142d2c:
    // 0x142d2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_142d30:
    // 0x142d30: 0x3e00008  jr          $ra
label_142d34:
    if (ctx->pc == 0x142D34u) {
        ctx->pc = 0x142D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D30u;
        // 0x142d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D38u;
        goto label_fallthrough_0x142d30;
    }
    ctx->pc = 0x142D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D30u;
        // 0x142d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142d30:
    ctx->pc = 0x142D38u;
}
