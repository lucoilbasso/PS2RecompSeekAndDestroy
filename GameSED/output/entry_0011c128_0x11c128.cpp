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

// Function: entry_0011c128
// Address: 0x11c128 - 0x11c158
void entry_0011c128_0x11c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c128_0x11c128");
#endif

    ctx->pc = 0x11c128u;

label_11c128:
    // 0x11c128: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c12c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11c130: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11c130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11c134: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11c134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11c138: 0x0  nop
    ctx->pc = 0x11c138u;
    // NOP
    // 0x11c13c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C13Cu;
    {
        const bool branch_taken_0x11c13c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x11C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C13Cu;
        // 0x11c140: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c13c) {
            ctx->pc = 0x11C128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c128;
        }
    }
    ctx->pc = 0x11C144u;
    // 0x11c144: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11c144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11c148: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11c148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c14c: 0x2456c0a8  addiu       $s6, $v0, -0x3F58
    ctx->pc = 0x11c14cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x11c150: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x11c150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c154: 0x0  nop
    ctx->pc = 0x11c154u;
    // NOP
    ctx->pc = 0x11c158u;
}
