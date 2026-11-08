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

// Function: entry_001b3d3c
// Address: 0x1b3d3c - 0x1b3d58
void entry_001b3d3c_0x1b3d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d3c_0x1b3d3c");
#endif

    ctx->pc = 0x1b3d3cu;

    // 0x1b3d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d40: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b3d44: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B3D44u;
    {
        const bool branch_taken_0x1b3d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D44u;
        // 0x1b3d48: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d44) {
            ctx->pc = 0x1B3D84u;
            return;
        }
    }
    ctx->pc = 0x1B3D4Cu;
    // 0x1b3d4c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1b3d4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1b3d50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3d54: 0x0  nop
    ctx->pc = 0x1b3d54u;
    // NOP
    ctx->pc = 0x1b3d58u;
}
