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

// Function: entry_00156be0
// Address: 0x156be0 - 0x156c00
void entry_00156be0_0x156be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156be0_0x156be0");
#endif

    ctx->pc = 0x156be0u;

label_156be0:
    // 0x156be0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x156be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156be4: 0x0  nop
    ctx->pc = 0x156be4u;
    // NOP
    // 0x156be8: 0x0  nop
    ctx->pc = 0x156be8u;
    // NOP
    // 0x156bec: 0x0  nop
    ctx->pc = 0x156becu;
    // NOP
    // 0x156bf0: 0x0  nop
    ctx->pc = 0x156bf0u;
    // NOP
    // 0x156bf4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156BF4u;
    {
        const bool branch_taken_0x156bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156bf4) {
            ctx->pc = 0x156BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156BF4u;
            // 0x156bf8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156be0;
        }
    }
    ctx->pc = 0x156BFCu;
    // 0x156bfc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x156bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x156c00u;
}
