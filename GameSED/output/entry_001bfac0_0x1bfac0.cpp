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

// Function: entry_001bfac0
// Address: 0x1bfac0 - 0x1bfb04
void entry_001bfac0_0x1bfac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfac0_0x1bfac0");
#endif

    ctx->pc = 0x1bfac0u;

    // 0x1bfac0: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x1bfac4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BFAC4u;
    {
        const bool branch_taken_0x1bfac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAC4u;
        // 0x1bfac8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfac4) {
            ctx->pc = 0x1BFB04u;
            return;
        }
    }
    ctx->pc = 0x1BFACCu;
    // 0x1bfacc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bfaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bfad0: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
    // 0x1bfad4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfad8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1bfad8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfadc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1bfadcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfae0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfae4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1bfae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfae8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bfae8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfaec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1bfaecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfaf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfaf4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1bfaf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfaf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bfaf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfafc: 0x8070226  j           func_1C0898
    ctx->pc = 0x1BFAFCu;
    ctx->pc = 0x1BFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAFCu;
    // 0x1bfb00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0898u;
    _copyRefImage_0x1c0898(rdram, ctx, runtime); return;
    ctx->pc = 0x1BFB04u;
}
