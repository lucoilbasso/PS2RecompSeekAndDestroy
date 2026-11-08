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

// Function: entry_0018ceac
// Address: 0x18ceac - 0x18cebc
void entry_0018ceac_0x18ceac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ceac_0x18ceac");
#endif

    ctx->pc = 0x18ceacu;

    // 0x18ceac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CEACu;
    {
        const bool branch_taken_0x18ceac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEACu;
        // 0x18ceb0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ceac) {
            ctx->pc = 0x18CEBCu;
            return;
        }
    }
    ctx->pc = 0x18CEB4u;
    // 0x18ceb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ceb8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x18ceb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x18cebcu;
}
