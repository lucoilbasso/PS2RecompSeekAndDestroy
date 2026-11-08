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

// Function: entry_001c6464
// Address: 0x1c6464 - 0x1c64b4
void entry_001c6464_0x1c6464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6464_0x1c6464");
#endif

    switch (ctx->pc) {
        case 0x1c649cu: goto label_1c649c;
        default: break;
    }

    ctx->pc = 0x1c6464u;

    // 0x1c6464: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c6464u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c6468: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x1c6468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x1c646c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6470: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1c6470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1c6474: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c6474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6478: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1c6478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1c647c: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c647cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c6480: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c6480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c6484: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c6488: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c648c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c648cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c6490: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c6490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6494: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C6494u;
    SET_GPR_U32(ctx, 31, 0x1C649Cu);
    ctx->pc = 0x1C6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6494u;
    // 0x1c6498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C6494u, 0x1C649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C649Cu;
label_1c649c:
    // 0x1c649c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c649cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64a0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C64A0u;
    {
        const bool branch_taken_0x1c64a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64A0u;
        // 0x1c64a4: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64a0) {
            ctx->pc = 0x1C64B4u;
            return;
        }
    }
    ctx->pc = 0x1C64A8u;
    // 0x1c64a8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c64ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C64ACu;
    {
        const bool branch_taken_0x1c64ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64ACu;
        // 0x1c64b0: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64ac) {
            ctx->pc = 0x1C64BCu;
            return;
        }
    }
    ctx->pc = 0x1C64B4u;
}
