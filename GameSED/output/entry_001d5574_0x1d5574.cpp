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

// Function: entry_001d5574
// Address: 0x1d5574 - 0x1d55a0
void entry_001d5574_0x1d5574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5574_0x1d5574");
#endif

    switch (ctx->pc) {
        case 0x1d557cu: goto label_1d557c;
        default: break;
    }

    ctx->pc = 0x1d5574u;

    // 0x1d5574: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5574u;
    SET_GPR_U32(ctx, 31, 0x1D557Cu);
    ctx->pc = 0x1D5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5574u;
    // 0x1d5578: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5574u, 0x1D557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D557Cu;
label_1d557c:
    // 0x1d557c: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x1d557cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d5580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5588: 0xacb10014  sw          $s1, 0x14($a1)
    ctx->pc = 0x1d5588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 17));
    // 0x1d558c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d5590: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5590u;
    {
        const bool branch_taken_0x1d5590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5590u;
        // 0x1d5594: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5590) {
            ctx->pc = 0x1D55D0u;
            return;
        }
    }
    ctx->pc = 0x1D5598u;
    // 0x1d5598: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x1d5598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1d559c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1d55a0u;
}
