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

// Function: entry_0015bd98
// Address: 0x15bd98 - 0x15bdb0
void entry_0015bd98_0x15bd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd98_0x15bd98");
#endif

    ctx->pc = 0x15bd98u;

    // 0x15bd98: 0x26c20050  addiu       $v0, $s6, 0x50
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x15bd9c: 0x26c4ffb0  addiu       $a0, $s6, -0x50
    ctx->pc = 0x15bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967216));
    // 0x15bda0: 0x39230004  xori        $v1, $t1, 0x4
    ctx->pc = 0x15bda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)4);
    // 0x15bda4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15bda4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bda8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15BDA8u;
    {
        const bool branch_taken_0x15bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDA8u;
        // 0x15bdac: 0x26f500e0  addiu       $s5, $s7, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bda8) {
            ctx->pc = 0x15BDC4u;
            return;
        }
    }
    ctx->pc = 0x15BDB0u;
}
