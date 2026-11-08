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

// Function: entry_00185ae8
// Address: 0x185ae8 - 0x185af8
void entry_00185ae8_0x185ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185ae8_0x185ae8");
#endif

    ctx->pc = 0x185ae8u;

    // 0x185ae8: 0x1222004b  beq         $s1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x185AE8u;
    {
        const bool branch_taken_0x185ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AE8u;
        // 0x185aec: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ae8) {
            ctx->pc = 0x185C18u;
            return;
        }
    }
    ctx->pc = 0x185AF0u;
    // 0x185af0: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x185AF0u;
    {
        const bool branch_taken_0x185af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF0u;
        // 0x185af4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185af0) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185AF8u;
}
