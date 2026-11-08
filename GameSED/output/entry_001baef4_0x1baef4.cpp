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

// Function: entry_001baef4
// Address: 0x1baef4 - 0x1baf0c
void entry_001baef4_0x1baef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baef4_0x1baef4");
#endif

    switch (ctx->pc) {
        case 0x1baf08u: goto label_1baf08;
        default: break;
    }

    ctx->pc = 0x1baef4u;

    // 0x1baef4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1baef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1baef8: 0x8e64c0ac  lw          $a0, -0x3F54($s3)
    ctx->pc = 0x1baef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951084)));
    // 0x1baefc: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1baefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1baf00: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BAF00u;
    SET_GPR_U32(ctx, 31, 0x1BAF08u);
    ctx->pc = 0x1BAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF00u;
    // 0x1baf04: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BAF00u, 0x1BAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF08u;
label_1baf08:
    // 0x1baf08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1baf08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1baf0cu;
}
