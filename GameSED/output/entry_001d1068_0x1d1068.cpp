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

// Function: entry_001d1068
// Address: 0x1d1068 - 0x1d1088
void entry_001d1068_0x1d1068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1068_0x1d1068");
#endif

    ctx->pc = 0x1d1068u;

    // 0x1d1068: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1d1068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1d106c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d1070: 0x9084c2a9  lbu         $a0, -0x3D57($a0)
    ctx->pc = 0x1d1070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294951593)));
    // 0x1d1074: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1d1074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d1078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1078u;
    {
        const bool branch_taken_0x1d1078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1078u;
        // 0x1d107c: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1078) {
            ctx->pc = 0x1D1088u;
            return;
        }
    }
    ctx->pc = 0x1D1080u;
    // 0x1d1080: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D1080u;
    {
        const bool branch_taken_0x1d1080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1080u;
        // 0x1d1084: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1080) {
            ctx->pc = 0x1D1018u;
            return;
        }
    }
    ctx->pc = 0x1D1088u;
}
