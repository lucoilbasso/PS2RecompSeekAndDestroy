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

// Function: entry_00179a10
// Address: 0x179a10 - 0x179a50
void entry_00179a10_0x179a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179a10_0x179a10");
#endif

    switch (ctx->pc) {
        case 0x179a1cu: goto label_179a1c;
        case 0x179a38u: goto label_179a38;
        default: break;
    }

    ctx->pc = 0x179a10u;

label_179a10:
    // 0x179a10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a14: 0xc071546  jal         func_1C5518
    ctx->pc = 0x179A14u;
    SET_GPR_U32(ctx, 31, 0x179A1Cu);
    ctx->pc = 0x179A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A14u;
    // 0x179a18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5518u, 0x179A14u, 0x179A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A1Cu;
label_179a1c:
    // 0x179a1c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x179A1Cu;
    {
        const bool branch_taken_0x179a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A1Cu;
        // 0x179a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a1c) {
            ctx->pc = 0x179A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179a10;
        }
    }
    ctx->pc = 0x179A24u;
    // 0x179a24: 0x26704030  addiu       $s0, $s3, 0x4030
    ctx->pc = 0x179a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16432));
    // 0x179a28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a30: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179A30u;
    SET_GPR_U32(ctx, 31, 0x179A38u);
    ctx->pc = 0x179A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A30u;
    // 0x179a34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179A30u, 0x179A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A38u;
label_179a38:
    // 0x179a38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179a3c: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x179A3Cu;
    {
        const bool branch_taken_0x179a3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x179A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A3Cu;
        // 0x179a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a3c) {
            ctx->pc = 0x179A5Cu;
            return;
        }
    }
    ctx->pc = 0x179A44u;
    // 0x179a44: 0x2882ffff  slti        $v0, $a0, -0x1
    ctx->pc = 0x179a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x179a48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x179A48u;
    {
        const bool branch_taken_0x179a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179a48) {
            ctx->pc = 0x179A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179A48u;
            // 0x179a4c: 0x2882fffb  slti        $v0, $a0, -0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967291) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A50u;
            return;
        }
    }
    ctx->pc = 0x179A50u;
}
