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

// Function: entry_001bf43c
// Address: 0x1bf43c - 0x1bf484
void entry_001bf43c_0x1bf43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf43c_0x1bf43c");
#endif

    switch (ctx->pc) {
        case 0x1bf474u: goto label_1bf474;
        default: break;
    }

    ctx->pc = 0x1bf43cu;

    // 0x1bf43c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1bf43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf444: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1bf444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf44c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bf44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1bf450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf454: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bf454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1bf458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf45c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf460: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf464: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf468: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf46c: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF46Cu;
    SET_GPR_U32(ctx, 31, 0x1BF474u);
    ctx->pc = 0x1BF470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF46Cu;
    // 0x1bf470: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF46Cu, 0x1BF474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF474u;
label_1bf474:
    // 0x1bf474: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1bf478: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF478u;
    {
        const bool branch_taken_0x1bf478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf478) {
            ctx->pc = 0x1BF47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF478u;
            // 0x1bf47c: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF484u;
            return;
        }
    }
    ctx->pc = 0x1BF480u;
    // 0x1bf480: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    ctx->pc = 0x1bf484u;
}
