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

// Function: entry_0010e274
// Address: 0x10e274 - 0x10e298
void entry_0010e274_0x10e274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e274_0x10e274");
#endif

    switch (ctx->pc) {
        case 0x10e284u: goto label_10e284;
        default: break;
    }

    ctx->pc = 0x10e274u;

    // 0x10e274: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10e274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10e278: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x10e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x10e27c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E27Cu;
    SET_GPR_U32(ctx, 31, 0x10E284u);
    ctx->pc = 0x10E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E27Cu;
    // 0x10e280: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E27Cu, 0x10E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E284u;
label_10e284:
    // 0x10e284: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e288: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x10e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x10e28c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x10e28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10e290: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x10E290u;
    {
        const bool branch_taken_0x10e290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E290u;
        // 0x10e294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e290) {
            ctx->pc = 0x10E4F8u;
            return;
        }
    }
    ctx->pc = 0x10E298u;
}
