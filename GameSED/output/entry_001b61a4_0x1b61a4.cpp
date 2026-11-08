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

// Function: entry_001b61a4
// Address: 0x1b61a4 - 0x1b61e4
void entry_001b61a4_0x1b61a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b61a4_0x1b61a4");
#endif

    switch (ctx->pc) {
        case 0x1b61d4u: goto label_1b61d4;
        default: break;
    }

    ctx->pc = 0x1b61a4u;

    // 0x1b61a4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b61a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b61a8: 0x2607b400  addiu       $a3, $s0, -0x4C00
    ctx->pc = 0x1b61a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947840));
    // 0x1b61ac: 0xae11b400  sw          $s1, -0x4C00($s0)
    ctx->pc = 0x1b61acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947840), GPR_U32(ctx, 17));
    // 0x1b61b0: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b61b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b61b8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b61bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b61bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61c0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b61c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b61c4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b61c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b61cc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B61CCu;
    SET_GPR_U32(ctx, 31, 0x1B61D4u);
    ctx->pc = 0x1B61D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61CCu;
    // 0x1b61d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B61CCu, 0x1B61D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61D4u;
label_1b61d4:
    // 0x1b61d4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B61D4u;
    {
        const bool branch_taken_0x1b61d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b61d4) {
            ctx->pc = 0x1B61D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B61D4u;
            // 0x1b61d8: 0x8e02b400  lw          $v0, -0x4C00($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B61E4u;
            return;
        }
    }
    ctx->pc = 0x1B61DCu;
    // 0x1b61dc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b61e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b61e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1b61e4u;
}
