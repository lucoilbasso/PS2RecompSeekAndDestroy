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

// Function: entry_00164ee4
// Address: 0x164ee4 - 0x164f10
void entry_00164ee4_0x164ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164ee4_0x164ee4");
#endif

    ctx->pc = 0x164ee4u;

label_164ee4:
    // 0x164ee4: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
label_164ee8:
    if (ctx->pc == 0x164EE8u) {
        ctx->pc = 0x164EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EE4u;
        // 0x164ee8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EECu;
        goto label_164eec;
    }
    ctx->pc = 0x164EE4u;
    {
        const bool branch_taken_0x164ee4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x164EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EE4u;
        // 0x164ee8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ee4) {
            ctx->pc = 0x164EC8u;
            return;
        }
    }
    ctx->pc = 0x164EECu;
label_164eec:
    // 0x164eec: 0x8e061230  lw          $a2, 0x1230($s0)
    ctx->pc = 0x164eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_164ef0:
    // 0x164ef0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_164ef4:
    if (ctx->pc == 0x164EF4u) {
        ctx->pc = 0x164EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EF0u;
        // 0x164ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EF8u;
        goto label_164ef8;
    }
    ctx->pc = 0x164EF0u;
    {
        const bool branch_taken_0x164ef0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EF0u;
        // 0x164ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ef0) {
            ctx->pc = 0x164F10u;
            return;
        }
    }
    ctx->pc = 0x164EF8u;
label_164ef8:
    // 0x164ef8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_164efc:
    // 0x164efc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_164f00:
    // 0x164f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_164f04:
    // 0x164f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_164f08:
    // 0x164f08: 0x60f809  jalr        $v1
label_164f0c:
    if (ctx->pc == 0x164F0Cu) {
        ctx->pc = 0x164F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F08u;
        // 0x164f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F10u;
        goto label_fallthrough_0x164f08;
    }
    ctx->pc = 0x164F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164F10u);
        ctx->pc = 0x164F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F08u;
        // 0x164f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F08u, 0x164F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x164f08:
    ctx->pc = 0x164F10u;
}
