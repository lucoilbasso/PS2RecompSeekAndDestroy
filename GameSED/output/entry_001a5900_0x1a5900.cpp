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

// Function: entry_001a5900
// Address: 0x1a5900 - 0x1a5930
void entry_001a5900_0x1a5900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5900_0x1a5900");
#endif

    ctx->pc = 0x1a5900u;

    // 0x1a5900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5904: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5908: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a5908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a590c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1a590cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5910: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a5910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1a5914: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1a5914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a5918: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1a5918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1a591c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5920: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a5920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1a5924: 0x1072000a  beq         $v1, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5924u;
    {
        const bool branch_taken_0x1a5924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5924u;
        // 0x1a5928: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5924) {
            ctx->pc = 0x1A5950u;
            return;
        }
    }
    ctx->pc = 0x1A592Cu;
    // 0x1a592c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a592cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x1a5930u;
}
