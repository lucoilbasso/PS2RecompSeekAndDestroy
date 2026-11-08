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

// Function: entry_00156640
// Address: 0x156640 - 0x156688
void entry_00156640_0x156640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156640_0x156640");
#endif

    switch (ctx->pc) {
        case 0x15665cu: goto label_15665c;
        default: break;
    }

    ctx->pc = 0x156640u;

    // 0x156640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x156644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x156648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x156648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15664c: 0x8e3001ac  lw          $s0, 0x1AC($s1)
    ctx->pc = 0x15664cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x156650: 0x8c520020  lw          $s2, 0x20($v0)
    ctx->pc = 0x156650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x156654: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x156654u;
    SET_GPR_U32(ctx, 31, 0x15665Cu);
    ctx->pc = 0x156658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156654u;
    // 0x156658: 0x8e130014  lw          $s3, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x156654u, 0x15665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15665Cu;
label_15665c:
    // 0x15665c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15665Cu;
    {
        const bool branch_taken_0x15665c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15665c) {
            ctx->pc = 0x156688u;
            return;
        }
    }
    ctx->pc = 0x156664u;
    // 0x156664: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x156664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x156668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x156668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15666c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15666Cu;
    {
        const bool branch_taken_0x15666c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15666Cu;
        // 0x156670: 0x240324d0  addiu       $v1, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15666c) {
            ctx->pc = 0x156688u;
            return;
        }
    }
    ctx->pc = 0x156674u;
    // 0x156674: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x156674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x156678: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x156678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15667c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x156680: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x156680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x156684: 0x8694d170  lh          $s4, -0x2E90($s4)
    ctx->pc = 0x156684u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294955376)));
    ctx->pc = 0x156688u;
}
