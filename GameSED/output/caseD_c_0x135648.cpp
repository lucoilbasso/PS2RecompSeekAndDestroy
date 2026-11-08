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

// Function: caseD_c
// Address: 0x135648 - 0x135680
void caseD_c_0x135648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x135648");
#endif

    ctx->pc = 0x135648u;

    // 0x135648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13564c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13564cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13565c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13565cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135660: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135664: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135668: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13566c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135670: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135674: 0x805099e  j           func_142678
    ctx->pc = 0x135674u;
    ctx->pc = 0x135678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135674u;
    // 0x135678: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142678u;
    ApCMTraceNoAdjust__FP7WcActor_0x142678(rdram, ctx, runtime); return;
    ctx->pc = 0x13567Cu;
    // 0x13567c: 0x0  nop
    ctx->pc = 0x13567cu;
    // NOP
    ctx->pc = 0x135680u;
}
