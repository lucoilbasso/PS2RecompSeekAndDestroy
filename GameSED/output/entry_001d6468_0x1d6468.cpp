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

// Function: entry_001d6468
// Address: 0x1d6468 - 0x1d6488
void entry_001d6468_0x1d6468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6468_0x1d6468");
#endif

    ctx->pc = 0x1d6468u;

    // 0x1d6468: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d6468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d646c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6470: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d6474: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d6474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6478: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x1d6478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x1d647c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d6480: 0xc07594c  jal         func_1D6530
    ctx->pc = 0x1D6480u;
    SET_GPR_U32(ctx, 31, 0x1D6488u);
    ctx->pc = 0x1D6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6480u;
    // 0x1d6484: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6530u, 0x1D6480u, 0x1D6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6488u;
}
