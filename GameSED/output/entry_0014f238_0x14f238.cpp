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

// Function: entry_0014f238
// Address: 0x14f238 - 0x14f248
void entry_0014f238_0x14f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f238_0x14f238");
#endif

    ctx->pc = 0x14f238u;

    // 0x14f238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F238u;
    {
        const bool branch_taken_0x14f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F238u;
        // 0x14f23c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f238) {
            ctx->pc = 0x14F248u;
            return;
        }
    }
    ctx->pc = 0x14F240u;
    // 0x14f240: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14F240u;
    {
        const bool branch_taken_0x14f240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F240u;
        // 0x14f244: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f240) {
            ctx->pc = 0x14F2B4u;
            return;
        }
    }
    ctx->pc = 0x14F248u;
}
