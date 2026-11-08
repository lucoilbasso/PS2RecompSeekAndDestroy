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

// Function: entry_00140b74
// Address: 0x140b74 - 0x140bb8
void entry_00140b74_0x140b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b74_0x140b74");
#endif

    switch (ctx->pc) {
        case 0x140b88u: goto label_140b88;
        case 0x140bb4u: goto label_140bb4;
        default: break;
    }

    ctx->pc = 0x140b74u;

label_140b74:
    // 0x140b74: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_140b78:
    // 0x140b78: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x140b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_140b7c:
    // 0x140b7c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x140b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_140b80:
    // 0x140b80: 0xc061a46  jal         func_186918
label_140b84:
    if (ctx->pc == 0x140B84u) {
        ctx->pc = 0x140B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B80u;
        // 0x140b84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B88u;
        goto label_140b88;
    }
    ctx->pc = 0x140B80u;
    SET_GPR_U32(ctx, 31, 0x140B88u);
    ctx->pc = 0x140B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B80u;
    // 0x140b84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x140B80u, 0x140B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B88u;
label_140b88:
    // 0x140b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140b8c:
    // 0x140b8c: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
label_140b90:
    if (ctx->pc == 0x140B90u) {
        ctx->pc = 0x140B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B8Cu;
        // 0x140b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B94u;
        goto label_140b94;
    }
    ctx->pc = 0x140B8Cu;
    {
        const bool branch_taken_0x140b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b8c) {
            ctx->pc = 0x140B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140B8Cu;
            // 0x140b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140C20u;
            return;
        }
    }
    ctx->pc = 0x140B94u;
label_140b94:
    // 0x140b94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x140b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_140b98:
    // 0x140b98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_140b9c:
    if (ctx->pc == 0x140B9Cu) {
        ctx->pc = 0x140B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B98u;
        // 0x140b9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BA0u;
        goto label_140ba0;
    }
    ctx->pc = 0x140B98u;
    {
        const bool branch_taken_0x140b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B98u;
        // 0x140b9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b98) {
            ctx->pc = 0x140C1Cu;
            return;
        }
    }
    ctx->pc = 0x140BA0u;
label_140ba0:
    // 0x140ba0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x140ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_140ba4:
    // 0x140ba4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_140ba8:
    if (ctx->pc == 0x140BA8u) {
        ctx->pc = 0x140BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BA4u;
        // 0x140ba8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BACu;
        goto label_140bac;
    }
    ctx->pc = 0x140BA4u;
    {
        const bool branch_taken_0x140ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ba4) {
            ctx->pc = 0x140BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140BA4u;
            // 0x140ba8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BB8u;
            return;
        }
    }
    ctx->pc = 0x140BACu;
label_140bac:
    // 0x140bac: 0x40f809  jalr        $v0
label_140bb0:
    if (ctx->pc == 0x140BB0u) {
        ctx->pc = 0x140BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BACu;
        // 0x140bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BB4u;
        goto label_140bb4;
    }
    ctx->pc = 0x140BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140BB4u);
        ctx->pc = 0x140BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BACu;
        // 0x140bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140BACu, 0x140BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140BB4u;
label_140bb4:
    // 0x140bb4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x140bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x140bb8u;
}
