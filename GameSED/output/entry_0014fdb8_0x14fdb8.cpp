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

// Function: entry_0014fdb8
// Address: 0x14fdb8 - 0x14fde8
void entry_0014fdb8_0x14fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fdb8_0x14fdb8");
#endif

    switch (ctx->pc) {
        case 0x14fdc0u: goto label_14fdc0;
        default: break;
    }

    ctx->pc = 0x14fdb8u;

    // 0x14fdb8: 0xc066800  jal         func_19A000
    ctx->pc = 0x14FDB8u;
    SET_GPR_U32(ctx, 31, 0x14FDC0u);
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x14FDB8u, 0x14FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDC0u;
label_14fdc0:
    // 0x14fdc0: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x14fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x14fdc4: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14fdc8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x14fdc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x14fdcc: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x14fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x14fdd0: 0x3c05ffbf  lui         $a1, 0xFFBF
    ctx->pc = 0x14fdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65471 << 16));
    // 0x14fdd4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14fdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14fdd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14fdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14fddc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14fddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14fde0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x14fde0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x14fde4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->pc = 0x14fde8u;
}
