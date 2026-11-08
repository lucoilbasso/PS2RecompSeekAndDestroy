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

// Function: entry_0017faec
// Address: 0x17faec - 0x17fb00
void entry_0017faec_0x17faec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017faec_0x17faec");
#endif

    ctx->pc = 0x17faecu;

    // 0x17faec: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x17faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17faf0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17faf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x17faf4: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x17faf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17faf8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x17FAF8u;
    {
        const bool branch_taken_0x17faf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17faf8) {
            ctx->pc = 0x17FAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FAF8u;
            // 0x17fafc: 0x8d82001c  lw          $v0, 0x1C($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FA78u;
            return;
        }
    }
    ctx->pc = 0x17FB00u;
}
