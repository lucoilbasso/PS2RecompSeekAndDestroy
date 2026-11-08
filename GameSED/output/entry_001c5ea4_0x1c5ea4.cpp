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

// Function: entry_001c5ea4
// Address: 0x1c5ea4 - 0x1c5ef4
void entry_001c5ea4_0x1c5ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5ea4_0x1c5ea4");
#endif

    switch (ctx->pc) {
        case 0x1c5edcu: goto label_1c5edc;
        default: break;
    }

    ctx->pc = 0x1c5ea4u;

    // 0x1c5ea4: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c5ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c5ea8: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x1c5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x1c5eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5eb0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1c5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1c5eb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c5eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5eb8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1c5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1c5ebc: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c5ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c5ec0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c5ec4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c5ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c5ec8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ecc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c5ed0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5ed4: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5ED4u;
    SET_GPR_U32(ctx, 31, 0x1C5EDCu);
    ctx->pc = 0x1C5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5ED4u;
    // 0x1c5ed8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5ED4u, 0x1C5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EDCu;
label_1c5edc:
    // 0x1c5edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ee0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5EE0u;
    {
        const bool branch_taken_0x1c5ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EE0u;
        // 0x1c5ee4: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ee0) {
            ctx->pc = 0x1C5EF4u;
            return;
        }
    }
    ctx->pc = 0x1C5EE8u;
    // 0x1c5ee8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c5eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5EECu;
    {
        const bool branch_taken_0x1c5eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EECu;
        // 0x1c5ef0: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5eec) {
            ctx->pc = 0x1C5EFCu;
            return;
        }
    }
    ctx->pc = 0x1C5EF4u;
}
