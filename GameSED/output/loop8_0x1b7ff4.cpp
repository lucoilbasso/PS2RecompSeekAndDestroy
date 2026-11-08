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

// Function: loop8
// Address: 0x1b7ff4 - 0x1b8044
void loop8_0x1b7ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loop8_0x1b7ff4");
#endif

    ctx->pc = 0x1b7ff4u;

label_1b7ff4:
    // 0x1b7ff4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1b7ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1b7ff8: 0xf  sync
    ctx->pc = 0x1b7ff8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b7ffc: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1b7ffcu;
    // CACHE instruction (ignored)
    // 0x1b8000: 0xf  sync
    ctx->pc = 0x1b8000u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b8004: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x1b8004u;
    // CACHE instruction (ignored)
    // 0x1b8008: 0xf  sync
    ctx->pc = 0x1b8008u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b800c: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x1b800cu;
    // CACHE instruction (ignored)
    // 0x1b8010: 0xf  sync
    ctx->pc = 0x1b8010u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b8014: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x1b8014u;
    // CACHE instruction (ignored)
    // 0x1b8018: 0xf  sync
    ctx->pc = 0x1b8018u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b801c: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x1b801cu;
    // CACHE instruction (ignored)
    // 0x1b8020: 0xf  sync
    ctx->pc = 0x1b8020u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b8024: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x1b8024u;
    // CACHE instruction (ignored)
    // 0x1b8028: 0xf  sync
    ctx->pc = 0x1b8028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b802c: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x1b802cu;
    // CACHE instruction (ignored)
    // 0x1b8030: 0xf  sync
    ctx->pc = 0x1b8030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b8034: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x1b8034u;
    // CACHE instruction (ignored)
    // 0x1b8038: 0xf  sync
    ctx->pc = 0x1b8038u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b803c: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1B803Cu;
    {
        const bool branch_taken_0x1b803c = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x1B8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B803Cu;
        // 0x1b8040: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b803c) {
            ctx->pc = 0x1B7FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ff4;
        }
    }
    ctx->pc = 0x1B8044u;
}
