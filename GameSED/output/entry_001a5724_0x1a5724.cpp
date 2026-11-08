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

// Function: entry_001a5724
// Address: 0x1a5724 - 0x1a5744
void entry_001a5724_0x1a5724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5724_0x1a5724");
#endif

    ctx->pc = 0x1a5724u;

    // 0x1a5724: 0x8e47007c  lw          $a3, 0x7C($s2)
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x1a5728: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x1a5728u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a572c: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x1a572cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5730: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a5730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5734: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1a5734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a5738: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a5738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1a573c: 0x14f20004  bne         $a3, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A573Cu;
    {
        const bool branch_taken_0x1a573c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A573Cu;
        // 0x1a5740: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a573c) {
            ctx->pc = 0x1A5750u;
            return;
        }
    }
    ctx->pc = 0x1A5744u;
}
