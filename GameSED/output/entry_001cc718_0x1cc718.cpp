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

// Function: entry_001cc718
// Address: 0x1cc718 - 0x1cc720
void entry_001cc718_0x1cc718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc718_0x1cc718");
#endif

    ctx->pc = 0x1cc718u;

    // 0x1cc718: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC718u;
    {
        const bool branch_taken_0x1cc718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc718) {
            ctx->pc = 0x1CC71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC718u;
            // 0x1cc71c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC734u;
            return;
        }
    }
    ctx->pc = 0x1CC720u;
}
