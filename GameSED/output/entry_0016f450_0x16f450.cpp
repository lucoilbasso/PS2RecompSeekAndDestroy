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

// Function: entry_0016f450
// Address: 0x16f450 - 0x16f474
void entry_0016f450_0x16f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f450_0x16f450");
#endif

    ctx->pc = 0x16f450u;

    // 0x16f450: 0x8f859150  lw          $a1, -0x6EB0($gp)
    ctx->pc = 0x16f450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938960)));
    // 0x16f454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f458: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16f458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f45c: 0xaf838b68  sw          $v1, -0x7498($gp)
    ctx->pc = 0x16f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
    // 0x16f460: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x16f464: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16f468: 0x8c42ba00  lw          $v0, -0x4600($v0)
    ctx->pc = 0x16f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949376)));
    // 0x16f46c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F46Cu;
    {
        const bool branch_taken_0x16f46c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F46Cu;
        // 0x16f470: 0xaf828b64  sw          $v0, -0x749C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f46c) {
            ctx->pc = 0x16F488u;
            return;
        }
    }
    ctx->pc = 0x16F474u;
}
