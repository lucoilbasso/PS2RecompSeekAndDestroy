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

// Function: entry_0013fadc
// Address: 0x13fadc - 0x13fb64
void entry_0013fadc_0x13fadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fadc_0x13fadc");
#endif

    switch (ctx->pc) {
        case 0x13faf8u: goto label_13faf8;
        case 0x13fb20u: goto label_13fb20;
        case 0x13fb34u: goto label_13fb34;
        case 0x13fb60u: goto label_13fb60;
        default: break;
    }

    ctx->pc = 0x13fadcu;

label_13fadc:
    // 0x13fadc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13fae0:
    // 0x13fae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13fae4:
    // 0x13fae4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_13fae8:
    // 0x13fae8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_13faec:
    // 0x13faec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13faf0:
    // 0x13faf0: 0xc04fce4  jal         func_13F390
label_13faf4:
    if (ctx->pc == 0x13FAF4u) {
        ctx->pc = 0x13FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAF0u;
        // 0x13faf4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FAF8u;
        goto label_13faf8;
    }
    ctx->pc = 0x13FAF0u;
    SET_GPR_U32(ctx, 31, 0x13FAF8u);
    ctx->pc = 0x13FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FAF0u;
    // 0x13faf4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13FAF0u, 0x13FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAF8u;
label_13faf8:
    // 0x13faf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13faf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13fafc:
    // 0x13fafc: 0x26740030  addiu       $s4, $s3, 0x30
    ctx->pc = 0x13fafcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_13fb00:
    // 0x13fb00: 0x26750040  addiu       $s5, $s3, 0x40
    ctx->pc = 0x13fb00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_13fb04:
    // 0x13fb04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13fb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13fb08:
    // 0x13fb08: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x13fb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13fb0c:
    // 0x13fb0c: 0x231300b  movn        $a2, $s1, $s1
    ctx->pc = 0x13fb0cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
label_13fb10:
    // 0x13fb10: 0x210380b  movn        $a3, $s0, $s0
    ctx->pc = 0x13fb10u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_13fb14:
    // 0x13fb14: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x13fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_13fb18:
    // 0x13fb18: 0xc0505f0  jal         func_1417C0
label_13fb1c:
    if (ctx->pc == 0x13FB1Cu) {
        ctx->pc = 0x13FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB18u;
        // 0x13fb1c: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB20u;
        goto label_13fb20;
    }
    ctx->pc = 0x13FB18u;
    SET_GPR_U32(ctx, 31, 0x13FB20u);
    ctx->pc = 0x13FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB18u;
    // 0x13fb1c: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1417C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417C0u, 0x13FB18u, 0x13FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB20u;
label_13fb20:
    // 0x13fb20: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13fb24:
    // 0x13fb24: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_13fb28:
    // 0x13fb28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13fb2c:
    // 0x13fb2c: 0xc061a46  jal         func_186918
label_13fb30:
    if (ctx->pc == 0x13FB30u) {
        ctx->pc = 0x13FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB2Cu;
        // 0x13fb30: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB34u;
        goto label_13fb34;
    }
    ctx->pc = 0x13FB2Cu;
    SET_GPR_U32(ctx, 31, 0x13FB34u);
    ctx->pc = 0x13FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB2Cu;
    // 0x13fb30: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FB2Cu, 0x13FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB34u;
label_13fb34:
    // 0x13fb34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13fb38:
    // 0x13fb38: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_13fb3c:
    if (ctx->pc == 0x13FB3Cu) {
        ctx->pc = 0x13FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB38u;
        // 0x13fb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB40u;
        goto label_13fb40;
    }
    ctx->pc = 0x13FB38u;
    {
        const bool branch_taken_0x13fb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB38u;
        // 0x13fb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb38) {
            ctx->pc = 0x13FBC8u;
            return;
        }
    }
    ctx->pc = 0x13FB40u;
label_13fb40:
    // 0x13fb40: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x13fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_13fb44:
    // 0x13fb44: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_13fb48:
    if (ctx->pc == 0x13FB48u) {
        ctx->pc = 0x13FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB44u;
        // 0x13fb48: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB4Cu;
        goto label_13fb4c;
    }
    ctx->pc = 0x13FB44u;
    {
        const bool branch_taken_0x13fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB44u;
        // 0x13fb48: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb44) {
            ctx->pc = 0x13FBC4u;
            return;
        }
    }
    ctx->pc = 0x13FB4Cu;
label_13fb4c:
    // 0x13fb4c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x13fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_13fb50:
    // 0x13fb50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13fb54:
    if (ctx->pc == 0x13FB54u) {
        ctx->pc = 0x13FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB50u;
        // 0x13fb54: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB58u;
        goto label_13fb58;
    }
    ctx->pc = 0x13FB50u;
    {
        const bool branch_taken_0x13fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb50) {
            ctx->pc = 0x13FB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FB50u;
            // 0x13fb54: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FB64u;
            return;
        }
    }
    ctx->pc = 0x13FB58u;
label_13fb58:
    // 0x13fb58: 0x40f809  jalr        $v0
label_13fb5c:
    if (ctx->pc == 0x13FB5Cu) {
        ctx->pc = 0x13FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB58u;
        // 0x13fb5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB60u;
        goto label_13fb60;
    }
    ctx->pc = 0x13FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FB60u);
        ctx->pc = 0x13FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB58u;
        // 0x13fb5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB58u, 0x13FB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13FB60u;
label_13fb60:
    // 0x13fb60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13fb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x13fb64u;
}
