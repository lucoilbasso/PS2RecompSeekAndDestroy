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

// Function: entry_001a8450
// Address: 0x1a8450 - 0x1a8498
void entry_001a8450_0x1a8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8450_0x1a8450");
#endif

    switch (ctx->pc) {
        case 0x1a848cu: goto label_1a848c;
        default: break;
    }

    ctx->pc = 0x1a8450u;

    // 0x1a8450: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x1a8450u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8454: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8458: 0x47300a  movz        $a2, $v0, $a3
    ctx->pc = 0x1a8458u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a845c: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1a845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1a8460: 0x83a40000  lb          $a0, 0x0($sp)
    ctx->pc = 0x1a8460u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8464: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A8464u;
    {
        const bool branch_taken_0x1a8464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8464u;
        // 0x1a8468: 0xad26001c  sw          $a2, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8464) {
            ctx->pc = 0x1A84D0u;
            return;
        }
    }
    ctx->pc = 0x1A846Cu;
    // 0x1a846c: 0x83a30001  lb          $v1, 0x1($sp)
    ctx->pc = 0x1a846cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1a8470: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1a8474: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8474u;
    {
        const bool branch_taken_0x1a8474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8474) {
            ctx->pc = 0x1A8478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8474u;
            // 0x1a8478: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8498u;
            return;
        }
    }
    ctx->pc = 0x1A847Cu;
    // 0x1a847c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a847cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a8480: 0x27a50002  addiu       $a1, $sp, 0x2
    ctx->pc = 0x1a8480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x1a8484: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A8484u;
    SET_GPR_U32(ctx, 31, 0x1A848Cu);
    ctx->pc = 0x1A8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8484u;
    // 0x1a8488: 0x2484d938  addiu       $a0, $a0, -0x26C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A8484u, 0x1A848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A848Cu;
label_1a848c:
    // 0x1a848c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8490: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A8490u;
    {
        const bool branch_taken_0x1a8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8490u;
        // 0x1a8494: 0xaf829080  sw          $v0, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8490) {
            ctx->pc = 0x1A850Cu;
            return;
        }
    }
    ctx->pc = 0x1A8498u;
}
