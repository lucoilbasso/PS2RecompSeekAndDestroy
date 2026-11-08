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

// Function: entry_001080d0
// Address: 0x1080d0 - 0x1080e8
void entry_001080d0_0x1080d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001080d0_0x1080d0");
#endif

    ctx->pc = 0x1080d0u;

    // 0x1080d0: 0x12220075  beq         $s1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1080D0u;
    {
        const bool branch_taken_0x1080d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1080D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080D0u;
        // 0x1080d4: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080d0) {
            ctx->pc = 0x1082A8u;
            return;
        }
    }
    ctx->pc = 0x1080D8u;
    // 0x1080d8: 0x5222009f  beql        $s1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1080D8u;
    {
        const bool branch_taken_0x1080d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1080d8) {
            ctx->pc = 0x1080DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080D8u;
            // 0x1080dc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108358u;
            return;
        }
    }
    ctx->pc = 0x1080E0u;
    // 0x1080e0: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1080E0u;
    {
        const bool branch_taken_0x1080e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E0u;
        // 0x1080e4: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e0) {
            ctx->pc = 0x1084E8u;
            return;
        }
    }
    ctx->pc = 0x1080E8u;
}
