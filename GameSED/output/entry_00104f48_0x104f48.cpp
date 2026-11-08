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

// Function: entry_00104f48
// Address: 0x104f48 - 0x104f60
void entry_00104f48_0x104f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f48_0x104f48");
#endif

    switch (ctx->pc) {
        case 0x104f5cu: goto label_104f5c;
        default: break;
    }

    ctx->pc = 0x104f48u;

    // 0x104f48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x104f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f4c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x104f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104f50: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104f54: 0xc060e56  jal         func_183958
    ctx->pc = 0x104F54u;
    SET_GPR_U32(ctx, 31, 0x104F5Cu);
    ctx->pc = 0x104F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F54u;
    // 0x104f58: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x104F54u, 0x104F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F5Cu;
label_104f5c:
    // 0x104f5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x104f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x104f60u;
}
