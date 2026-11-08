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

// Function: entry_0018f238
// Address: 0x18f238 - 0x18f258
void entry_0018f238_0x18f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f238_0x18f238");
#endif

    ctx->pc = 0x18f238u;

    // 0x18f238: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F238u;
    {
        const bool branch_taken_0x18f238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F238u;
        // 0x18f23c: 0x2a240004  slti        $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f238) {
            ctx->pc = 0x18F268u;
            return;
        }
    }
    ctx->pc = 0x18F240u;
    // 0x18f240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f244: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F244u;
    {
        const bool branch_taken_0x18f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F244u;
        // 0x18f248: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f244) {
            ctx->pc = 0x18F278u;
            return;
        }
    }
    ctx->pc = 0x18F24Cu;
    // 0x18f24c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18F24Cu;
    {
        const bool branch_taken_0x18f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F24Cu;
        // 0x18f250: 0x95020008  lhu         $v0, 0x8($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f24c) {
            ctx->pc = 0x18F288u;
            return;
        }
    }
    ctx->pc = 0x18F254u;
    // 0x18f254: 0x0  nop
    ctx->pc = 0x18f254u;
    // NOP
    ctx->pc = 0x18f258u;
}
