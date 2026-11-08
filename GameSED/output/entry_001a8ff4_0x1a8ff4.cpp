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

// Function: entry_001a8ff4
// Address: 0x1a8ff4 - 0x1a9010
void entry_001a8ff4_0x1a8ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8ff4_0x1a8ff4");
#endif

    ctx->pc = 0x1a8ff4u;

    // 0x1a8ff4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8FF4u;
    {
        const bool branch_taken_0x1a8ff4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FF4u;
        // 0x1a8ff8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ff4) {
            ctx->pc = 0x1A9010u;
            return;
        }
    }
    ctx->pc = 0x1A8FFCu;
    // 0x1a8ffc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a9000: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a9000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a9004: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A9004u;
    {
        const bool branch_taken_0x1a9004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9004u;
        // 0x1a9008: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9004) {
            ctx->pc = 0x1A9048u;
            return;
        }
    }
    ctx->pc = 0x1A900Cu;
    // 0x1a900c: 0x0  nop
    ctx->pc = 0x1a900cu;
    // NOP
    ctx->pc = 0x1a9010u;
}
