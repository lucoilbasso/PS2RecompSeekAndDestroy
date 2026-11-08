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

// Function: entry_0011c028
// Address: 0x11c028 - 0x11c064
void entry_0011c028_0x11c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c028_0x11c028");
#endif

    ctx->pc = 0x11c028u;

label_11c028:
    // 0x11c028: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c02c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11c030: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c034: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x11c034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x11c038: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c03c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11c03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11c040: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11c040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11c044: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11c044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11c048: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11c04c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11c04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11c050: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11c050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11c054: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c058: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x11C058u;
    {
        const bool branch_taken_0x11c058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C058u;
        // 0x11c05c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c058) {
            ctx->pc = 0x11C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c028;
        }
    }
    ctx->pc = 0x11C060u;
    // 0x11c060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11c060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x11c064u;
}
