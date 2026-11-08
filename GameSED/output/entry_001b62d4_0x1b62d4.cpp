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

// Function: entry_001b62d4
// Address: 0x1b62d4 - 0x1b6314
void entry_001b62d4_0x1b62d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b62d4_0x1b62d4");
#endif

    switch (ctx->pc) {
        case 0x1b6304u: goto label_1b6304;
        default: break;
    }

    ctx->pc = 0x1b62d4u;

    // 0x1b62d4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b62d8: 0x2607b400  addiu       $a3, $s0, -0x4C00
    ctx->pc = 0x1b62d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947840));
    // 0x1b62dc: 0xae11b400  sw          $s1, -0x4C00($s0)
    ctx->pc = 0x1b62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947840), GPR_U32(ctx, 17));
    // 0x1b62e0: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b62e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b62e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b62e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b62ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b62ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62f0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b62f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b62f4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b62f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b62f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b62fc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B62FCu;
    SET_GPR_U32(ctx, 31, 0x1B6304u);
    ctx->pc = 0x1B6300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62FCu;
    // 0x1b6300: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B62FCu, 0x1B6304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6304u;
label_1b6304:
    // 0x1b6304: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6304u;
    {
        const bool branch_taken_0x1b6304 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6304) {
            ctx->pc = 0x1B6308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6304u;
            // 0x1b6308: 0x8e02b400  lw          $v0, -0x4C00($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6314u;
            return;
        }
    }
    ctx->pc = 0x1B630Cu;
    // 0x1b630c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1b6314u;
}
