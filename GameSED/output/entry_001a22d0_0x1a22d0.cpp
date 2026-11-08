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

// Function: entry_001a22d0
// Address: 0x1a22d0 - 0x1a22f8
void entry_001a22d0_0x1a22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a22d0_0x1a22d0");
#endif

    ctx->pc = 0x1a22d0u;

    // 0x1a22d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a22d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a22d4: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x1a22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1a22d8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a22d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22dc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1a22dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1a22e0: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1a22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1a22e4: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1a22e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a22e8: 0xacd00028  sw          $s0, 0x28($a2)
    ctx->pc = 0x1a22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 16));
    // 0x1a22ec: 0xaf859070  sw          $a1, -0x6F90($gp)
    ctx->pc = 0x1a22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 5));
    // 0x1a22f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1A22F0u;
    {
        const bool branch_taken_0x1a22f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22F0u;
        // 0x1a22f4: 0xae30007c  sw          $s0, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22f0) {
            ctx->pc = 0x1A23B0u;
            return;
        }
    }
    ctx->pc = 0x1A22F8u;
}
