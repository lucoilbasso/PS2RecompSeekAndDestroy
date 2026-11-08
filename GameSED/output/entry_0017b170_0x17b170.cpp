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

// Function: entry_0017b170
// Address: 0x17b170 - 0x17b198
void entry_0017b170_0x17b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b170_0x17b170");
#endif

    ctx->pc = 0x17b170u;

label_17b170:
    // 0x17b170: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17b170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17b174: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b178: 0x0  nop
    ctx->pc = 0x17b178u;
    // NOP
    // 0x17b17c: 0x0  nop
    ctx->pc = 0x17b17cu;
    // NOP
    // 0x17b180: 0x0  nop
    ctx->pc = 0x17b180u;
    // NOP
    // 0x17b184: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B184u;
    {
        const bool branch_taken_0x17b184 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B184u;
        // 0x17b188: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b184) {
            ctx->pc = 0x17B170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b170;
        }
    }
    ctx->pc = 0x17B18Cu;
    // 0x17b18c: 0x26500380  addiu       $s0, $s2, 0x380
    ctx->pc = 0x17b18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
    // 0x17b190: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17b194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17b198u;
}
