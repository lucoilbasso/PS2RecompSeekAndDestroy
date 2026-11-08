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

// Function: entry_00197bcc
// Address: 0x197bcc - 0x197c08
void entry_00197bcc_0x197bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197bcc_0x197bcc");
#endif

    ctx->pc = 0x197bccu;

    // 0x197bcc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x197bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x197bd0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x197bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x197bd4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x197bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x197bd8: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x197BD8u;
    {
        const bool branch_taken_0x197bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BD8u;
        // 0x197bdc: 0x26540200  addiu       $s4, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bd8) {
            ctx->pc = 0x197CACu;
            return;
        }
    }
    ctx->pc = 0x197BE0u;
    // 0x197be0: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x197be0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x197be4: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x197be8: 0x36730200  ori         $s3, $s3, 0x200
    ctx->pc = 0x197be8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)512);
    // 0x197bec: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x197becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x197bf0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x197bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bf4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x197bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x197bf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x197BF8u;
    {
        const bool branch_taken_0x197bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF8u;
        // 0x197bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf8) {
            ctx->pc = 0x197C34u;
            return;
        }
    }
    ctx->pc = 0x197C00u;
    // 0x197c00: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x197c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x197c04: 0x0  nop
    ctx->pc = 0x197c04u;
    // NOP
    ctx->pc = 0x197c08u;
}
