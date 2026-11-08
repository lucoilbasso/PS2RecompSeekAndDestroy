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

// Function: entry_0012ffc0
// Address: 0x12ffc0 - 0x12ffe8
void entry_0012ffc0_0x12ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ffc0_0x12ffc0");
#endif

    ctx->pc = 0x12ffc0u;

label_12ffc0:
    // 0x12ffc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ffc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12ffc8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12ffc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12ffcc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x12ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x12ffd0: 0x0  nop
    ctx->pc = 0x12ffd0u;
    // NOP
    // 0x12ffd4: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12FFD4u;
    {
        const bool branch_taken_0x12ffd4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x12FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFD4u;
        // 0x12ffd8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffd4) {
            ctx->pc = 0x12FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FFDCu;
    // 0x12ffdc: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x12ffdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12ffe0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x12FFE0u;
    {
        const bool branch_taken_0x12ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFE0u;
        // 0x12ffe4: 0xa6220066  sh          $v0, 0x66($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffe0) {
            ctx->pc = 0x130110u;
            return;
        }
    }
    ctx->pc = 0x12FFE8u;
}
