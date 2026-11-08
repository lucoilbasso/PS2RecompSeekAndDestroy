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

// Function: entry_00160cf4
// Address: 0x160cf4 - 0x160d1c
void entry_00160cf4_0x160cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160cf4_0x160cf4");
#endif

    switch (ctx->pc) {
        case 0x160d04u: goto label_160d04;
        default: break;
    }

    ctx->pc = 0x160cf4u;

    // 0x160cf4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x160cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160cf8: 0xa7a60002  sh          $a2, 0x2($sp)
    ctx->pc = 0x160cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x160cfc: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x160CFCu;
    SET_GPR_U32(ctx, 31, 0x160D04u);
    ctx->pc = 0x160D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CFCu;
    // 0x160d00: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x160CFCu, 0x160D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D04u;
label_160d04:
    // 0x160d04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160d08: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x160d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d14: 0xc063b10  jal         func_18EC40
    ctx->pc = 0x160D14u;
    SET_GPR_U32(ctx, 31, 0x160D1Cu);
    ctx->pc = 0x160D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D14u;
    // 0x160d18: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC40u, 0x160D14u, 0x160D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D1Cu;
}
