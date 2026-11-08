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

// Function: entry_0017b118
// Address: 0x17b118 - 0x17b148
void entry_0017b118_0x17b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b118_0x17b118");
#endif

    ctx->pc = 0x17b118u;

label_17b118:
    // 0x17b118: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b11c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17b11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17b120: 0xac82fffc  sw          $v0, -0x4($a0)
    ctx->pc = 0x17b120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
    // 0x17b124: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17b128: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17b12c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17b130: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17B130u;
    {
        const bool branch_taken_0x17b130 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B130u;
        // 0x17b134: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b130) {
            ctx->pc = 0x17B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b118;
        }
    }
    ctx->pc = 0x17B138u;
    // 0x17b138: 0xae401800  sw          $zero, 0x1800($s2)
    ctx->pc = 0x17b138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6144), GPR_U32(ctx, 0));
    // 0x17b13c: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x17b13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17b140: 0x2642016c  addiu       $v0, $s2, 0x16C
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
    // 0x17b144: 0x0  nop
    ctx->pc = 0x17b144u;
    // NOP
    ctx->pc = 0x17b148u;
}
