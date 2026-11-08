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

// Function: entry_001c540c
// Address: 0x1c540c - 0x1c545c
void entry_001c540c_0x1c540c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c540c_0x1c540c");
#endif

    switch (ctx->pc) {
        case 0x1c5444u: goto label_1c5444;
        default: break;
    }

    ctx->pc = 0x1c540cu;

    // 0x1c540c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c540cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c5410: 0x2447eec0  addiu       $a3, $v0, -0x1140
    ctx->pc = 0x1c5410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x1c5414: 0xac52eec0  sw          $s2, -0x1140($v0)
    ctx->pc = 0x1c5414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962880), GPR_U32(ctx, 18));
    // 0x1c5418: 0xacf00010  sw          $s0, 0x10($a3)
    ctx->pc = 0x1c5418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 16));
    // 0x1c541c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5420: 0xacf10014  sw          $s1, 0x14($a3)
    ctx->pc = 0x1c5420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 17));
    // 0x1c5424: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c5424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c5428: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c542c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5430: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5434: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c5434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c5438: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c543c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C543Cu;
    SET_GPR_U32(ctx, 31, 0x1C5444u);
    ctx->pc = 0x1C5440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C543Cu;
    // 0x1c5440: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C543Cu, 0x1C5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5444u;
label_1c5444:
    // 0x1c5444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5448: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5448u;
    {
        const bool branch_taken_0x1c5448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5448u;
        // 0x1c544c: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5448) {
            ctx->pc = 0x1C545Cu;
            return;
        }
    }
    ctx->pc = 0x1C5450u;
    // 0x1c5450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c5450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5454u;
    {
        const bool branch_taken_0x1c5454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5454u;
        // 0x1c5458: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5454) {
            ctx->pc = 0x1C5464u;
            return;
        }
    }
    ctx->pc = 0x1C545Cu;
}
