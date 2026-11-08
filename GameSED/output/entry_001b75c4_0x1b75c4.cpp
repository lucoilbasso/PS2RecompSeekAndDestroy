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

// Function: entry_001b75c4
// Address: 0x1b75c4 - 0x1b75fc
void entry_001b75c4_0x1b75c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b75c4_0x1b75c4");
#endif

    switch (ctx->pc) {
        case 0x1b75f8u: goto label_1b75f8;
        default: break;
    }

    ctx->pc = 0x1b75c4u;

    // 0x1b75c4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b75c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1b75c8: 0x2463bab8  addiu       $v1, $v1, -0x4548
    ctx->pc = 0x1b75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949560));
    // 0x1b75cc: 0x8ca4bab0  lw          $a0, -0x4550($a1)
    ctx->pc = 0x1b75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40BAB0u));
    // 0x1b75d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b75d4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1b75d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1b75d8: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1b75d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b75dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b75e0: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1b75e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b75e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b75e8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b75e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75ec: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1b75ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b75f0: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B75F0u;
    SET_GPR_U32(ctx, 31, 0x1B75F8u);
    ctx->pc = 0x1B75F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75F0u;
    // 0x1b75f4: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B75F0u, 0x1B75F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75F8u;
label_1b75f8:
    // 0x1b75f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b75f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b75fcu;
}
