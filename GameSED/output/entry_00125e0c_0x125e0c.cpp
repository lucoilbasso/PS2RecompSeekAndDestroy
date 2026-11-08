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

// Function: entry_00125e0c
// Address: 0x125e0c - 0x125e50
void entry_00125e0c_0x125e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125e0c_0x125e0c");
#endif

    switch (ctx->pc) {
        case 0x125e1cu: goto label_125e1c;
        case 0x125e38u: goto label_125e38;
        default: break;
    }

    ctx->pc = 0x125e0cu;

    // 0x125e0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x125e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e14: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125E14u;
    SET_GPR_U32(ctx, 31, 0x125E1Cu);
    ctx->pc = 0x125E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E14u;
    // 0x125e18: 0x24a5eb70  addiu       $a1, $a1, -0x1490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125E14u, 0x125E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E1Cu;
label_125e1c:
    // 0x125e1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x125e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x125e20: 0x24a5ebf0  addiu       $a1, $a1, -0x1410
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962160));
    // 0x125e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x125e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x125e2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x125e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x125e30: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125E30u;
    SET_GPR_U32(ctx, 31, 0x125E38u);
    ctx->pc = 0x125E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E30u;
    // 0x125e34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125E30u, 0x125E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E38u;
label_125e38:
    // 0x125e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125e3c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x125e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x125e40: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x125e40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e44: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x125e44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x125e48: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x125e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x125e4c: 0x0  nop
    ctx->pc = 0x125e4cu;
    // NOP
    ctx->pc = 0x125e50u;
}
