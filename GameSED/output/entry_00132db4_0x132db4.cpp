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

// Function: entry_00132db4
// Address: 0x132db4 - 0x132e00
void entry_00132db4_0x132db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132db4_0x132db4");
#endif

    switch (ctx->pc) {
        case 0x132dc0u: goto label_132dc0;
        case 0x132de8u: goto label_132de8;
        case 0x132df4u: goto label_132df4;
        default: break;
    }

    ctx->pc = 0x132db4u;

label_132db4:
    // 0x132db4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x132db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132db8:
    // 0x132db8: 0xc0684de  jal         func_1A1378
label_132dbc:
    if (ctx->pc == 0x132DBCu) {
        ctx->pc = 0x132DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DB8u;
        // 0x132dbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DC0u;
        goto label_132dc0;
    }
    ctx->pc = 0x132DB8u;
    SET_GPR_U32(ctx, 31, 0x132DC0u);
    ctx->pc = 0x132DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DB8u;
    // 0x132dbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x132DB8u, 0x132DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DC0u;
label_132dc0:
    // 0x132dc0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
label_132dc4:
    if (ctx->pc == 0x132DC4u) {
        ctx->pc = 0x132DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DC0u;
        // 0x132dc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DC8u;
        goto label_132dc8;
    }
    ctx->pc = 0x132DC0u;
    {
        const bool branch_taken_0x132dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DC0u;
        // 0x132dc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dc0) {
            ctx->pc = 0x132F98u;
            return;
        }
    }
    ctx->pc = 0x132DC8u;
label_132dc8:
    // 0x132dc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x132dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_132dcc:
    // 0x132dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x132dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132dd0:
    // 0x132dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132dd4:
    // 0x132dd4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x132dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_132dd8:
    // 0x132dd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x132dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_132ddc:
    // 0x132ddc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x132ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_132de0:
    // 0x132de0: 0x60f809  jalr        $v1
label_132de4:
    if (ctx->pc == 0x132DE4u) {
        ctx->pc = 0x132DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DE0u;
        // 0x132de4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DE8u;
        goto label_132de8;
    }
    ctx->pc = 0x132DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132DE8u);
        ctx->pc = 0x132DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DE0u;
        // 0x132de4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132DE0u, 0x132DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132DE8u;
label_132de8:
    // 0x132de8: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x132de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_132dec:
    // 0x132dec: 0xc0683b6  jal         func_1A0ED8
label_132df0:
    if (ctx->pc == 0x132DF0u) {
        ctx->pc = 0x132DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DECu;
        // 0x132df0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DF4u;
        goto label_132df4;
    }
    ctx->pc = 0x132DECu;
    SET_GPR_U32(ctx, 31, 0x132DF4u);
    ctx->pc = 0x132DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DECu;
    // 0x132df0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x132DECu, 0x132DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DF4u;
label_132df4:
    // 0x132df4: 0x10000068  b           . + 4 + (0x68 << 2)
label_132df8:
    if (ctx->pc == 0x132DF8u) {
        ctx->pc = 0x132DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DF4u;
        // 0x132df8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DFCu;
        goto label_132dfc;
    }
    ctx->pc = 0x132DF4u;
    {
        const bool branch_taken_0x132df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DF4u;
        // 0x132df8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132df4) {
            ctx->pc = 0x132F98u;
            return;
        }
    }
    ctx->pc = 0x132DFCu;
label_132dfc:
    // 0x132dfc: 0x0  nop
    ctx->pc = 0x132dfcu;
    // NOP
    ctx->pc = 0x132e00u;
}
