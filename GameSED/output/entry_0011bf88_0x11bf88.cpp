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

// Function: entry_0011bf88
// Address: 0x11bf88 - 0x11bfd8
void entry_0011bf88_0x11bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bf88_0x11bf88");
#endif

    ctx->pc = 0x11bf88u;

label_11bf88:
    // 0x11bf88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11bf8c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x11bf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x11bf90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x11bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11bf94: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x11bf94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x11bf98: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x11bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11bf9c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11bf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11bfa0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11bfa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bfa4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11bfa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11bfa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11bfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11bfac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11bfb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11bfb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bfb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11bfb8: 0x501fff3  bgez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11BFB8u;
    {
        const bool branch_taken_0x11bfb8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x11BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFB8u;
        // 0x11bfbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfb8) {
            ctx->pc = 0x11BF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bf88;
        }
    }
    ctx->pc = 0x11BFC0u;
    // 0x11bfc0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11bfc4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x11bfc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bfc8: 0x2456c0a8  addiu       $s6, $v0, -0x3F58
    ctx->pc = 0x11bfc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x11bfcc: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x11bfccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfd0: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x11bfd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x11bfd4: 0x0  nop
    ctx->pc = 0x11bfd4u;
    // NOP
    ctx->pc = 0x11bfd8u;
}
