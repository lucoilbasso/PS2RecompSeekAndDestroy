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

// Function: entry_001a9660
// Address: 0x1a9660 - 0x1a96a0
void entry_001a9660_0x1a9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9660_0x1a9660");
#endif

    switch (ctx->pc) {
        case 0x1a9674u: goto label_1a9674;
        default: break;
    }

    ctx->pc = 0x1a9660u;

label_1a9660:
    // 0x1a9660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9664: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9668: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a966c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A966Cu;
    SET_GPR_U32(ctx, 31, 0x1A9674u);
    ctx->pc = 0x1A9670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A966Cu;
    // 0x1a9670: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A966Cu, 0x1A9674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9674u;
label_1a9674:
    // 0x1a9674: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9678: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a9678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a967c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a967cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9684: 0x1053001c  beq         $v0, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A9684u;
    {
        const bool branch_taken_0x1a9684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9684u;
        // 0x1a9688: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9684) {
            ctx->pc = 0x1A96F8u;
            return;
        }
    }
    ctx->pc = 0x1A968Cu;
    // 0x1a968c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9690: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A9690u;
    {
        const bool branch_taken_0x1a9690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a9690) {
            ctx->pc = 0x1A9694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9690u;
            // 0x1a9694: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9660;
        }
    }
    ctx->pc = 0x1A9698u;
    // 0x1a9698: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A9698u;
    {
        const bool branch_taken_0x1a9698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9698u;
        // 0x1a969c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9698) {
            ctx->pc = 0x1A96FCu;
            return;
        }
    }
    ctx->pc = 0x1A96A0u;
}
