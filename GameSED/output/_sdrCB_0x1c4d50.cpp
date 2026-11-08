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

// Function: _sdrCB
// Address: 0x1c4d50 - 0x1c4dec
void _sdrCB_0x1c4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sdrCB_0x1c4d50");
#endif

    switch (ctx->pc) {
        case 0x1c4d50u: goto label_1c4d50;
        case 0x1c4d54u: goto label_1c4d54;
        case 0x1c4d58u: goto label_1c4d58;
        case 0x1c4d5cu: goto label_1c4d5c;
        case 0x1c4d60u: goto label_1c4d60;
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d68u: goto label_1c4d68;
        case 0x1c4d6cu: goto label_1c4d6c;
        case 0x1c4d70u: goto label_1c4d70;
        case 0x1c4d74u: goto label_1c4d74;
        case 0x1c4d78u: goto label_1c4d78;
        case 0x1c4d7cu: goto label_1c4d7c;
        case 0x1c4d80u: goto label_1c4d80;
        case 0x1c4d84u: goto label_1c4d84;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4d8cu: goto label_1c4d8c;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4d94u: goto label_1c4d94;
        case 0x1c4d98u: goto label_1c4d98;
        case 0x1c4d9cu: goto label_1c4d9c;
        case 0x1c4da0u: goto label_1c4da0;
        case 0x1c4da4u: goto label_1c4da4;
        case 0x1c4da8u: goto label_1c4da8;
        case 0x1c4dacu: goto label_1c4dac;
        case 0x1c4db0u: goto label_1c4db0;
        case 0x1c4db4u: goto label_1c4db4;
        case 0x1c4db8u: goto label_1c4db8;
        case 0x1c4dbcu: goto label_1c4dbc;
        case 0x1c4dc0u: goto label_1c4dc0;
        case 0x1c4dc4u: goto label_1c4dc4;
        case 0x1c4dc8u: goto label_1c4dc8;
        case 0x1c4dccu: goto label_1c4dcc;
        case 0x1c4dd0u: goto label_1c4dd0;
        case 0x1c4dd4u: goto label_1c4dd4;
        case 0x1c4dd8u: goto label_1c4dd8;
        case 0x1c4ddcu: goto label_1c4ddc;
        case 0x1c4de0u: goto label_1c4de0;
        case 0x1c4de4u: goto label_1c4de4;
        case 0x1c4de8u: goto label_1c4de8;
        default: break;
    }

    ctx->pc = 0x1c4d50u;

label_1c4d50:
    // 0x1c4d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c4d54:
    // 0x1c4d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c4d58:
    // 0x1c4d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c4d5c:
    // 0x1c4d5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c4d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d60:
    // 0x1c4d60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4d64:
    // 0x1c4d64: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1c4d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1c4d68:
    // 0x1c4d68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c4d6c:
    if (ctx->pc == 0x1C4D6Cu) {
        ctx->pc = 0x1C4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D68u;
        // 0x1c4d6c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D70u;
        goto label_1c4d70;
    }
    ctx->pc = 0x1C4D68u;
    {
        const bool branch_taken_0x1c4d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D68u;
        // 0x1c4d6c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d68) {
            ctx->pc = 0x1C4D8Cu;
            goto label_1c4d8c;
        }
    }
    ctx->pc = 0x1C4D70u;
label_1c4d70:
    // 0x1c4d70: 0x8c46ddd0  lw          $a2, -0x2230($v0)
    ctx->pc = 0x1c4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958544)));
label_1c4d74:
    // 0x1c4d74: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1c4d78:
    if (ctx->pc == 0x1C4D78u) {
        ctx->pc = 0x1C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D74u;
        // 0x1c4d78: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D7Cu;
        goto label_1c4d7c;
    }
    ctx->pc = 0x1C4D74u;
    {
        const bool branch_taken_0x1c4d74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D74u;
        // 0x1c4d78: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d74) {
            ctx->pc = 0x1C4D8Cu;
            goto label_1c4d8c;
        }
    }
    ctx->pc = 0x1C4D7Cu;
label_1c4d7c:
    // 0x1c4d7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d80:
    // 0x1c4d80: 0xc0f809  jalr        $a2
label_1c4d84:
    if (ctx->pc == 0x1C4D84u) {
        ctx->pc = 0x1C4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D80u;
        // 0x1c4d84: 0x8c45dddc  lw          $a1, -0x2224($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D88u;
        goto label_1c4d88;
    }
    ctx->pc = 0x1C4D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C4D88u);
        ctx->pc = 0x1C4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D80u;
        // 0x1c4d84: 0x8c45dddc  lw          $a1, -0x2224($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958556)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4D80u, 0x1C4D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4D88u;
label_1c4d88:
    // 0x1c4d88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4d8c:
    // 0x1c4d8c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1c4d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1c4d90:
    // 0x1c4d90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c4d94:
    if (ctx->pc == 0x1C4D94u) {
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D90u;
        // 0x1c4d94: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D98u;
        goto label_1c4d98;
    }
    ctx->pc = 0x1C4D90u;
    {
        const bool branch_taken_0x1c4d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D90u;
        // 0x1c4d94: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d90) {
            ctx->pc = 0x1C4DB4u;
            goto label_1c4db4;
        }
    }
    ctx->pc = 0x1C4D98u;
label_1c4d98:
    // 0x1c4d98: 0x8c46ddd4  lw          $a2, -0x222C($v0)
    ctx->pc = 0x1c4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958548)));
label_1c4d9c:
    // 0x1c4d9c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1c4da0:
    if (ctx->pc == 0x1C4DA0u) {
        ctx->pc = 0x1C4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D9Cu;
        // 0x1c4da0: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DA4u;
        goto label_1c4da4;
    }
    ctx->pc = 0x1C4D9Cu;
    {
        const bool branch_taken_0x1c4d9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D9Cu;
        // 0x1c4da0: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d9c) {
            ctx->pc = 0x1C4DB4u;
            goto label_1c4db4;
        }
    }
    ctx->pc = 0x1C4DA4u;
label_1c4da4:
    // 0x1c4da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4da8:
    // 0x1c4da8: 0xc0f809  jalr        $a2
label_1c4dac:
    if (ctx->pc == 0x1C4DACu) {
        ctx->pc = 0x1C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA8u;
        // 0x1c4dac: 0x8c45dde0  lw          $a1, -0x2220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DB0u;
        goto label_1c4db0;
    }
    ctx->pc = 0x1C4DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C4DB0u);
        ctx->pc = 0x1C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA8u;
        // 0x1c4dac: 0x8c45dde0  lw          $a1, -0x2220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DA8u, 0x1C4DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4DB0u;
label_1c4db0:
    // 0x1c4db0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4db4:
    // 0x1c4db4: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1c4db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1c4db8:
    // 0x1c4db8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c4dbc:
    if (ctx->pc == 0x1C4DBCu) {
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB8u;
        // 0x1c4dbc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DC0u;
        goto label_1c4dc0;
    }
    ctx->pc = 0x1C4DB8u;
    {
        const bool branch_taken_0x1c4db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB8u;
        // 0x1c4dbc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4db8) {
            ctx->pc = 0x1C4DD8u;
            goto label_1c4dd8;
        }
    }
    ctx->pc = 0x1C4DC0u;
label_1c4dc0:
    // 0x1c4dc0: 0x8c43ddd8  lw          $v1, -0x2228($v0)
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958552)));
label_1c4dc4:
    // 0x1c4dc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c4dc8:
    if (ctx->pc == 0x1C4DC8u) {
        ctx->pc = 0x1C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC4u;
        // 0x1c4dc8: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DCCu;
        goto label_1c4dcc;
    }
    ctx->pc = 0x1C4DC4u;
    {
        const bool branch_taken_0x1c4dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC4u;
        // 0x1c4dc8: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dc4) {
            ctx->pc = 0x1C4DD8u;
            goto label_1c4dd8;
        }
    }
    ctx->pc = 0x1C4DCCu;
label_1c4dcc:
    // 0x1c4dcc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c4dd0:
    // 0x1c4dd0: 0x60f809  jalr        $v1
label_1c4dd4:
    if (ctx->pc == 0x1C4DD4u) {
        ctx->pc = 0x1C4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DD0u;
        // 0x1c4dd4: 0x8c45dde4  lw          $a1, -0x221C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DD8u;
        goto label_1c4dd8;
    }
    ctx->pc = 0x1C4DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C4DD8u);
        ctx->pc = 0x1C4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DD0u;
        // 0x1c4dd4: 0x8c45dde4  lw          $a1, -0x221C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DD0u, 0x1C4DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4DD8u;
label_1c4dd8:
    // 0x1c4dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4ddc:
    // 0x1c4ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4de0:
    // 0x1c4de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4de4:
    // 0x1c4de4: 0x3e00008  jr          $ra
label_1c4de8:
    if (ctx->pc == 0x1C4DE8u) {
        ctx->pc = 0x1C4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DE4u;
        // 0x1c4de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DECu;
        goto label_fallthrough_0x1c4de4;
    }
    ctx->pc = 0x1C4DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DE4u;
        // 0x1c4de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c4de4:
    ctx->pc = 0x1C4DECu;
}
