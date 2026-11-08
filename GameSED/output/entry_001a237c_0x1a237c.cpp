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

// Function: entry_001a237c
// Address: 0x1a237c - 0x1a23ac
void entry_001a237c_0x1a237c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a237c_0x1a237c");
#endif

    switch (ctx->pc) {
        case 0x1a2384u: goto label_1a2384;
        default: break;
    }

    ctx->pc = 0x1a237cu;

    // 0x1a237c: 0xc0686dc  jal         func_1A1B70
    ctx->pc = 0x1A237Cu;
    SET_GPR_U32(ctx, 31, 0x1A2384u);
    ctx->pc = 0x1A2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A237Cu;
    // 0x1a2380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1B70u, 0x1A237Cu, 0x1A2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2384u;
label_1a2384:
    // 0x1a2384: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1a2384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x1a2388: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a2388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a238c: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1a238cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a2390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2394: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1a2394u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2398: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1a2398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1a239c: 0xae27001c  sw          $a3, 0x1C($s1)
    ctx->pc = 0x1a239cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 7));
    // 0x1a23a0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1a23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1a23a4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1a23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1a23a8: 0xaf839070  sw          $v1, -0x6F90($gp)
    ctx->pc = 0x1a23a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 3));
    ctx->pc = 0x1a23acu;
}
