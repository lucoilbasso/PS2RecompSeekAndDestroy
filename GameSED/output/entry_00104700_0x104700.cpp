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

// Function: entry_00104700
// Address: 0x104700 - 0x10470c
void entry_00104700_0x104700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104700_0x104700");
#endif

    ctx->pc = 0x104700u;

    // 0x104700: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x104700u;
    {
        const bool branch_taken_0x104700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x104700) {
            ctx->pc = 0x104704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104700u;
            // 0x104704: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1046D8u;
            return;
        }
    }
    ctx->pc = 0x104708u;
    // 0x104708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10470cu;
}
