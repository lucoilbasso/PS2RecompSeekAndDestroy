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

// Function: entry_001a2d94
// Address: 0x1a2d94 - 0x1a2dc8
void entry_001a2d94_0x1a2d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d94_0x1a2d94");
#endif

    switch (ctx->pc) {
        case 0x1a2dbcu: goto label_1a2dbc;
        default: break;
    }

    ctx->pc = 0x1a2d94u;

label_1a2d94:
    // 0x1a2d94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a2d98:
    // 0x1a2d98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d9c:
    // 0x1a2d9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a2da0:
    // 0x1a2da0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a2da4:
    // 0x1a2da4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a2da8:
    // 0x1a2da8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a2dac:
    if (ctx->pc == 0x1A2DACu) {
        ctx->pc = 0x1A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DA8u;
        // 0x1a2dac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DB0u;
        goto label_1a2db0;
    }
    ctx->pc = 0x1A2DA8u;
    {
        const bool branch_taken_0x1a2da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DA8u;
        // 0x1a2dac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2da8) {
            ctx->pc = 0x1A2DC8u;
            return;
        }
    }
    ctx->pc = 0x1A2DB0u;
label_1a2db0:
    // 0x1a2db0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a2db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a2db4:
    // 0x1a2db4: 0x40f809  jalr        $v0
label_1a2db8:
    if (ctx->pc == 0x1A2DB8u) {
        ctx->pc = 0x1A2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DB4u;
        // 0x1a2db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DBCu;
        goto label_1a2dbc;
    }
    ctx->pc = 0x1A2DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2DBCu);
        ctx->pc = 0x1A2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DB4u;
        // 0x1a2db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2DB4u, 0x1A2DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2DBCu;
label_1a2dbc:
    // 0x1a2dbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a2dc0:
    if (ctx->pc == 0x1A2DC0u) {
        ctx->pc = 0x1A2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DBCu;
        // 0x1a2dc0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DC4u;
        goto label_1a2dc4;
    }
    ctx->pc = 0x1A2DBCu;
    {
        const bool branch_taken_0x1a2dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DBCu;
        // 0x1a2dc0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2dbc) {
            ctx->pc = 0x1A2DE0u;
            return;
        }
    }
    ctx->pc = 0x1A2DC4u;
label_1a2dc4:
    // 0x1a2dc4: 0x0  nop
    ctx->pc = 0x1a2dc4u;
    // NOP
    ctx->pc = 0x1a2dc8u;
}
