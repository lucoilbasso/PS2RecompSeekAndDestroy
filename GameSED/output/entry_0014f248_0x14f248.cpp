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

// Function: entry_0014f248
// Address: 0x14f248 - 0x14f268
void entry_0014f248_0x14f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f248_0x14f248");
#endif

    ctx->pc = 0x14f248u;

    // 0x14f248: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f24c: 0x8c620c10  lw          $v0, 0xC10($v1)
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3088)));
    // 0x14f250: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F250u;
    {
        const bool branch_taken_0x14f250 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F250u;
        // 0x14f254: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f250) {
            ctx->pc = 0x14F268u;
            return;
        }
    }
    ctx->pc = 0x14F258u;
    // 0x14f258: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14f25c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F25Cu;
    {
        const bool branch_taken_0x14f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F25Cu;
        // 0x14f260: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f25c) {
            ctx->pc = 0x14F26Cu;
            return;
        }
    }
    ctx->pc = 0x14F264u;
    // 0x14f264: 0x0  nop
    ctx->pc = 0x14f264u;
    // NOP
    ctx->pc = 0x14f268u;
}
