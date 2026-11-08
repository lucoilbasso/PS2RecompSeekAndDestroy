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

// Function: entry_001a7690
// Address: 0x1a7690 - 0x1a76c0
void entry_001a7690_0x1a7690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7690_0x1a7690");
#endif

    switch (ctx->pc) {
        case 0x1a76b8u: goto label_1a76b8;
        default: break;
    }

    ctx->pc = 0x1a7690u;

    // 0x1a7690: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7698: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a769c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a769cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a76a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a76a4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a76a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A76A8u;
    {
        const bool branch_taken_0x1a76a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76A8u;
        // 0x1a76ac: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76a8) {
            ctx->pc = 0x1A76C0u;
            return;
        }
    }
    ctx->pc = 0x1A76B0u;
    // 0x1a76b0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A76B0u;
    SET_GPR_U32(ctx, 31, 0x1A76B8u);
    ctx->pc = 0x1A76B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76B0u;
    // 0x1a76b4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A76B0u, 0x1A76B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A76B8u;
label_1a76b8:
    // 0x1a76b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A76B8u;
    {
        const bool branch_taken_0x1a76b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76B8u;
        // 0x1a76bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76b8) {
            ctx->pc = 0x1A76C4u;
            return;
        }
    }
    ctx->pc = 0x1A76C0u;
}
