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

// Function: entry_0013aaec
// Address: 0x13aaec - 0x13ab04
void entry_0013aaec_0x13aaec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aaec_0x13aaec");
#endif

    ctx->pc = 0x13aaecu;

    // 0x13aaec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AAECu;
    {
        const bool branch_taken_0x13aaec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAECu;
        // 0x13aaf0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aaec) {
            ctx->pc = 0x13AB04u;
            return;
        }
    }
    ctx->pc = 0x13AAF4u;
    // 0x13aaf4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13aaf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13aafc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ab00: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->pc = 0x13ab04u;
}
