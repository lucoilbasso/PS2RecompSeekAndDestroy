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

// Function: entry_0016045c
// Address: 0x16045c - 0x160498
void entry_0016045c_0x16045c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016045c_0x16045c");
#endif

    switch (ctx->pc) {
        case 0x160470u: goto label_160470;
        default: break;
    }

    ctx->pc = 0x16045cu;

    // 0x16045c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x160460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x160464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x160464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x160468: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x160468u;
    SET_GPR_U32(ctx, 31, 0x160470u);
    ctx->pc = 0x16046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160468u;
    // 0x16046c: 0x8630000e  lh          $s0, 0xE($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160468u, 0x160470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160470u;
label_160470:
    // 0x160470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160474: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x160478: 0x14520017  bne         $v0, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x160478u;
    {
        const bool branch_taken_0x160478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x16047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160478u;
        // 0x16047c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160478) {
            ctx->pc = 0x1604D8u;
            return;
        }
    }
    ctx->pc = 0x160480u;
    // 0x160480: 0xaf848b38  sw          $a0, -0x74C8($gp)
    ctx->pc = 0x160480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 4));
    // 0x160484: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x160484u;
    {
        const bool branch_taken_0x160484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x160488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160484u;
        // 0x160488: 0xaf808b3c  sw          $zero, -0x74C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160484) {
            ctx->pc = 0x160498u;
            return;
        }
    }
    ctx->pc = 0x16048Cu;
    // 0x16048c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x160490: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x160490u;
    {
        const bool branch_taken_0x160490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160490u;
        // 0x160494: 0xa440a294  sh          $zero, -0x5D6C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294943380), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160490) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x160498u;
}
