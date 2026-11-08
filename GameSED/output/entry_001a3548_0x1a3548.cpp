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

// Function: entry_001a3548
// Address: 0x1a3548 - 0x1a3564
void entry_001a3548_0x1a3548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3548_0x1a3548");
#endif

    ctx->pc = 0x1a3548u;

    // 0x1a3548: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x1a3548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a354c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a354cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3550u;
    {
        const bool branch_taken_0x1a3550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3550u;
        // 0x1a3554: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3550) {
            ctx->pc = 0x1A3564u;
            return;
        }
    }
    ctx->pc = 0x1A3558u;
    // 0x1a3558: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1a3558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1a355c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a3560: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1a3560u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a3564u;
}
