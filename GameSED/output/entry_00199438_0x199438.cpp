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

// Function: entry_00199438
// Address: 0x199438 - 0x199468
void entry_00199438_0x199438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199438_0x199438");
#endif

    switch (ctx->pc) {
        case 0x19945cu: goto label_19945c;
        default: break;
    }

    ctx->pc = 0x199438u;

label_199438:
    // 0x199438: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x199438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_19943c:
    // 0x19943c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_199440:
    // 0x199440: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_199444:
    if (ctx->pc == 0x199444u) {
        ctx->pc = 0x199444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199440u;
        // 0x199444: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199448u;
        goto label_199448;
    }
    ctx->pc = 0x199440u;
    {
        const bool branch_taken_0x199440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199440u;
        // 0x199444: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199440) {
            ctx->pc = 0x199470u;
            return;
        }
    }
    ctx->pc = 0x199448u;
label_199448:
    // 0x199448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19944c:
    // 0x19944c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_199450:
    if (ctx->pc == 0x199450u) {
        ctx->pc = 0x199450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19944Cu;
        // 0x199450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199454u;
        goto label_199454;
    }
    ctx->pc = 0x19944Cu;
    {
        const bool branch_taken_0x19944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19944Cu;
        // 0x199450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19944c) {
            ctx->pc = 0x199468u;
            return;
        }
    }
    ctx->pc = 0x199454u;
label_199454:
    // 0x199454: 0x40f809  jalr        $v0
label_199458:
    if (ctx->pc == 0x199458u) {
        ctx->pc = 0x199458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199454u;
        // 0x199458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19945Cu;
        goto label_19945c;
    }
    ctx->pc = 0x199454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19945Cu);
        ctx->pc = 0x199458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199454u;
        // 0x199458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199454u, 0x19945Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19945Cu;
label_19945c:
    // 0x19945c: 0x10000005  b           . + 4 + (0x5 << 2)
label_199460:
    if (ctx->pc == 0x199460u) {
        ctx->pc = 0x199460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19945Cu;
        // 0x199460: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199464u;
        goto label_199464;
    }
    ctx->pc = 0x19945Cu;
    {
        const bool branch_taken_0x19945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19945Cu;
        // 0x199460: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19945c) {
            ctx->pc = 0x199474u;
            return;
        }
    }
    ctx->pc = 0x199464u;
label_199464:
    // 0x199464: 0x0  nop
    ctx->pc = 0x199464u;
    // NOP
    ctx->pc = 0x199468u;
}
