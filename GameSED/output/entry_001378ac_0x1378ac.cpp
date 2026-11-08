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

// Function: entry_001378ac
// Address: 0x1378ac - 0x1378e0
void entry_001378ac_0x1378ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001378ac_0x1378ac");
#endif

    ctx->pc = 0x1378acu;

    // 0x1378ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1378acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1378b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1378b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1378b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1378b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1378b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1378b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1378bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1378bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1378c0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1378c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1378c4: 0x8ee30170  lw          $v1, 0x170($s7)
    ctx->pc = 0x1378c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 368)));
    // 0x1378c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1378cc: 0x8c530200  lw          $s3, 0x200($v0)
    ctx->pc = 0x1378ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x1378d0: 0x12600062  beqz        $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x1378D0u;
    {
        const bool branch_taken_0x1378d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378D0u;
        // 0x1378d4: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378d0) {
            ctx->pc = 0x137A5Cu;
            return;
        }
    }
    ctx->pc = 0x1378D8u;
    // 0x1378d8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x1378d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1378dc: 0x0  nop
    ctx->pc = 0x1378dcu;
    // NOP
    ctx->pc = 0x1378e0u;
}
