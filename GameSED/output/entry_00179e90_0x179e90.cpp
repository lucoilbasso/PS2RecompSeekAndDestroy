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

// Function: entry_00179e90
// Address: 0x179e90 - 0x179ed0
void entry_00179e90_0x179e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179e90_0x179e90");
#endif

    switch (ctx->pc) {
        case 0x179e9cu: goto label_179e9c;
        case 0x179eb8u: goto label_179eb8;
        default: break;
    }

    ctx->pc = 0x179e90u;

label_179e90:
    // 0x179e90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x179e94: 0xc071938  jal         func_1C64E0
    ctx->pc = 0x179E94u;
    SET_GPR_U32(ctx, 31, 0x179E9Cu);
    ctx->pc = 0x179E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E94u;
    // 0x179e98: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C64E0u, 0x179E94u, 0x179E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E9Cu;
label_179e9c:
    // 0x179e9c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x179E9Cu;
    {
        const bool branch_taken_0x179e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179e9c) {
            ctx->pc = 0x179EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179E9Cu;
            // 0x179ea0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179e90;
        }
    }
    ctx->pc = 0x179EA4u;
    // 0x179ea4: 0x26104030  addiu       $s0, $s0, 0x4030
    ctx->pc = 0x179ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16432));
    // 0x179ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eb0: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179EB0u;
    SET_GPR_U32(ctx, 31, 0x179EB8u);
    ctx->pc = 0x179EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EB0u;
    // 0x179eb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179EB0u, 0x179EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179EB8u;
label_179eb8:
    // 0x179eb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179ebc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179EBCu;
    {
        const bool branch_taken_0x179ebc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x179EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EBCu;
        // 0x179ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ebc) {
            ctx->pc = 0x179ED0u;
            return;
        }
    }
    ctx->pc = 0x179EC4u;
    // 0x179ec4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x179EC4u;
    {
        const bool branch_taken_0x179ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EC4u;
        // 0x179ec8: 0xae240028  sw          $a0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ec4) {
            ctx->pc = 0x179F08u;
            return;
        }
    }
    ctx->pc = 0x179ECCu;
    // 0x179ecc: 0x0  nop
    ctx->pc = 0x179eccu;
    // NOP
    ctx->pc = 0x179ed0u;
}
