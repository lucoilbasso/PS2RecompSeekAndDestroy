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

// Function: entry_0018c388
// Address: 0x18c388 - 0x18c3c0
void entry_0018c388_0x18c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c388_0x18c388");
#endif

    switch (ctx->pc) {
        case 0x18c390u: goto label_18c390;
        default: break;
    }

    ctx->pc = 0x18c388u;

label_18c388:
    // 0x18c388: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x18C388u;
    SET_GPR_U32(ctx, 31, 0x18C390u);
    ctx->pc = 0x18C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C388u;
    // 0x18c38c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x18C388u, 0x18C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C390u;
label_18c390:
    // 0x18c390: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x18c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x18c394: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18C394u;
    {
        const bool branch_taken_0x18c394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C394u;
        // 0x18c398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c394) {
            ctx->pc = 0x18C388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c388;
        }
    }
    ctx->pc = 0x18C39Cu;
    // 0x18c39c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18c39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18c3a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C3A0u;
    {
        const bool branch_taken_0x18c3a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3A0u;
        // 0x18c3a4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3a0) {
            ctx->pc = 0x18C3C0u;
            return;
        }
    }
    ctx->pc = 0x18C3A8u;
    // 0x18c3a8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x18c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18c3ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18c3b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c3b4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x18c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x18c3b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C3B8u;
    {
        const bool branch_taken_0x18c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3B8u;
        // 0x18c3bc: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3b8) {
            ctx->pc = 0x18C3C8u;
            return;
        }
    }
    ctx->pc = 0x18C3C0u;
}
