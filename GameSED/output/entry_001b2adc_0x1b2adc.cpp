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

// Function: entry_001b2adc
// Address: 0x1b2adc - 0x1b2b0c
void entry_001b2adc_0x1b2adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2adc_0x1b2adc");
#endif

    ctx->pc = 0x1b2adcu;

    // 0x1b2adc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1b2adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b2ae0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1b2ae0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b2ae4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b2ae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b2ae8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b2ae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b2aec: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b2aecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2af0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b2af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2af4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b2af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2af8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b2af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2afc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b2afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2b00: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b2b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B04u;
        // 0x1b2b08: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B0Cu;
}
