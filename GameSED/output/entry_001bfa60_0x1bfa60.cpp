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

// Function: entry_001bfa60
// Address: 0x1bfa60 - 0x1bfac0
void entry_001bfa60_0x1bfa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfa60_0x1bfa60");
#endif

    ctx->pc = 0x1bfa60u;

    // 0x1bfa60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bfa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfa64: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bfa68: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1bfa68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bfa6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1bfa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bfa70: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bfa74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfa78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BFA78u;
    {
        const bool branch_taken_0x1bfa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA78u;
        // 0x1bfa7c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa78) {
            ctx->pc = 0x1BFAC0u;
            return;
        }
    }
    ctx->pc = 0x1BFA80u;
    // 0x1bfa80: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x1bfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x1bfa84: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1bfa88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfa8c: 0x8c650594  lw          $a1, 0x594($v1)
    ctx->pc = 0x1bfa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
    // 0x1bfa90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bfa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bfa94: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1bfa94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfa98: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1bfa98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfa9c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfa9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfaa0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1bfaa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfaa4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bfaa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfaa8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1bfaa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfaac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfaacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfab0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1bfab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfab4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bfab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfab8: 0x8070226  j           func_1C0898
    ctx->pc = 0x1BFAB8u;
    ctx->pc = 0x1BFABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAB8u;
    // 0x1bfabc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0898u;
    _copyRefImage_0x1c0898(rdram, ctx, runtime); return;
    ctx->pc = 0x1BFAC0u;
}
