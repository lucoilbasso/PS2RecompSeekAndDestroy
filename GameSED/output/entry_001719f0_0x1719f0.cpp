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

// Function: entry_001719f0
// Address: 0x1719f0 - 0x171a24
void entry_001719f0_0x1719f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001719f0_0x1719f0");
#endif

    ctx->pc = 0x1719f0u;

label_1719f0:
    // 0x1719f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1719f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1719f4: 0x0  nop
    ctx->pc = 0x1719f4u;
    // NOP
    // 0x1719f8: 0x0  nop
    ctx->pc = 0x1719f8u;
    // NOP
    // 0x1719fc: 0x0  nop
    ctx->pc = 0x1719fcu;
    // NOP
    // 0x171a00: 0x0  nop
    ctx->pc = 0x171a00u;
    // NOP
    // 0x171a04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x171A04u;
    {
        const bool branch_taken_0x171a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A04u;
        // 0x171a08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a04) {
            ctx->pc = 0x1719F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1719f0;
        }
    }
    ctx->pc = 0x171A0Cu;
    // 0x171a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a1c: 0x805c600  j           func_171800
    ctx->pc = 0x171A1Cu;
    ctx->pc = 0x171A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A1Cu;
    // 0x171a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171800u;
    videoDecSetState_0x171800(rdram, ctx, runtime); return;
    ctx->pc = 0x171A24u;
}
