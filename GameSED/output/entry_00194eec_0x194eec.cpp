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

// Function: entry_00194eec
// Address: 0x194eec - 0x194f00
void entry_00194eec_0x194eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194eec_0x194eec");
#endif

    ctx->pc = 0x194eecu;

    // 0x194eec: 0x54860005  bnel        $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x194EECu;
    {
        const bool branch_taken_0x194eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x194eec) {
            ctx->pc = 0x194EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194EECu;
            // 0x194ef0: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194F04u;
            return;
        }
    }
    ctx->pc = 0x194EF4u;
    // 0x194ef4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x194ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x194ef8: 0x10470005  beq         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x194EF8u;
    {
        const bool branch_taken_0x194ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x194ef8) {
            ctx->pc = 0x194F10u;
            return;
        }
    }
    ctx->pc = 0x194F00u;
}
