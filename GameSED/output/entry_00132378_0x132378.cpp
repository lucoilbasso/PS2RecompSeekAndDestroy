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

// Function: entry_00132378
// Address: 0x132378 - 0x1323b0
void entry_00132378_0x132378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132378_0x132378");
#endif

    switch (ctx->pc) {
        case 0x132384u: goto label_132384;
        default: break;
    }

    ctx->pc = 0x132378u;

    // 0x132378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x132378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13237c: 0xc048464  jal         func_121190
    ctx->pc = 0x13237Cu;
    SET_GPR_U32(ctx, 31, 0x132384u);
    ctx->pc = 0x132380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13237Cu;
    // 0x132380: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121190u, 0x13237Cu, 0x132384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132384u;
label_132384:
    // 0x132384: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132388: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x132388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x13238c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132390: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x132390u;
    {
        const bool branch_taken_0x132390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x132394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132390u;
        // 0x132394: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132390) {
            ctx->pc = 0x1323B0u;
            return;
        }
    }
    ctx->pc = 0x132398u;
    // 0x132398: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x132398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13239c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x13239cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1323a0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1323a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1323a4: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1323a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1323a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1323A8u;
    {
        const bool branch_taken_0x1323a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323A8u;
        // 0x1323ac: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323a8) {
            ctx->pc = 0x1323FCu;
            return;
        }
    }
    ctx->pc = 0x1323B0u;
}
