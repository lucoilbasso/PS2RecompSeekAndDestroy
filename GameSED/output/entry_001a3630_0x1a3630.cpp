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

// Function: entry_001a3630
// Address: 0x1a3630 - 0x1a3660
void entry_001a3630_0x1a3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3630_0x1a3630");
#endif

    ctx->pc = 0x1a3630u;

    // 0x1a3630: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A3630u;
    {
        const bool branch_taken_0x1a3630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3630u;
        // 0x1a3634: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3630) {
            ctx->pc = 0x1A36D0u;
            return;
        }
    }
    ctx->pc = 0x1A3638u;
    // 0x1a3638: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a363c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3640: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x1a3640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3644: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3644u;
    {
        const bool branch_taken_0x1a3644 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3644u;
        // 0x1a3648: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3644) {
            ctx->pc = 0x1A3698u;
            return;
        }
    }
    ctx->pc = 0x1A364Cu;
    // 0x1a364c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3650: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A3650u;
    {
        const bool branch_taken_0x1a3650 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3650u;
        // 0x1a3654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3650) {
            ctx->pc = 0x1A3690u;
            return;
        }
    }
    ctx->pc = 0x1A3658u;
    // 0x1a3658: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a3658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a365c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a365cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1a3660u;
}
