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

// Function: entry_001b9bb8
// Address: 0x1b9bb8 - 0x1b9bfc
void entry_001b9bb8_0x1b9bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9bb8_0x1b9bb8");
#endif

    switch (ctx->pc) {
        case 0x1b9bf0u: goto label_1b9bf0;
        default: break;
    }

    ctx->pc = 0x1b9bb8u;

    // 0x1b9bb8: 0x2450d600  addiu       $s0, $v0, -0x2A00
    ctx->pc = 0x1b9bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x1b9bbc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b9bc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b9bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b9bc4: 0x2484d3c0  addiu       $a0, $a0, -0x2C40
    ctx->pc = 0x1b9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
    // 0x1b9bc8: 0xac43d600  sw          $v1, -0x2A00($v0)
    ctx->pc = 0x1b9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956544), GPR_U32(ctx, 3));
    // 0x1b9bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9bd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b9bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bdc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1b9bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9be0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b9be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9be4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b9be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9be8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B9BE8u;
    SET_GPR_U32(ctx, 31, 0x1B9BF0u);
    ctx->pc = 0x1B9BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BE8u;
    // 0x1b9bec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B9BE8u, 0x1B9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9BF0u;
label_1b9bf0:
    // 0x1b9bf0: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9BF0u;
    {
        const bool branch_taken_0x1b9bf0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b9bf0) {
            ctx->pc = 0x1B9BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9BF0u;
            // 0x1b9bf4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9BFCu;
            return;
        }
    }
    ctx->pc = 0x1B9BF8u;
    // 0x1b9bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9bfcu;
}
