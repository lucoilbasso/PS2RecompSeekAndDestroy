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

// Function: entry_001bfb04
// Address: 0x1bfb04 - 0x1bfb44
void entry_001bfb04_0x1bfb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfb04_0x1bfb04");
#endif

    ctx->pc = 0x1bfb04u;

    // 0x1bfb04: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1bfb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1bfb08: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x1bfb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
    // 0x1bfb0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfb10: 0x8c660594  lw          $a2, 0x594($v1)
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
    // 0x1bfb14: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bfb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bfb18: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1bfb18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfb1c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1bfb1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfb20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfb20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfb24: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1bfb24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfb28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bfb28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfb2c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1bfb2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfb30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bfb30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfb34: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1bfb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfb38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bfb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfb3c: 0x807020e  j           func_1C0838
    ctx->pc = 0x1BFB3Cu;
    ctx->pc = 0x1BFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB3Cu;
    // 0x1bfb40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0838u;
    _copyAddRefImage_0x1c0838(rdram, ctx, runtime); return;
    ctx->pc = 0x1BFB44u;
}
