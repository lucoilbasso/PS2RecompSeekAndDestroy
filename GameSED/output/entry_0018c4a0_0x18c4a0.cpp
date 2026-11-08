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

// Function: entry_0018c4a0
// Address: 0x18c4a0 - 0x18c4c8
void entry_0018c4a0_0x18c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c4a0_0x18c4a0");
#endif

    ctx->pc = 0x18c4a0u;

label_18c4a0:
    // 0x18c4a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18c4a4: 0xa8440003  swl         $a0, 0x3($v0)
    ctx->pc = 0x18c4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c4a8: 0xb8440000  swr         $a0, 0x0($v0)
    ctx->pc = 0x18c4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c4ac: 0x0  nop
    ctx->pc = 0x18c4acu;
    // NOP
    // 0x18c4b0: 0x0  nop
    ctx->pc = 0x18c4b0u;
    // NOP
    // 0x18c4b4: 0x0  nop
    ctx->pc = 0x18c4b4u;
    // NOP
    // 0x18c4b8: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18C4B8u;
    {
        const bool branch_taken_0x18c4b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4B8u;
        // 0x18c4bc: 0x24420028  addiu       $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4b8) {
            ctx->pc = 0x18C4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c4a0;
        }
    }
    ctx->pc = 0x18C4C0u;
    // 0x18c4c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c4c4: 0xaf828d6c  sw          $v0, -0x7294($gp)
    ctx->pc = 0x18c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937964), GPR_U32(ctx, 2));
    ctx->pc = 0x18c4c8u;
}
