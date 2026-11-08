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

// Function: entry_00141bcc
// Address: 0x141bcc - 0x141bdc
void entry_00141bcc_0x141bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141bcc_0x141bcc");
#endif

    ctx->pc = 0x141bccu;

    // 0x141bcc: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x141bd0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x141bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x141bd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141BD4u;
    {
        const bool branch_taken_0x141bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BD4u;
        // 0x141bd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bd4) {
            ctx->pc = 0x141BE4u;
            return;
        }
    }
    ctx->pc = 0x141BDCu;
}
