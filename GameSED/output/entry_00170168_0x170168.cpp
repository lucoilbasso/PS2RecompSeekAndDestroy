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

// Function: entry_00170168
// Address: 0x170168 - 0x170190
void entry_00170168_0x170168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170168_0x170168");
#endif

    ctx->pc = 0x170168u;

    // 0x170168: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x170168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17016c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x17016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x170170: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x170170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x170174: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x170174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x170178: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x170178u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17017c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x17017cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x170180: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x170180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170184: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x170184u;
    {
        const bool branch_taken_0x170184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170184u;
        // 0x170188: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170184) {
            ctx->pc = 0x170398u;
            return;
        }
    }
    ctx->pc = 0x17018Cu;
    // 0x17018c: 0x0  nop
    ctx->pc = 0x17018cu;
    // NOP
    ctx->pc = 0x170190u;
}
