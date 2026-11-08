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

// Function: entry_0015a3d0
// Address: 0x15a3d0 - 0x15a41c
void entry_0015a3d0_0x15a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a3d0_0x15a3d0");
#endif

    ctx->pc = 0x15a3d0u;

label_15a3d0:
    // 0x15a3d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15a3d4:
    // 0x15a3d4: 0x26710060  addiu       $s1, $s3, 0x60
    ctx->pc = 0x15a3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_15a3d8:
    // 0x15a3d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15a3dc:
    // 0x15a3dc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15a3e0:
    // 0x15a3e0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15a3e4:
    // 0x15a3e4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a3e8:
    // 0x15a3e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15a3ec:
    // 0x15a3ec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15a3f0:
    // 0x15a3f0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_15a3f4:
    // 0x15a3f4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_15a3f8:
    // 0x15a3f8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a3fc:
    if (ctx->pc == 0x15A3FCu) {
        ctx->pc = 0x15A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3F8u;
        // 0x15a3fc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A400u;
        goto label_15a400;
    }
    ctx->pc = 0x15A3F8u;
    {
        const bool branch_taken_0x15a3f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3F8u;
        // 0x15a3fc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3f8) {
            ctx->pc = 0x15A41Cu;
            return;
        }
    }
    ctx->pc = 0x15A400u;
label_15a400:
    // 0x15a400: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a404:
    // 0x15a404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a408:
    // 0x15a408: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a40c:
    // 0x15a40c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a410:
    // 0x15a410: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a414:
    // 0x15a414: 0x60f809  jalr        $v1
label_15a418:
    if (ctx->pc == 0x15A418u) {
        ctx->pc = 0x15A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A414u;
        // 0x15a418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A41Cu;
        goto label_fallthrough_0x15a414;
    }
    ctx->pc = 0x15A414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A41Cu);
        ctx->pc = 0x15A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A414u;
        // 0x15a418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A414u, 0x15A41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a414:
    ctx->pc = 0x15A41Cu;
}
