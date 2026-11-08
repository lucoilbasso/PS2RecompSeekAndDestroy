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

// Function: entry_0015eae0
// Address: 0x15eae0 - 0x15eaf8
void entry_0015eae0_0x15eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eae0_0x15eae0");
#endif

    ctx->pc = 0x15eae0u;

    // 0x15eae0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x15EAE0u;
    {
        const bool branch_taken_0x15eae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE0u;
        // 0x15eae4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eae0) {
            ctx->pc = 0x15EBE8u;
            return;
        }
    }
    ctx->pc = 0x15EAE8u;
    // 0x15eae8: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x15EAE8u;
    {
        const bool branch_taken_0x15eae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE8u;
        // 0x15eaec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eae8) {
            ctx->pc = 0x15EC48u;
            return;
        }
    }
    ctx->pc = 0x15EAF0u;
    // 0x15eaf0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x15EAF0u;
    {
        const bool branch_taken_0x15eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAF0u;
        // 0x15eaf4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eaf0) {
            ctx->pc = 0x15EC58u;
            return;
        }
    }
    ctx->pc = 0x15EAF8u;
}
